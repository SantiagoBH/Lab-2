#include <Servo.h>
#define horario 0
#define antihorario 180
#define detener 90

Servo servoD, servoI;

char orden;

void setup() 
{
  servoD.attach(9);
  servoI.attach(13);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0)
  orden = Serial.read();
  switch(orden){


  case 'w':  //Adelante
  servoD.write(horario);
  servoI.write(antihorario);
  break;
  
  case 's': //Atras
  servoD.write(antihorario);
  servoI.write(horario);  
  break;

  case 'd':  //Girar derecha 
  servoD.write(detener);
  servoI.write(100);  
  break;

  case 'a':  //Girar izquierda 
  servoD.write(75);
  servoI.write(detener);  
  break;

  case ' ':  //Detenerse
  servoD.write(detener);
  servoI.write(detener);  
  break;
  
  
}
}
