// C++ code
//
int sensorvalue = 0;

void setup()
{
  pinMode(11, INPUT);
  Serial.begin(9600);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop()
{
  sensorvalue = digitalRead(11);
  Serial.println(sensorvalue);
  if (sensorvalue == 1) {
    digitalWrite(12, HIGH);
    digitalWrite(13, HIGH);
  } else {
    digitalWrite(12, LOW);
    digitalWrite(13, LOW);
  }
  delay(10); // Delay a little bit to improve simulation performance
}