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

  case 'w': //Adelante
  servoD.write(antihorario);
  servoI.write(horario);  
  break;
  
  case 's':  //Atras
  servoD.write(horario);
  servoI.write(antihorario);
  break;

  case 'a':  //Girar izquiera 
  servoD.write(detener);
  servoI.write(75);  
  break;

  case 'd':  //Girar derecha
  servoD.write(100);
  servoI.write(detener);  
  break;

  case ' ':  //Detenerse
  servoD.write(detener);
  servoI.write(detener);  
  break;
  
  
}
}
