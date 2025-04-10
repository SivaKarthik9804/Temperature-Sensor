const int temperature =A1;
const int D = 7;
void setup()
{
  Serial.begin(9600);
  pinMode(D,OUTPUT);
}
void loop()
{
  digitalWrite(D,LOW);
  int Temp = analogRead(temperature);
  float volts = (Temp / 965.0) * 5;
  float celcius = (volts - 0.5) * 100;
  float fahrenheit = (celcius * 9 / 5 + 32);
  Serial.println(fahrenheit);
  if(Temp>0)
    digitalWrite(D,HIGH);
  Temp=' ';
  
  delay(100);
}   
