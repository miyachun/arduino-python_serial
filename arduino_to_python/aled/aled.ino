void setup(){
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop(){
  if(Serial.available()> 0){ 
    digitalWrite(LED_BUILTIN, HIGH);
    Serial.print("ON"); 
    delay(2000); 
    digitalWrite(LED_BUILTIN, LOW); 
    Serial.print("OFF"); 
    delay(2000); 
    }
  }
