// C++ code
//

int celsius = 0;
int base = 40;
int sensorState = 0;
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(A1, INPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(4, INPUT);
  Serial.begin(9600);
}

void loop()
{
  celsius = map(((analogRead(A1) - 20) * 3.04), 0, 1023, -40, 125);
  Serial.print(celsius);
  Serial.print(" C, ");
  if (celsius >= base) {
    digitalWrite(12, HIGH);
    digitalWrite(11, HIGH);
    delay(2000);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
  }
  sensorState = digitalRead(4);
  if (sensorState == HIGH) {
    digitalWrite(13, HIGH);
    Serial.println("Sensor activated");
    delay(2000);
    digitalWrite(13, LOW);
  } else {
    digitalWrite(13, LOW);
  }
}