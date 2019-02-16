#include <Servo.h>

Servo servo1, servo2;

char orden;

void setup() 
{
  servo1.attach(9);
  servo2.attach(13);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0)
  orden = Serial.read();
}

switch (orden){
  case 'w':
  servo1.write(0);
  servo2.write(0);
  break;

  case 's':
  servo1.write(90);
  servo2.write(90);  
  break;

  case 'a':
  servo1.write(90);
  servo2.write(85);  
  break;

  case 'd':
  servo1.write(95);
  servo2.write(90);  
  break;
  default
  alto():
  break;
  
}
}
