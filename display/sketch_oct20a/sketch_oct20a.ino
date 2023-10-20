#include <Ultrasonic.h>
int pino_Trig = 3,pino_Echo = 4, distancia;
Ultrasonic Sensor(pino_Trig, pino_Echo);
int pino_buzzer = 2, frequencia = 3500;
void setup() {
  pinMode(pino_buzzer, OUTPUT);
}//setup
void loop(){

  distancia = Sensor.read();
  if(distancia < 80 && distancia > 50){
    tone(pino_buzzer, frequencia, 100);
    delay(1000);
  }//if

  if (distancia <50 && distancia > 30){
    tone (pino_buzzer, frequencia, 100);
    delay(700);
  }//if

  if (distancia < 30 && distancia > 20) {
    tone(pino_buzzer, frequencia, 100);
    delay(300);
  }//if

  if (distancia < 20 && distancia > 10){
    tone (pino_buzzer, frequencia, 100);
    delay(150);
  }//if

  if (distancia < 10) {
    tone(pino_buzzer, frequencia);
  }//if

}//loop
