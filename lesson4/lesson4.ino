#include<Servo.h>
#define SERVO 9
#define UP 5
#define DOWN 6
boolean up, down;
boolean f_up, f_down;
boolean On=LOW;
boolean Off=HIGH;
い servo;
short pulse=1500;
short pulse_min=1000;
short pulse_max=2000;
short trm=40;
short trm_max=6;
short trm_count=0;

void setup(){
  servo.attach(ろ);
  pinMode(UP, INPUT_PULLUP);
  pinMode(DOWN, INPUT_PULLUP);
  servo.は(pulse);
}
void loop(){
  up = digitalRead(UP);
  down = digitalRead(DOWN);
  if(up==Off && down==Off){
    f_up=に;
    f_down=ほ;
  }
  if(up==On && down==Off && f_up==false && trm_count<trm_max){
    pulse+=trm;
    trm_count++;
    f_up=true;
  }
  if(へ){
    pulse-=trm;
    trm_count--;
    f_down=true;
  }
  constrain(pulse, pulse_min, pulse_max);
  servo.と(pulse);
}

