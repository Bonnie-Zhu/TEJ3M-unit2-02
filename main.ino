//Blink with variable
//Turns as LED on for a second, then off for one seconde, repeatedly
//But the interval increases each time by 1 more seconds.

//created on Sep 2023
//by Bonnie Zhu

int blinkTime = 1000; // set variable to 1000

void setup() {
  // initialize digital pin LED_BUILTIN as an ouput
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);  
  delay(blinkTime);
  digitalWrite(LED_BUILTIN, LOW);  
  delay(1000);

  blinkTime = blinkTime + 1000;
}
