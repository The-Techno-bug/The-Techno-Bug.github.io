//Blink Sketch - Blink Arduino's onboard LED

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000); //ms
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000); //ms
}
