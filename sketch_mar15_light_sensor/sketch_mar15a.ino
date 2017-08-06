//Sensor de luz
 
int ledPin = 7; //Led no pino 7
int ledPin2 = 6;
int ldrPin = 0; //LDR no pino analígico 8
int ldrValor = 0; //Valor lido do LDR
 
void setup() {
 pinMode(ledPin,OUTPUT); //define a porta 7 como saída
 Serial.begin(9600); //Inicia a comunicação serial
 pinMode(ledPin2,OUTPUT);
 Serial.begin(9600);
}

 int numero = 0;
void loop() {
 ///ler o valor do LDR
 ldrValor = analogRead(ldrPin); //O valor lido será entre 0 e 1023

  Serial.print("Valor: " + numero);
  numero++;
 
 //se o valor lido for maior que 500, liga o led
 if (ldrValor>= 1000) {
  digitalWrite(ledPin,HIGH);
  digitalWrite(ledPin2,HIGH);

 }
 // senão, apaga o led
 else {
 digitalWrite(ledPin,LOW);
 digitalWrite(ledPin2,LOW); 
 
 }

 
 //imprime o valor lido do LDR no monitor serial
 Serial.println(ldrValor);
 delay(100);
}
