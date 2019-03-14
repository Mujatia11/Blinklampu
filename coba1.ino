/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Blink
*/
int lampuLED1 = 13;
int lampuLED2 = 8;
int lampuLED3 = 4;
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(lampuLED1, OUTPUT);
  pinMode(lampuLED2, OUTPUT);
  pinMode(lampuLED3, OUTPUT);
  
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(lampuLED1, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(200);
  digitalWrite(lampuLED2, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(300);
  digitalWrite(lampuLED3, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(400);
  // wait for a second
  digitalWrite(lampuLED1, LOW);    // turn the LED off by making the voltage LOW
  delay(200);                       // wait for a second
  digitalWrite(lampuLED2, LOW);    // turn the LED off by making the voltage LOW
  delay(300);  
  digitalWrite(lampuLED3, LOW);    // turn the LED off by making the voltage LOW
  delay(400);  
}
