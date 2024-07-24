const int fPin1 = 4;  // Digital pin 1
const int fPin2 = 5;  // Digital pin 2
const int fEnablePin = 13;  // Digital (PWM) pin for motor speed control
const int sPin1 = 12;  // Digital pin 1
const int sPin2 = 14;  // Digital pin 2
const int sEnablePin = 15;  // Digital (PWM) pin for motor speed control


void setup() {
  pinMode(fPin1, OUTPUT);
  pinMode(fPin2, OUTPUT);
  pinMode(fEnablePin, OUTPUT);
  pinMode(sPin1, OUTPUT);
  pinMode(sPin2, OUTPUT);
  pinMode(sEnablePin, OUTPUT);
}



void loop() {
  // Your motor control logic goes here
  analogWrite(fEnablePin, 128);  // Example PWM value (0-255) for half-speed
  analogWrite(sEnablePin, 128); 
  digitalWrite(fPin1, LOW);
  digitalWrite(fPin2, HIGH);
  digitalWrite(sPin1, LOW);
  digitalWrite(sPin2, HIGH);
  delay(10000);




  
  // Set the motor speed using 
  // Additional motor control code...
}
void forward(){
  analogWrite(fEnablePin, 128);  // Example PWM value (0-255) for half-speed
  analogWrite(sEnablePin, 128); 
  digitalWrite(fPin1, LOW);
  digitalWrite(fPin2, HIGH);
  digitalWrite(sPin1, LOW);
  digitalWrite(sPin2, HIGH);
}
void backward(){
  analogWrite(fEnablePin, 128);  // Example PWM value (0-255) for half-speed
  analogWrite(sEnablePin, 128); 
  digitalWrite(fPin1, HIGH);
  digitalWrite(fPin2, LOW);
  digitalWrite(sPin1, HIGH);
  digitalWrite(sPin2, LOW);
}
void stop(){
   analogWrite(fEnablePin, 0);  // Example PWM value (0-255) for half-speed
  analogWrite(sEnablePin, 0);
}

}
void rotateright(){
  analogWrite(fEnablePin, 128);  // Example PWM value (0-255) for half-speed
  analogWrite(sEnablePin, 128); 
  digitalWrite(fPin1, HIGH);
  digitalWrite(fPin2, LOW);
  digitalWrite(sPin1, LOW);
  digitalWrite(sPin2, HIGH);
}
void rotateleft(){
  analogWrite(fEnablePin, 128);  // Example PWM value (0-255) for half-speed
  analogWrite(sEnablePin, 128); 
  digitalWrite(fPin1, LOW);
  digitalWrite(fPin2, HIGH);
  digitalWrite(sPin1, HIGH);
  digitalWrite(sPin2, LOW);
}
void right(){
  analogWrite(fEnablePin, 128);  // Example PWM value (0-255) for half-speed
  analogWrite(sEnablePin, 128); 
  digitalWrite(fPin1, HIGH);
  digitalWrite(fPin2, LOW);
  digitalWrite(sPin1, LOW);
  digitalWrite(sPin2, HIGH);
}
void left(){
  analogWrite(fEnablePin, 128);  // Example PWM value (0-255) for half-speed
  analogWrite(sEnablePin, 128); 
  digitalWrite(fPin1, LOW);
  digitalWrite(fPin2, HIGH);
  digitalWrite(sPin1, HIGH);
  digitalWrite(sPin2, LOW);
}