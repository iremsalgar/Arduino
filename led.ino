void setup() {
  pinMode(3, OUTPUT);
}

void loop() {
  digitalWrite(3, HIGH);
  delay(500); 
  digitalWrite(3, LOW);
  delay(500); 
}

//pin 3 , gnd v5 + - bağları direnc ve led.
//yarım saniye  ara ile çalışır