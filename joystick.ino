//pins n shit
const int SW_pin = 35; 
int X_pin = A10; 
int Y_pin = A11; 
int LED_PIN26 = 26;
int LED_PIN27 = 27;
int LED_PIN28 = 28;
int LED_PIN29 = 29;
int LED_PIN30 = 30;
int LED_PIN31 = 31;
int LED_PIN32 = 32;
int LED_PIN33 = 33;
int LED_PIN34 = 34;


void setup() {
 pinMode(SW_pin, INPUT);
  digitalWrite(SW_pin, HIGH);
 pinMode(LED_PIN26, OUTPUT);
 pinMode(LED_PIN27, OUTPUT);
 pinMode(LED_PIN28, OUTPUT);
 pinMode(LED_PIN29, OUTPUT);
 pinMode(LED_PIN30, OUTPUT);
 pinMode(LED_PIN31, OUTPUT);
 pinMode(LED_PIN32, OUTPUT);
 pinMode(LED_PIN33, OUTPUT);
 pinMode(LED_PIN34, OUTPUT);
 Serial.begin(9600);
}

void loop() {
 
  if (X_pin = 521)
 {
   digitalWrite(LED_PIN26, HIGH);
 }
else
 {
  digitalWrite(LED_PIN26, LOW);
  digitalWrite(LED_PIN27, HIGH);
  digitalWrite(LED_PIN28, HIGH);
  digitalWrite(LED_PIN29, HIGH);
  digitalWrite(LED_PIN30, HIGH);
  digitalWrite(LED_PIN31, HIGH);
  digitalWrite(LED_PIN32, HIGH);
  digitalWrite(LED_PIN33, HIGH);
  digitalWrite(LED_PIN34, HIGH);
 }
    
 Serial.print("Knopf:  ");
 Serial.print(digitalRead(SW_pin));
 Serial.print("\n");
 Serial.print("X-Achse: ");
  Serial.print(analogRead(X_pin));
  Serial.print("\n");
  Serial.print("Y-Achse: ");
  Serial.print(analogRead(Y_pin));
  Serial.print("\n\n");
  delay(500);
}
//int xPin = A10;
//int yPin = A11;
//int buttonPin = 35;
//
//int xPosition = 0;
//int yPosition = 0;
//int buttonState = 0;
//
//void setup() {
//  // initialize serial communications at 9600 bps:
//  
//  pinMode(xPin, INPUT);
//  pinMode(yPin, INPUT);
//
//  //activate pull-up resistor on the push-button pin
//  pinMode(buttonPin, INPUT_PULLUP); 
//  
//  // For versions prior to Arduino 1.0.1
//  // pinMode(buttonPin, INPUT);
//  // digitalWrite(buttonPin, HIGH);
//  
//}
//
//void loop() {
//  xPosition = analogRead(xPin);
//  yPosition = analogRead(yPin);
//  buttonState = digitalRead(buttonPin);
//  
//  Serial.print("X: ");
//  Serial.print(xPosition);
//  Serial.print(" | Y: ");
//  Serial.print(yPosition);
//  Serial.print(" | Button: ");
//  Serial.println(buttonState);
//
//  delay(100); // add some delay between reads
//}

