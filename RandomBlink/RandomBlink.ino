/*
  Turns pin 13 on and off for a random amount of time
*/
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led = 13;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);     
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(random(100, 1000));  // wait for a random period of time in miliseconds
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(random(100, 1000));  // wait for a random period of time in miliseconds
}
