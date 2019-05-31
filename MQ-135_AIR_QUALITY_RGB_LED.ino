int redPin = D3;
int greenPin = D1;
int airquality = 0;
void setup()
{
  Serial.begin(9600);
  pinMode(redPin, OUTPUT); // red
  pinMode(greenPin, OUTPUT); // green

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

    }
    else{
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, HIGH);

    }



}
