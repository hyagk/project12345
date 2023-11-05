void setup() {
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    char com = Serial.read();
    if (com == '1') {
      digitalWrite(13, HIGH); 
    } 
    if (com == '0') { 
      digitalWrite(13, LOW); 
    }
  }
}
