// C++ code
//
void setup()
{
  pinMode(A4, INPUT);
  pinMode(A3, INPUT);
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(10, OUTPUT);
}
void loop()
{
  if (analogRead(A4) < 90 && digitalRead(A3) < 90) {
    analogWrite(3, 60);
    analogWrite(5, 0);
    analogWrite(6, 60);
    analogWrite(10, 0);
  }
  if (analogRead(A4) > 90 && analogRead(A3) < 90) {
    analogWrite(3, 0);
    analogWrite(5, 0);
    analogWrite(6, 60);
    analogWrite(10, 0);
  }
  if (analogRead(A4) < 90 && analogRead(A3) > 90) {
    analogWrite(3, 60);
    analogWrite(5, 0);
    analogWrite(6, 0);
    analogWrite(10, 0);
  }
  delay(10); // Delay a little bit to improve simulation performance
}
