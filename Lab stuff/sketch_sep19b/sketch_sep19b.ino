int ledPin=12;
int value=0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available())
  {
    value=Serial.read()-'0';
    if(value==1)
    {
      digitalWrite(ledPin, HIGH);
      Serial.println("LED: HIGH");
    }
    else if(value==0)
    {
      digitalWrite(ledPin, LOW);
      Serial.println("LED: LOW");
    }
  }

}
