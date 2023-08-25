int velocidade = 10;
void setup() {

  pinMode (3, OUTPUT);
  pinMode (5, OUTPUT);
  pinMode (6, OUTPUT);
  pinMode (9, OUTPUT);
  pinMode (10, OUTPUT);
  
}

void loop() {
  for (int frame = 1; frame<= 13; frame++){
    switch (frame) {
      case 1:
  analogWrite(3, 0);
  analogWrite(5, 0);
  analogWrite(6, 0);
  analogWrite(9, 0);
  analogWrite(10, 0);
  break;
  
   case 2:
  analogWrite(3, 255);
  analogWrite(5, 0);
  analogWrite(6, 0);
  analogWrite(9, 0);
  analogWrite(10, 0);
break;

  case 3:
  analogWrite(3, 100);
  analogWrite(5, 255);
  analogWrite(6, 0);
  analogWrite(9, 0);
  analogWrite(10, 0);
break;

  case 4:
  analogWrite(3, 50);
  analogWrite(5, 100);
  analogWrite(6, 255);
  analogWrite(9, 0);
  analogWrite(10, 0);
break;

  case 5:
  analogWrite(3, 5);
  analogWrite(5, 50);
  analogWrite(6, 100);
  analogWrite(9, 255);
  analogWrite(10, 0);
break;

  case 6:
  analogWrite(3, 0);
  analogWrite(5, 5);
  analogWrite(6, 50);
  analogWrite(9, 100);
  analogWrite(10, 255);
break;

  case 7:
  analogWrite(3, 0);
  analogWrite(5, 0);
  analogWrite(6, 5);
  analogWrite(9, 255);
  analogWrite(10, 100);
break;

  case 8:
  analogWrite(3, 0);
  analogWrite(5, 0);
  analogWrite(6, 255);
  analogWrite(9, 100);
  analogWrite(10, 50);
break;

  case 9:
  analogWrite(3, 0);
  analogWrite(5, 255);
  analogWrite(6, 100);
  analogWrite(9, 50);
  analogWrite(10, 5);
break;

  case 10:
  analogWrite(3, 250);
  analogWrite(5, 100);
  analogWrite(6, 50);
  analogWrite(9, 5);
  analogWrite(10, 0);
break;

  case 11:
  analogWrite(3, 100);
  analogWrite(5, 50);
  analogWrite(6, 5);
  analogWrite(9, 0);
  analogWrite(10, 0);
break;

  case 12:
  analogWrite(3, 50);
  analogWrite(5, 5);
  analogWrite(6, 0);
  analogWrite(9, 0);
  analogWrite(10, 0);
break;

  case 13:
  analogWrite(3, 5);
  analogWrite(5, 0);
  analogWrite(6, 0);
  analogWrite(9, 0);
  analogWrite(10, 0);
  break;
  
}
delay(1000 / velocidade);

}
}
