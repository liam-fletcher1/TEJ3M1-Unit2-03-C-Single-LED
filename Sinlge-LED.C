/* 
  Created On: Nov 2021
  Created By: Liam Fletcher
 
  Turns on LED on for one second, then off for one second, repeatedly.
*/

int blinkTime = 1000; // set variable to 1000

void setup() {
  // initialize digital pin 13 as an output
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH); // turn the LED on (HIGH is the voltage level)
  delay(blinkTime);       // wait for length of variable blinkTime
  digitalWrite(13, LOW);  // turn the LED off by making the voltage LOW
  delay(1000);            // wait for a second
}
