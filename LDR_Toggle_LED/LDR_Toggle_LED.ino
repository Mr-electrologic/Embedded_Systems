int ldr=A0;//Set A0(Analog Input) for LDR.
int value=0;
#define LED 3
void setup() {
Serial.begin(9600);
pinMode(LED,OUTPUT);
}

void loop() {
value=analogRead(ldr);//Reads the Value of LDR(light).
Serial.println("LDR value is :");//Prints the value of LDR to Serial Monitor.
Serial.println(value);
if(value<300)
  {
    digitalWrite(LED,HIGH);//Makes the LED glow in Dark.
  }
  else
  {
    digitalWrite(LED,LOW);//Turns the LED OFF in Light.
  }
}
