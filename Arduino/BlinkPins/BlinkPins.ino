/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the Uno and
  Leonardo, it is attached to digital pin 13. If you're unsure what
  pin the on-board LED is connected to on your Arduino model, check
  the documentation at http://www.arduino.cc

  This example code is in the public domain.

  modified 8 May 2014
  by Scott Fitzgerald
 */


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(13, OUTPUT);

  pinMode (8, OUTPUT);
  pinMode (9, OUTPUT);
  pinMode (10, OUTPUT);
  pinMode (11, OUTPUT);
  pinMode (12, OUTPUT);

  
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  delay(2000);              // wait for a second
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(8, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(9, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(10, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(11, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(12, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);              // wait for a second
}