int a=7; 
int b=6; 
int c=5; 
int d=11; 
int e=10; 
int f=8; 
int g=9; 
int dp=4; 

void setup() {
  // put your setup code here, to run once:
  // Random number seed
  randomSeed(analogRead(0));
  
  // LED
  pinMode(LED_BUILTIN, OUTPUT);

  // 1-digit 7-segment display
  int i;
  for(i=4;i<=11;i++)
    pinMode(i,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  // displayTest();
  int randomNumber = random(1,9);
  displayLED();
  countdown(randomNumber);
  clearLED();
  clearDisplay();
  delay(1000);
}

void displayLED() {
  // turn on LED
  digitalWrite(LED_BUILTIN, HIGH);
}

void clearLED() {
  // turn off LED
  digitalWrite(LED_BUILTIN, LOW);
}

void countdown(int number) {
  for(int counter=number; counter>0; counter--) {
    displayNumber(counter);
    delay(1000);
    clearDisplay();
  }
}

void displayTest() {
  // test the display by displaying each digit
  clearDisplay();
  
  displayNumber(0); 
  delay(1000); 
  clearDisplay();
  
  displayNumber(1); 
  delay(1000); 
  clearDisplay();
  
  displayNumber(2); 
  delay(1000); 
  clearDisplay();
  
  displayNumber(3); 
  delay(1000);
  clearDisplay();
  
  displayNumber(4); 
  delay(1000);
  clearDisplay(); 
  
  displayNumber(5); 
  delay(1000);
  clearDisplay(); 
  
  displayNumber(6); 
  delay(1000);
  clearDisplay(); 
  
  displayNumber(7); 
  delay(1000); 
  clearDisplay();
  
  displayNumber(8); 
  delay(1000); 
  clearDisplay();  
  
  displayNumber(9); 
  delay(1000);
  clearDisplay();
}

void displayNumber(int number) {
  // accept a number (0-9) and display it
  switch(number) {
    case 1 :
      display1();
      break;
    case 2 :
      display2();
      break;
    case 3 :
      display3();
      break;
    case 4 :
      display4();
      break;
    case 5 :
      display5();
      break;
    case 6 :
      display6();
      break;
    case 7 :
      display7();
      break;
    case 8 :
      display8();
      break;
    case 9 :
      display9();
      break;
    case 0 :
      display0();
      break;
    default :
      clearDisplay();
  }
}

void display1(void) {
  //display number 1 
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
} 

void display2(void) {
  //display number2
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(d,HIGH);
} 

void display3(void) {
  // display number3 
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(g,HIGH);
} 

void display4(void) {
  // display number4
  digitalWrite(f,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(c,HIGH);
} 

void display5(void) {
  // display number5
  digitalWrite(a,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
} 

void display6(void) {
  // display number6 
  digitalWrite(a,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);  
  digitalWrite(e,HIGH);  
} 

void display7(void) {
  // display number7 
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
} 

void display8(void) {
  // display number8
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);  
  digitalWrite(e,HIGH);  
  digitalWrite(f,HIGH);  
}

void display9(void) {
  // display number9 
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);  
  digitalWrite(f,HIGH);  
} 

void display0(void) {
  // display number0 
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);  
  digitalWrite(e,HIGH);  
  digitalWrite(f,HIGH);  
} 

void clearDisplay(void) {
  // display nothing 
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(g,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);  
  digitalWrite(e,LOW);  
  digitalWrite(f,LOW);  
}
