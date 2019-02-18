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
  //if (Serial.available() > 0)
  orden = Serial.read();
  switch(orden){

  case 'w': //Adelante
  servo1.write(180);
  servo2.write(0);  
  break;
  
  case 's':  //Atras
  servo1.write(0);
  servo2.write(180);
  break;

  case 'a':  //Girar izquiera 
  servo1.write(90);
  servo2.write(75);  
  break;

  case 'd':  //Girar derecha
  servo1.write(100);
  servo2.write(90);  
  break;

  case ' ':  //Detenerse
  servo1.write(90);
  servo2.write(90);  
  break;
  default:
  servo1.write(90);
  servo2.write(90);
  break;
  //default
  //detenerse():
  //break;
  
}
}
