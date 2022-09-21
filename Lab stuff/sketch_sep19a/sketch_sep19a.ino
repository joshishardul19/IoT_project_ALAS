int ledPin=10;
int readValue=0;
int ledValue=0;


void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  readValue=analogRead(A0);
  ledValue=map(readValue, 0, 1023, 0, 255);
  analogWrite(ledPin, ledValue);

}
