//Interrupt Example

void setup()
{
  // initialize the LED pins as outputs:
  pinMode(13, OUTPUT);
  pinMode(8, OUTPUT);
  
  // initialize the pushbutton pin as an input:
  pinMode(2, INPUT_PULLUP);

  // Attach an interrupt to the ISR vector
  attachInterrupt(0, pin_ISR, FALLING);
}

void loop()
{
  digitalWrite(13,LOW);
  delay(500);
  digitalWrite(13,HIGH);
  delay(500);
}

void pin_ISR()
{
  //buttonState = digitalRead(buttonPin);
  digitalWrite(8,HIGH);
}
