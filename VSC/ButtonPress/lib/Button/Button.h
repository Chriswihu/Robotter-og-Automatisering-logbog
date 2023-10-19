#ifndef BUTTON_H
#define BUTTON_H

class Button
{
    public:
        Button(int pin, bool buttonDown);
        void setup(long start);
        void update(long now);
        bool GetButtonState();
    private:
        enum ButtonState
        {
            off,
            push,
            on,
            release
        };
        const static long _noiseCancelTimer = 10;
        int _pin;
        bool _buttonDown;
        ButtonState _buttonState;
        long _nextChangeTime;
};
     
#endif // BUTTON_H

