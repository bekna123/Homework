#define PIN_LED 13
unsigned int count, toggle;

void setup() {
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(115200);
  while(!Serial){

  }
  Serial.println("Hello World!");
  count = toggle = 0;
  digitalWrite(PIN_LED, 0);
}

void loop() {
  Serial.println(++count);
  toggle = toggle_State(toggle);
  digitalWrite(PIN_LED, toggle);
  delay(1000);
}

int toggle_State(int toggle){
  if(toggle == 0){
    toggle = 1;
  }else{
    toggle = 0;
  }
  return toggle;
}
