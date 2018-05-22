void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  int a = 5;
  int b = 5;

  Serial.print("Variable a = ");
  Serial.println(a);

  Serial.print("Variable b = ");
  Serial.println(b);

  Serial.print("Variables a + b = ");
  Serial.println(a + b);
}

void loop() {
  // put your main code here, to run repeatedly:

}

