#define RED 3
#define YELLOW 4
#define GREEN 5

void setup() {
  pinMode(RED, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(GREEN, OUTPUT);

}
void loop() {
  digitalWrite(GREEN, HIGH);
  delay(5000);
  digitalWrite(YELLOW, HIGH);
  delay(1000);
  digitalWrite(GREEN, LOW);
  delay(1000);
  digitalWrite(RED, HIGH);
  delay(5000);
  digitalWrite(YELLOW, LOW);
  delay(1000);
  digitalWrite(RED, LOW);
  delay(1000);
}
