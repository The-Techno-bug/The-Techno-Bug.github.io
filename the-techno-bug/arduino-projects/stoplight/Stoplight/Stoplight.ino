const int red = 9;
const int ylw = 10;
const int grn = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(red, OUTPUT);
  pinMode(ylw, OUTPUT);
  pinMode(grn, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(red, HIGH);
  digitalWrite(ylw, LOW);
  digitalWrite(grn, LOW);
  delay(20000);
  digitalWrite(red, LOW);
  digitalWrite(ylw, LOW);
  digitalWrite(grn, HIGH);
  delay(20000);
  digitalWrite(red, LOW);
  digitalWrite(ylw, HIGH);
  digitalWrite(grn, LOW);
  delay(3000);
}
