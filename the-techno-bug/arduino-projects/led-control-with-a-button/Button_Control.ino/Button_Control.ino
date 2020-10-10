const int LED = 13;
const int button = 10;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  pinMode(button, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  if((digitalRead(button)) == LOW)
  {
    digitalWrite(LED, HIGH);
  }
  digitalWrite(LED, LOW);
  delay(1);
}
