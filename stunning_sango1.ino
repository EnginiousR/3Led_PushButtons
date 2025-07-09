// Define LED pins
const int leftLED = 11;
const int middleLED = 12;
const int rightLED = 13;

// Define button pins
const int leftButton = 1;
const int middleButton = 2;
const int rightButton = 3;

void setup() {
  // Set button pins as INPUT
  pinMode(leftButton, INPUT);
  pinMode(middleButton, INPUT);
  pinMode(rightButton, INPUT);

  // Set LED pins as OUTPUT
  pinMode(leftLED, OUTPUT);
  pinMode(middleLED, OUTPUT);
  pinMode(rightLED, OUTPUT);
}

void loop() {
  // Read the button states
  int leftState = digitalRead(leftButton);
  int middleState = digitalRead(middleButton);
  int rightState = digitalRead(rightButton);

  // Turn each LED ON if its button is pressed
  digitalWrite(leftLED, leftState);
  digitalWrite(middleLED, middleState);
  digitalWrite(rightLED, rightState);

  delay(10); 
}
