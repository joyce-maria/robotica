int potenciometro = 0;

void setup() {
  Serial.begin(9600);
}
void loop() {
potenciometro = analogRead (A0);
Serial.print("Leitura da porta:");
Serial.println(potenciometro);
delay(100);
}
int potenciametro = 0;
int valorPWM;
#define pin_led 3

void setup() {
  Serial.beguin(9600);
  pinMode(pin_led, OUTPUT);
}
void loop() {
  potenciometro = analogRead (A0);
  Serial.print ("Leitura da porta:");
  Serial.println(potenciamento);
  delay(100);

v
}
