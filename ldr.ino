const int ldrPin = A0;

void setup() {

Serial.begin(9600);

pinMode(ldrPin, INPUT);

}

void loop() {

int ldrStatus = analogRead(ldrPin);

if (ldrStatus <= 300) {

Serial.print("Below 300 Ohms : ");

Serial.println(ldrStatus);

} else {

Serial.print("Above 300 Ohms : ");

Serial.println(ldrStatus);

}

}
