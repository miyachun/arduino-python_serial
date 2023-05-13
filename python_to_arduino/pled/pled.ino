void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  if(Serial.available()>0){
    String msg=Serial.readString();
  if(msg=="ON"){
    digitalWrite(LED_BUILTIN, HIGH); 
  }else if(msg="OFF"){
    digitalWrite(LED_BUILTIN, LOW);  
  }
 }
}
