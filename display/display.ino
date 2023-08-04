int Pino_buzzer = 11;
void setup(){

  //tone(pin,frequency, duration)
  
  pinMode(Pino_buzzer,OUTPUT);
  tone(Pino_buzzer, 264, 100); //DÓ
  delay(250);
  tone(Pino_buzzer, 297, 100); //RÉ
  delay(250);
  tone(Pino_buzzer, 330, 100); //MI
  delay(250);
  tone(Pino_buzzer, 352, 100); //FÁ
  delay(500);
  tone(Pino_buzzer, 352, 100); //FÁ
  delay(200);
  tone(Pino_buzzer, 352, 100); //FÁ
  delay(500);
}
