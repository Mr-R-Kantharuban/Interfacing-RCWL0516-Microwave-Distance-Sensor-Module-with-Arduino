int detectPin = 10;
bool detect = false;
int led = 13;
void setup() {
 Serial.begin(115200);
 Serial.println("Starting...\n");
 pinMode (detectPin, INPUT);
 pinMode (led, OUTPUT);
}

void loop() {

 detect = digitalRead(detectPin);
 if(detect == true) {
 digitalWrite(led, HIGH);
 Serial.println("Movement detected");
 }
 else {
 digitalWrite(led, LOW);
 }
 delay(1000);
}
