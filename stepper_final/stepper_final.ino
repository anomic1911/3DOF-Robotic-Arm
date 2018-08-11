//const int dirPin = 3;  // Direction
//const int stepPin = 4; // Step
// 
//// Motor steps per rotation
//const int STEPS_PER_REV = 100;
// 
//void setup() {
//  
//  // Setup the pins as Outputs
//  pinMode(stepPin,OUTPUT); 
//  pinMode(dirPin,OUTPUT);
//}
//
//void step(){
//    digitalWrite(stepPin,HIGH); 
//    delayMicroseconds(1000); 
//    digitalWrite(stepPin,LOW); 
//    delayMicroseconds(1000); 
//}
//
//void loop() {
//  
//  // Set motor direction clockwise
//  digitalWrite(dirPin,HIGH); 
//  for(int x = 0; x < STEPS_PER_REV; x++) {
//  step();
//  }
//}

int x; 
#define BAUD (9600)


void setup() 
{
  Serial.begin(BAUD);
  pinMode(6,OUTPUT); // Enable
  pinMode(4,OUTPUT); // Step
  pinMode(3,OUTPUT); // Dir
  digitalWrite(6,LOW); // Set Enable low
}

void loop() 
{
  digitalWrite(6,LOW); // Set Enable low
  digitalWrite(3,HIGH); // Set Dir high
  Serial.println("Loop 200 steps (1 rev)");
  for(x = 0; x < 100; x++) // Loop 200 times
  {
    digitalWrite(4,HIGH); // Output high
    delay(100); // Wait
    digitalWrite(4,LOW); // Output low
    delay(100); // Wait
  }
  Serial.println("Pause");
  delay(5000); // pause one second
}
