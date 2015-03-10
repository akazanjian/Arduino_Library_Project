int led = 13; // This makes a variable "led" that is equal to 13.

void setup() { // Setup will run once at the beginning of your program, and never again.
  pinMode(led, OUTPUT); // This will designate pin 13 (the variable 'led' = 13, as shown above) on your Arduino board as an output.
  digitalWrite(led, LOW); // This will turn off power for pin 13. 
}

void loop() { // Loop will run over and over. As soon as it finishes, it starts over again.
  digitalWrite(led, HIGH); // This turn on power for pin 13.
  delay(500); // This will delay the next function for 500 milliseconds, or 1/2 of a second.
  digitalWrite(led, LOW);
  delay(500);
}
