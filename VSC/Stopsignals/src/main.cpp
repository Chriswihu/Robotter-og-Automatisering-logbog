#include <Arduino.h>

const int redPinD0 = D0;
const int yellowPinD1 = D1;
const int greenPinD2 = D2;

const int redPinD5 = D5;
const int yellowPinD6 = D6;
const int greenPinD7 = D7;

enum LedState {
    STATE_RED,
    STATE_REDYELLOW,
    STATE_YELLOW,
    STATE_GREEN,
    STATE_RED_RED,
    STATE_RED2,
    STATE_REDYELLOW2,
    STATE_YELLOW2,
    STATE_GREEN2
};

LedState currentState = STATE_RED;

unsigned long previousMillis = 0;
const long blinkInterval = 500;

void setup() {
    pinMode(redPinD0, OUTPUT);
    pinMode(yellowPinD1, OUTPUT);
    pinMode(greenPinD2, OUTPUT);

    pinMode(redPinD5, OUTPUT);
    pinMode(yellowPinD6, OUTPUT);
    pinMode(greenPinD7, OUTPUT);
}

void loop() {
    unsigned long currentMillis = millis();

    switch (currentState) {
        case STATE_RED:
            digitalWrite(redPinD0, HIGH);
            digitalWrite(yellowPinD1, LOW);
            digitalWrite(greenPinD2, LOW);
            break;

        case STATE_REDYELLOW:
            digitalWrite(redPinD0, HIGH);
            digitalWrite(yellowPinD1, HIGH);
            digitalWrite(greenPinD2, LOW);
            break;

        case STATE_GREEN:
            digitalWrite(redPinD0, LOW);
            digitalWrite(yellowPinD1, LOW);
            digitalWrite(greenPinD2, HIGH);
            break;

        case STATE_YELLOW:
            digitalWrite(redPinD0, LOW);
            digitalWrite(yellowPinD1, HIGH);
            digitalWrite(greenPinD2, LOW);
            break;
        
        case STATE_RED_RED:
            digitalWrite(redPinD0, HIGH);
            digitalWrite(yellowPinD1, LOW);
            digitalWrite(greenPinD2, LOW);

        case STATE_RED2:
            digitalWrite(redPinD5, HIGH);
            digitalWrite(yellowPinD6, LOW);
            digitalWrite(greenPinD7, LOW);
            break;
        
        case STATE_REDYELLOW2:
            digitalWrite(redPinD5, HIGH);
            digitalWrite(yellowPinD6, HIGH);
            digitalWrite(greenPinD7, LOW);
            break;
        
        case STATE_YELLOW2:
            digitalWrite(redPinD5, LOW);
            digitalWrite(yellowPinD6, HIGH);
            digitalWrite(greenPinD7, LOW);
            break;
        
        case STATE_GREEN2:
            digitalWrite(redPinD5, LOW);
            digitalWrite(yellowPinD6, LOW);
            digitalWrite(greenPinD7, HIGH);
            break;

    }

    // State transition logic
    if (currentMillis % 27000 >= 24000) 
    {
         currentState = STATE_YELLOW;
    }
    else if (currentMillis % 27000 >= 21000) 
    {
        currentState = STATE_GREEN;
    } 
    else if (currentMillis % 27000 >= 18000) 
    {
        currentState = STATE_REDYELLOW;
    } 
    else if (currentMillis % 27000 >= 15000) 
    {
        currentState = STATE_RED_RED;
    } 
    else if (currentMillis % 27000 >= 12000) 
    {
        currentState = STATE_RED2;
    } 
    else if (currentMillis % 27000 >= 9000) 
    {
        currentState = STATE_YELLOW2;
    }
    else if (currentMillis % 27000 >= 6000) 
    {
        currentState = STATE_GREEN2;
    } 
    else if (currentMillis % 27000 >= 3000) 
    {
        currentState = STATE_REDYELLOW2;
    } 
    else 
    {
        currentState = STATE_RED;
    }


}