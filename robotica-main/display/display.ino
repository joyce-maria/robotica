int velocidade = 10;
void setup() {

  pinMode (3, OUTPUT);
  pinMode (5, OUTPUT);
  pinMode (6, OUTPUT);
  pinMode (9, OUTPUT);
  pinMode (10, OUTPUT);
  
}

void loop() {
  analogWrite(3, 255);
  analogWrite(5, 255);
  analogWrite(6, 255);
  analogWrite(9, 255);
  analogWrite(10, 255);
  
}
