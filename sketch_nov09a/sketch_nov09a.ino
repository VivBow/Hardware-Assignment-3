// pin assignment
const int aLocation = 36;
const int bLocation = 38;
const int yLocation = 40;
const int xLocation = 42;
const int ZRLocation = 44;

const int plusLocation = 2;
const int minusLocation = 3;
const int ZLLocation = 4;
const int DownLocation = 5;
const int RightLocation = 6;
const int LeftLocation = 7;
const int UpLocation = 8;
const int RLocation = 9;

int LjoystickButtonLocation = 13;
int LjoystickXLocation = A0;
int LjoystickYLocation = A1;

int RjoystickButtonLocation = 46;
int RjoystickXLocation = A2;
int RjoystickYLocation = A3;

//variables
int aButton = 0;
int bButton = 0;
int yButton = 0;
int xButton = 0;
int ZRButton = 0;

int plusButton = 0;
int minusButton = 0;
int ZLButton = 0;
int DownButton = 0;
int RightButton = 0;
int LeftButton = 0;
int UpButton = 0;
int RButton = 0;


int LjoystickButton = 0;
int LjoystickX = 0;
int LjoystickY = 0;
int LtestX = 0;
int LtestY = 0;

int RjoystickButton = 0;
int RjoystickX = 0;
int RjoystickY = 0;
int RtestX = 0;
int RtestY = 0;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

pinMode(aLocation, INPUT);
pinMode(bLocation, INPUT);
pinMode(yLocation, INPUT);
pinMode(xLocation, INPUT);
pinMode(ZRLocation, INPUT);

pinMode(plusLocation, INPUT);
pinMode(minusLocation, INPUT);
pinMode(ZLLocation, INPUT);
pinMode(DownLocation, INPUT);
pinMode(RightLocation, INPUT);
pinMode(LeftLocation, INPUT);
pinMode(UpLocation, INPUT);
pinMode(RLocation, INPUT);

pinMode(LjoystickButtonLocation, INPUT);
pinMode(LjoystickXLocation, INPUT);
pinMode(LjoystickYLocation, INPUT);

pinMode(RjoystickButtonLocation, INPUT);
pinMode(RjoystickXLocation, INPUT);
pinMode(RjoystickYLocation, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
aButton = digitalRead(aLocation);
bButton = digitalRead(bLocation);
yButton = digitalRead(yLocation);
xButton = digitalRead(xLocation);

DownButton = digitalRead(DownLocation);
RightButton = digitalRead(RightLocation);
LeftButton = digitalRead(LeftLocation);
UpButton = digitalRead(UpLocation);

ZRButton = digitalRead(ZRLocation);
ZLButton = digitalRead(ZLLocation);
RButton = digitalRead(RLocation);

minusButton = digitalRead(minusLocation);
plusButton = digitalRead(plusLocation);

LjoystickButton = digitalRead(LjoystickButtonLocation);
LjoystickX = analogRead(LjoystickXLocation);
LjoystickY = analogRead(LjoystickYLocation);

RjoystickButton = digitalRead(RjoystickButtonLocation);
RjoystickX = analogRead(RjoystickXLocation);
RjoystickY = analogRead(RjoystickYLocation);




if (aButton == HIGH)
{
  Serial.println(" A ");
  delay(3000);
}

if (bButton == HIGH)
{
  Serial.println(" B ");
  delay(3000);
}

if (yButton == HIGH)
{
  Serial.println(" Y ");
  delay(3000);
}

if (aButton == HIGH)
{
  Serial.println(" X ");
  delay(3000);
}


if (DownButton == HIGH)
{
  Serial.println(" Down ");
  delay(3000);
}

if (RightButton == HIGH)
{
  Serial.println(" Right ");
  delay(3000);
}

if (LeftButton == HIGH)
{
  Serial.println(" Left ");
  delay(3000);
}

if (UpButton == HIGH)
{
  Serial.println(" Up ");
  delay(3000);
}



if (ZRButton == HIGH)
{
  Serial.println(" ZR ");
  delay(3000);
}

if (ZLButton == HIGH)
{
  Serial.println(" ZL ");
  delay(3000);
}

if (RButton == HIGH)
{
  Serial.println(" R ");
  delay(3000);
}



if (plusButton == HIGH)
{
  Serial.println(" plus ");
  delay(3000);
}
if (minusButton == HIGH)
{
  Serial.println(" minus ");
  delay(3000);
}

Serial.print(" LX = ");
Serial.print(LjoystickX);
Serial.print("LY = ");
Serial.println(LjoystickY);
  delay(3000);

Serial.print(" RX = ");
Serial.print(RjoystickX);
Serial.print(" RY = ");
Serial.println(RjoystickY);
  delay(3000);
}
