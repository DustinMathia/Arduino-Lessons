void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  int variable = 7;

  additionFunction(6, variable);    //a would be 6, because it is in the first parameter and b would be 7, because "variable" is in the second parameter
}

void loop() {
  // put your main code here, to run repeatedly:

}

void additionFunction(int a,int b) {   //Function takes two parameters: a  and b, whcih are basically variables for the function
  int result = a + b;
  Serial.println(result);
}

