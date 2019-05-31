int redPin = D3;
int greenPin = D1;
int airquality = A0;
int buzzerPin = D7;
void setup()
{
  Serial.begin(9600);
  pinMode(redPin, OUTPUT); // red
  pinMode(greenPin, OUTPUT); // green
  pinMode(buzzerPin, OUTPUT);

}
void loop()
{

  int sensorValue = analogRead(A0);
  Serial.print("Air Quality = ");
  Serial.print(sensorValue);

  Serial.print("*PPM");
  Serial.println();
  delay(1000);

if(sensorValue <= 90){
    digitalWrite(redPin, HIGH);
    digitalWrite(greenPin, LOW);
    noTone(buzzerPin);
    delay(100);
    
    }
    else{
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, HIGH);
    tone(buzzerPin, 100, 50);
    delay(100);

    }



}
