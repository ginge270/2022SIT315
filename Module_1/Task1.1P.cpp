//For use with Tinkercard

int pir = 2;  // the number of the PIR pin
int led = 13; // the number of the LED pin
int pirStatus = 0; // initialise pir status

void setup()
{
  pinMode(led, OUTPUT); // intialise led as output
  pinMode(pir, INPUT); // initialise motion sensor as input
  Serial.begin(9600);  // initialise serial

}

void loop()
{
  pirStatus = digitalRead(pir);
  if (pirStatus == HIGH) {
  	digitalWrite(led, HIGH);
  	Serial.println("Motion detected");
  }
  else {
    digitalWrite(led, LOW);
    Serial.println("No motion detected");
  }
    
}