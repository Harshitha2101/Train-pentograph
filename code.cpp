#include <Servo.h> 
// Declare the Servo pin 
int servoPin = 9; 
// Create a servo object 
Servo Servo1; 
void setup() { 
   // We need to attach the servo to the used pin number 
   Servo1.attach(servoPin); 
}
void loop(){ 
   // Make servo go to 0 degrees 
   for(int i=0;i<190;i++)
   {
    Servo1.write(i);
    delay(50);
   }
   // Make servo go to 0 degrees 
   for(int i=190;i>=0;i--)
   {
    Servo1.write(i);
    delay(50);}
}
