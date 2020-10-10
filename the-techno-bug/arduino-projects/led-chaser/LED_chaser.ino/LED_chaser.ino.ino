const int red1 = 2;
const int blue1 = 3;
const int grn1 = 4;
const int ylw1 = 5;
const int white1 = 6;
const int red2 = 7;
const int blue2 = 8;
const int grn2 = 9;
const int ylw2 = 10;
const int white2 = 11;

void LedOn(int pin);
void LedOff(int pin);
void LedOnAndOff(int pin, int delay2);
void cycle(int delay1);

void setup() {
  // put your setup code here, to run once:
  pinMode(red1, OUTPUT);
  pinMode(blue1, OUTPUT);
  pinMode(grn1, OUTPUT);
  pinMode(ylw1, OUTPUT);
  pinMode(white1, OUTPUT);
  pinMode(red2, OUTPUT);
  pinMode(blue2, OUTPUT);
  pinMode(grn2, OUTPUT);
  pinMode(ylw2, OUTPUT);
  pinMode(white2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  cycle(50);
  delay(150);
  cycle(75);
  delay(200);
  cycle(100);
}
void LedOn(int ledpin)
{
  digitalWrite(ledpin, HIGH);
}

void LedOff(int pin)
{
  digitalWrite(pin, LOW);
}

void LedOnAndOff(int pin, int delay2)
{
  LedOn(pin);
  delay(delay2);
  LedOff(pin);
}
void cycle(int delay1)
{
  LedOnAndOff(red1, delay1);
  LedOnAndOff(blue1, delay1);
  LedOnAndOff(grn1, delay1);
  LedOnAndOff(ylw1, delay1);
  LedOnAndOff(white1, delay1);
  LedOnAndOff(red2, delay1);
  LedOnAndOff(blue2, delay1);
  LedOnAndOff(grn2, delay1);
  LedOnAndOff(ylw2, delay1);
  LedOnAndOff(white2, delay1);
}
