//LEDPins
int untereLED = 30;
int obereLED = 26;
int linkeLED = 28;
int rechteLED = 32;
//joystick pins
int yachse=A11;
int xachse=A10;
//werte
int iyachse=0;
int ixachse=0;
int toleranz = 10; //toleranz
int xmittelwert = 0;
int ymittelwert = 0;
void setup()
{
pinMode(untereLED, OUTPUT);
pinMode(obereLED, OUTPUT);
pinMode(linkeLED, OUTPUT);
pinMode(rechteLED, OUTPUT);
digitalWrite(untereLED, HIGH);
digitalWrite(obereLED, HIGH);
digitalWrite(linkeLED, HIGH);
digitalWrite(rechteLED, HIGH);
//mittelpunkt festlegen
xmittelwert = analogRead(xachse); 
ymittelwert = analogRead(yachse); 
Serial.begin(9600);
}
void loop()
{
  iyachse = analogRead(yachse);
  ixachse = analogRead(xachse);
  // oben  oder unten
  if(iyachse < ymittelwert - toleranz)
  {
    digitalWrite(untereLED, HIGH);
  }
  else
  {
    digitalWrite(untereLED, LOW);
  }
  if(iyachse > ymittelwert + toleranz)
  { 
    digitalWrite(obereLED, HIGH);
  }
  else
  {
    digitalWrite(obereLED, LOW);
  } 
  // links oder rechts
  if(ixachse < xmittelwert - toleranz)
  {
    digitalWrite(linkeLED, HIGH);
  } 
  else
  {
    digitalWrite(linkeLED, LOW);
  }
  if(ixachse > xmittelwert + toleranz)
  {
    digitalWrite(rechteLED, HIGH);
  }
  else
  {
    digitalWrite(rechteLED, LOW);
  }
  Serial.print("X-axis: ");
  Serial.print(analogRead(xachse));
  Serial.print("\n");
  Serial.print("Y-axis: ");
  Serial.println(analogRead(yachse));
  Serial.print("\n\n");
}
