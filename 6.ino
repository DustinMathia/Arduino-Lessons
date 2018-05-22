void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  int number;   //Creates variable "number" which is a number
  number = 5;   //Sets "number" value to 5

  ifelseFunction(number);   //Calls function
}

void loop() {
  // put your main code here, to run repeatedly:

}

void ifelseFunction(int a) {
  if (a == 5){    
    Serial.println("The variable's value is 5");
  }
  else{
    Serial.println("The variable's value is not 5");
  }
}

/*x == y (x is equal to y)        *note that "==" is not the same as "="* 
  x != y (x is not equal to y)
  x <  y (x is less than y)
  x >  y (x is greater than y)
  x <= y (x is less than or equal to y)
  x >= y (x is greater than or equal to y)*/

