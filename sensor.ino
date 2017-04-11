
const int SensePin = 12; 
int SenseState =0; 
void setup() {
  
pinMode(SensePin, INPUT);
pinMode(LED_BUILTIN, OUTPUT);
}
void loop() {
  SenseState = digitalRead(SensePin);
if (SenseState ==1)
      digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on 
else
      digitalWrite(LED_BUILTIN, LOW);   // turn the LED off 
 
}
