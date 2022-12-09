#define RED 3
#define YELLOW 4
#define GREEN 5

void setup() {
  pinMode(RED, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(GREEN, OUTPUT);

}
void loop() {
  digitalWrite(RED, HIGH);
  delay(5000);
  digitalWrite(RED, LOW);
  digitalWrite(YELLOW, HIGH);
  delay(500);
  digitalWrite(YELLOW, LOW);
  digitalWrite(GREEN, HIGH);
  delay(3000);
  digitalWrite(GREEN, LOW);
}
