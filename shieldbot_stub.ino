#include <Shieldbot.h>
 
Shieldbot shieldbot = Shieldbot();
int S1,S2,S3,S4,S5;	//values to store state of sensors
 
void setup(){
  Serial.begin(9600);
  shieldbot.setMaxSpeed(60);//255 is max
}
 
 
 
void go_forward() {
  shieldbot.drive(100,100);
}
 
void go_stop() {
  shieldbot.drive(0,0);
}
 
void go_left() {
  shieldbot.drive(-100,100);
}
 
void go_right() {
  shieldbot.drive(100,-100);
}
 
void go_backward() {
  shieldbot.drive(-100,-100);
}
 
void loop(){
}
