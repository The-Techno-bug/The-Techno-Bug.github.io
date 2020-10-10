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
void LedOffAndOn(int pin, int delay3);
void cycle2(int delay5);


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
  cycle(75);
  cycle(100);
  onCycle(50);
  onCycle(75);
  onCycle(150);
  int count = 0;
  while(count < 10)
  {
    cycle2(75);
    count = count + 1;
  }
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

void LedOffAndOn(int pin, int delay3)
{
  LedOff(pin);
  delay(delay3);
  LedOn(pin);
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

void onCycle(int delay4)
{
  LedOffAndOn(red1, delay4);
  LedOffAndOn(blue1, delay4);
  LedOffAndOn(grn1, delay4);
  LedOffAndOn(ylw1, delay4);
  LedOffAndOn(white1, delay4);
  LedOffAndOn(red2, delay4);
  LedOffAndOn(blue2, delay4);
  LedOffAndOn(grn2, delay4);
  LedOffAndOn(ylw2, delay4);
  LedOffAndOn(white2, delay4);
}

void cycle2(int delay5)
{
  LedOn(red1);
  LedOn(red2);
  delay(delay5);
  LedOff(red1);
  LedOff(red2);
  LedOn(blue1);
  LedOn(blue2);
  delay(delay5);
  LedOff(blue1);
  LedOff(blue2);
  LedOn(grn1);
  LedOn(grn2);
  delay(delay5);
  LedOff(grn1);
  LedOff(grn2);
  LedOn(ylw1);
  LedOn(ylw2);
  delay(delay5);
  LedOff(ylw1);
  LedOff(ylw2);
  LedOn(white1);
  LedOn(white2);
  delay(delay5);
  LedOff(white1);
  LedOff(white2);
}
