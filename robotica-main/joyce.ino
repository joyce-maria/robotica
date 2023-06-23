int vermelho = 13;
int amarelo = 12;
int verde = 11;
int vermelho2 = 10;
int amarelo2 = 9;
int verde2 = 8;

void setup () {
  pinMode (vermelho, OUTPUT);
  pinMode (amarelo, OUTPUT);
  pinMode (verde, OUTPUT);
  pinMode (vermelho2, OUTPUT);
  pinMode (amarelo2, OUTPUT);
  pinMode (verde2, OUTPUT);
  
}
void loop() {
digitalWrite(vermelho,HIGH);
digitalWrite(verde2, HIGH);
delay(1500);
   
digitalWrite(verde2,LOW);
digitalWrite(amarelo2, HIGH);  
delay(1500);

digitalWrite(vermelho,LOW);
digitalWrite(amarelo2,LOW);
digitalWrite(vermelho2,HIGH);
digitalWrite;(verde,HIGH);
delay (1500);



}
