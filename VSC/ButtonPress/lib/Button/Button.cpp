#include "Button.h"
#include "Arduino.h"

Button::Button(int pin, bool buttonDown) : _pin(pin), _buttonDown(buttonDown) {}

void Button::setup(long start)
{
    pinMode(_pin, INPUT_PULLUP);
}

void Button::update(long now)
{
    switch (_buttonState)
    {
    case off:
        if (digitalRead(_pin) != _buttonDown) return;
        _buttonState = push;
        _nextChangeTime = now + _noiseCancelTimer;
        break;
    case push:
        if(now < _nextChangeTime) return;
        _buttonState = on;
        break;
    case on:
        if (digitalRead(_pin) == _buttonDown) return;
        _buttonState = release;
        _nextChangeTime = now + _noiseCancelTimer;
        break;
    case release:
        if(now < _nextChangeTime) return;
        _buttonState = off;
        break;
    } 
}

bool Button::GetButtonState()
{
    return _buttonState == on || _buttonState == push;
}