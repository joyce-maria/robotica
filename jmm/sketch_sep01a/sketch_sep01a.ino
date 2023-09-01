int Pin_pot = A0;
int Pot = 0;
int Led_R = 9;
int Led_G = 11; //invertido por causa
int Led_B = 10; //do erro do tinkercad
//int ligar;
//int desligar;

void setup(){
  pinMode (Led_R, OUTPUT);
  pinMode (Led_G, OUTPUT);
  pinMode (Led_B, OUTPUT);
  pinMode (Pin_pot, INPUT);
}

  void loop() {
  Pot = analogRead(Pin_pot);

  if (Pot >= 0 && Pot <= 341) {
    /* Ligue o LED Veremelho.*/
    digitalWrite (Led_R, HIGH);
    /* Senão...*/
  } else {
    /*Desligue o LED Vermelho.*/
    digitalWrite (Led_R, LOW);
  }
  
  /* Se Pot estiver entre 342 e 682, faça...*/
  if (Pot >= 342 && Pot <= 682) {
    /* Ligue o LED Verde.*/
    digitalWrite (Led_G, HIGH);
    /* Senão...*/
  } else {
    /*Desligue o LED Verde.*/
    digitalWrite (Led_G, LOW);
  }
  
  /* Se Pot estiver entre 683 e 1023, faça...*/
  if (Pot >= 683 && Pot <= 1023) {
    /* Ligue o LED Azul.*/
    digitalWrite (Led_B, HIGH);
    /* Senão...*/
  } else {
    /*Desligue o LED Azul.*/
    digitalWrite (Led_B, LOW);
  }
}
