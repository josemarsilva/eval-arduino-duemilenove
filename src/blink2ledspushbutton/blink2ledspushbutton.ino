// Global variables
int estadoBotao = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(10, OUTPUT);
  pinMode( 9, OUTPUT);
  pinMode( 7, INPUT_PULLUP);

}

void loop() {
  // put your main code here, to run repeatedly:

  estadoBotao = digitalRead(7);

  digitalWrite(10, estadoBotao);
  digitalWrite( 9, estadoBotao);

}
