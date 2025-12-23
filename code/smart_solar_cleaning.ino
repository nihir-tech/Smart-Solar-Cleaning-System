// Pin definitions
const int dustSensorAnalog = A0;
const int dustSensorDigital = 2;
const int ldrPin = 3;

const int motor1Pin1 = 4;
const int motor1Pin2 = 5;
const int motor2Pin1 = 6;
const int motor2Pin2 = 7;

const int bottomLimitSwitch = 9;
const int topLimitSwitch = 10;

const int dustThreshold = 100;
const int cleaningRounds = 2;

void setup() {
  // Serial for debugging
  Serial.begin(9600);

  // Motor pins
  pinMode(motor1Pin1, OUTPUT);
  pinMode(motor1Pin2, OUTPUT);
  pinMode(motor2Pin1, OUTPUT);
  pinMode(motor2Pin2, OUTPUT);

  // Sensor pins
  pinMode(dustSensorDigital, INPUT);
  pinMode(ldrPin, INPUT);
  pinMode(bottomLimitSwitch, INPUT_PULLUP);
  pinMode(topLimitSwitch, INPUT_PULLUP);
}

void loop() {
  int ldrStatus = digitalRead(ldrPin);
  int dustValue = analogRead(dustSensorAnalog);

  Serial.print("Dust: ");
  Serial.print(dustValue);
  Serial.print(" | LDR: ");
  Serial.println(ldrStatus);

  if (ldrStatus == LOW && dustValue > dustThreshold) {
    for (int i = 0; i < cleaningRounds; i++) {
      moveUp();
      delay(500); // brief pause
      moveDown();
      delay(500);
    }
    stopMotors(); // ensure stop after cleaning
    delay(10000); // wait before next possible cleaning
  }

  delay(1000);
}

void moveUp() {
  Serial.println("Moving Up");
  setMotorsForward();
  while (digitalRead(topLimitSwitch) == HIGH) {
    // Wait until top limit switch is pressed
  }
  stopMotors();
}

void moveDown() {
  Serial.println("Moving Down");
  setMotorsBackward();
  while (digitalRead(bottomLimitSwitch) == HIGH) {
    // Wait until bottom limit switch is pressed
  }
  stopMotors();
}

void setMotorsForward() {
  digitalWrite(motor1Pin1, HIGH);
  digitalWrite(motor1Pin2, LOW);
  digitalWrite(motor2Pin1, HIGH);
  digitalWrite(motor2Pin2, LOW);
}

void setMotorsBackward() {
  digitalWrite(motor1Pin1, LOW);
  digitalWrite(motor1Pin2, HIGH);
  digitalWrite(motor2Pin1, LOW);
  digitalWrite(motor2Pin2, HIGH);
}

void stopMotors() {
  digitalWrite(motor1Pin1, LOW);
  digitalWrite(motor1Pin2, LOW);
  digitalWrite(motor2Pin1, LOW);
  digitalWrite(motor2Pin2, LOW);
}
