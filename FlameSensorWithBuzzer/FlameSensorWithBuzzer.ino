/*Flame Sensor with Buzzer and Led*/

/*Definig the Arduino Pins*/
int flame = 3;
int led = 5;
int buzzer = 8;
int Fire ;

void setup() {
  /*Determine pins'status */
pinMode(3,INPUT);
pinMode(5,OUTPUT);
pinMode(8,OUTPUT);

}

void loop() {
  /*The action taken*/
Fire = digitalRead(3);
if (Fire == HIGH){
    digitalWrite(5,HIGH);
    digitalWrite(8,HIGH);
    delay(1000);
    digitalWrite(5,LOW);
    digitalWrite(8,LOW);
    delay(1000);
  
  }
  

}
