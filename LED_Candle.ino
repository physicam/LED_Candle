long val;

void setup() {
  // put your setup code here, to run once:
  randomSeed(analogRead(0));
}

void loop() {
  // put your main code here, to run repeatedly:
  val = random(10, 150);
  analogWrite(3, val);
  delay(50);
}
