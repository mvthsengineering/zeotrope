//int motor = 9;
int light = 3;

void setup() {
  Serial.begin(9600);
//  pinMode(motor, OUTPUT);
  pinMode(light, OUTPUT);

}

void loop() {

 //Motor Driver duty cycle
  digitalWrite(light, HIGH);
  delayMicroseconds(1000);
  digitalWrite(light, LOW);
  delay(65);
}
