#include <Arduino.h>
#include <Button.h>

// put function declarations here:
int count = 0;
int buttonPin = D1;
bool _prevButtonState = false;
//unsigned long previousMillis = 0;
//const long interval = 1000;

Button myButton(buttonPin, LOW);

void setup()
{
  // put your setup code here, to run once:
  Serial.begin(9600);
  myButton.setup(millis());
}

void loop() {
  // put your main code here, to run repeatedly:
  //Serial.println(digitalRead(buttonPin));
  //delay(1000);

  long now = millis();
  myButton.update(now);
  if(_prevButtonState != myButton.GetButtonState())
  {
    _prevButtonState = myButton.GetButtonState();
    //if 
    //count++;
    //Serial.println(count);
  }
}
