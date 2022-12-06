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
  delay(500);
  digitalWrite(YELLOW, HIGH);
  delay(100);
  digitalWrite(GREEN, LOW);
  delay(100);
  digitalWrite(RED, HIGH);
  delay(500);
  digitalWrite(YELLOW, HIGH);
  delay(100);
  digitalWrite(RED, LOW);
  delay(100);
}
