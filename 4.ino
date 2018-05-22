void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  myFunction();   //call Function in setup to call only once
  
}

void loop() {
  // put your main code here, to run repeatedly:
  
}

void myFunction() {
  Serial.println("This is part of a function");   //Function only prints a phrase
}

