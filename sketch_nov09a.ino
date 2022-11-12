// pin assignment
const int buttonLocation = 11;

int joystickButtonLocation = 2;
int joystickXLocation = A0;
int joystickYLocation = A1;

//variables
int button = 0;

int joystickButton = 0;
int joystickX = 0;
int joystickY = 0;
int testX = 0;
int testY = 0;


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

pinMode(LED_BUILTIN, OUTPUT);

pinMode(buttonLocation, INPUT);

pinMode(joystickButtonLocation, INPUT);
pinMode(joystickXLocation, INPUT);
pinMode(joystickYLocation, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
button = digitalRead(buttonLocation);

joystickButton = digitalRead(joystickButtonLocation);
joystickX = analogRead(joystickXLocation);
joystickY = analogRead(joystickYLocation);

switch(Serial.read())
{
  case 'A':
  Serial.println("A is here");
  digitalWrite(LED_BUILTIN, HIGH);
  delay (1000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
  break;

}

if (button == HIGH)
{
  Serial.println(" The button has been pressed! ");
}


Serial.print(" X = ");
Serial.print(joystickX);
Serial.print(" Y = ");
Serial.println(joystickY);
  delay(1000);
}
