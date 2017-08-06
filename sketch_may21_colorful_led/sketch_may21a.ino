const int timeout = 250;
const int ledVermelho = 11;
const int led4 = 4;
const int ledAmarelo = 10;
const int led9 = 9;

int redPin = 7;
int greenPin = 6;
int bluePin = 5;

void setup() {
  // put your setup code here, to run once:
pinMode(ledAmarelo, OUTPUT);
digitalWrite(ledAmarelo, HIGH);

pinMode(ledVermelho, OUTPUT);
digitalWrite(ledVermelho, HIGH);

pinMode(led9, OUTPUT);
digitalWrite(led9, HIGH);

pinMode(led4, OUTPUT);
digitalWrite(led4, HIGH);

//grande

pinMode(bluePin, OUTPUT);
digitalWrite(bluePin, HIGH);
pinMode(greenPin, OUTPUT);
digitalWrite(greenPin, HIGH);
pinMode(redPin, OUTPUT);
digitalWrite(redPin, HIGH);


}

void setColor(int red, int green, int blue){
#ifdef COMMON_ANODE
red = 255 - red;
green = 255 - green;
blue = 255 - blue;
#endif
analogWrite(redPin, red);
analogWrite(greenPin, green);
analogWrite(bluePin, blue);
}


void loop() {
// put your main code here, to run repeatedly:
digitalWrite(ledVermelho, HIGH);
digitalWrite(led4, HIGH);
delay(timeout);                        
digitalWrite(ledVermelho, LOW);  
digitalWrite(led4, LOW);            
delay(timeout);

digitalWrite(ledAmarelo, HIGH);
digitalWrite(led9, HIGH);
delay(timeout);                        
digitalWrite(ledAmarelo, LOW); 
digitalWrite(led9, LOW);             
delay(timeout);

setColor(255, 0, 0); // red
delay(1000);
setColor(0, 255, 0); // green
delay(1000);
setColor(0, 0, 255); // blue
delay(1000);
setColor(255, 255, 0); // yellow
delay(1000);
setColor(80, 0, 80); // purple
delay(1000);
setColor(0, 255, 255); // aqua
delay(1000);

}
