const int LED1 = 10;  //LED pin is connected to Digital 10
const int LED2 = 9;   //Pin 9
const int LED3 = 8;   //Pin 8
 const int buzz = 7;  //Buzzer is connected to Digital 7

String text = "";
int len = 0;
char ch;

int pause = 250;


void Dot(){
  Serial.print(".");
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3, HIGH);
  digitalWrite(buzz, HIGH);
  delay(pause);                 //Leave the light on for 0.25 sec - Represent a Dot
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(buzz,LOW);
  delay(pause);
}

void Dash(){
  Serial.print("-");
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3, HIGH);
  digitalWrite(buzz, HIGH);
  delay(pause * 3);            //Leave the light on for 0.75 sec - Represent a Dash
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(buzz, LOW);
  delay(pause);
}

//LETTERS

void A(){
  Dot();
  delay(pause);
  Dash();
  delay(pause*2);
}
void B(){
  Dash();
  delay(pause);
  Dot();
  delay(pause);
  Dot();
  delay(pause);
  Dot();
  delay(pause*2);
}
void C(){
  Dash();
  delay(pause);
  Dot();
  delay(pause);
  Dash();
  delay(pause);
  Dot();
  delay(pause*2);
}
void D(){
  Dash();
  delay(pause);
  Dot();
  delay(pause);
  Dot();
  delay(pause*2);
}
void E(){
  Dot();
  delay(pause*2);
}
void f(){
  Dot();
  delay(pause);
  Dot();
  delay(pause);
  Dash();
  delay(pause);
  Dot();
  delay(pause*2);
}
void G(){
  Dash();
  delay(pause);
  Dash();
  delay(pause);
  Dot();
  delay(pause*2);
}
void H(){
  Dot();
  delay(pause);
  Dot();
  delay(pause);
  Dot();
  delay(pause);
  Dot();
  delay(pause*2);
}
void I(){
  Dot();
  delay(pause);
  Dot();
  delay(pause*2);
}
void J(){
  Dot();
  delay(pause);
  Dash();
  delay(pause);
  Dash();
  delay(pause);
  Dash();
  delay(pause*2);
}
void K(){
  Dash();
  delay(pause);
  Dot();
  delay(pause);
  Dash();
  delay(pause*2);
}
void L(){
  Dot();
  delay(pause);
  Dash();
  delay(pause);
  Dot();
  delay(pause);
  Dot();
  delay(pause*2);
}
void M(){
  Dash();
  delay(pause);
  Dash();
  delay(pause*2);
}
void N(){
  Dash();
  delay(pause);
  Dot();
  delay(pause*2);
}
void O(){
  Dash();
  delay(pause);
  Dash();
  delay(pause);
  Dash();
  delay(pause*2);
}
void P(){
  Dot();
  delay(pause);
  Dash();
  delay(pause);
  Dash();
  delay(pause);
  Dot();
  delay(pause*2);
}
void Q(){
  Dash();
  delay(pause);
  Dash();
  delay(pause);
  Dot();
  delay(pause);
  Dash();
  delay(pause*2);
}
void R(){
  Dot();
  delay(pause);
  Dash();
  delay(pause);
  Dot();
  delay(pause*2);
}
void S(){
  Dot();
  delay(pause);
  Dot();
  delay(pause);
  Dot();
  delay(pause*2);
}
void T(){
  Dash();
  delay(pause*2);
}
void U(){
  Dot();
  delay(pause);
  Dot();
  delay(pause);
  Dash();
  delay(pause*2);
}
void V(){
  Dot();
  delay(pause);
  Dot();
  delay(pause);
  Dot();
  delay(pause);
  Dash();
  delay(pause*2);
}
void W(){
  Dot();
  delay(pause);
  Dash();
  delay(pause);
  Dash();
  delay(pause*2);
}
void X(){
  Dash();
  delay(pause);
  Dot();
  delay(pause);
  Dot();
  delay(pause);
  Dash();
  delay(pause*2);
}
void Y(){
  Dash();
  delay(pause);
  Dot();
  delay(pause);
  Dash();
  delay(pause);
  Dash();
  delay(pause*2);
}
void Z(){
  Dash();
  delay(pause);
  Dash();
  delay(pause);
  Dot();
  delay(pause);
  Dot();
  delay(pause*2);
}
void space(){
  delay(pause * 7);
}


void morse()
{
  if (ch == 'A' || ch == 'a'){
    A();
    Serial.print(" ");
  }
  else if (ch == 'B' || ch == 'b'){
    B();
    Serial.print(" ");
  }
  else if (ch == 'C' || ch == 'c'){
    C();
    Serial.print(" ");
  }
  else if (ch == 'D' || ch == 'd'){
    D();
    Serial.print(" ");
  }
  else if (ch == 'E' || ch == 'e'){
    E();
    Serial.print(" ");
  }
  else if (ch == 'f' || ch == 'f'){
    f();
    Serial.print(" ");
  }
  else if (ch == 'G' || ch == 'g'){
    G();
    Serial.print(" ");
  }
  else if (ch == 'H' || ch == 'h'){
    H();
    Serial.print(" ");
  }
  else if (ch == 'I' || ch == 'i'){
    I();
    Serial.print(" ");
  }
  else if (ch == 'J' || ch == 'j') {
    J();
    Serial.print(" ");
  }
  else if (ch == 'K' || ch == 'k'){
    K();
    Serial.print(" ");
  }
  else if (ch == 'L' || ch == 'l'){
    L();
    Serial.print(" ");
  }
  else if (ch == 'M' || ch == 'm'){
    M();
    Serial.print(" ");
  }
  else if (ch == 'N' || ch == 'n'){
    N();
    Serial.print(" ");
  }
  else if (ch == 'O' || ch == 'o'){
    O();
    Serial.print(" ");
  }
  else if (ch == 'P' || ch == 'p'){
    P();
    Serial.print(" ");
  }
  else if (ch == 'Q' || ch == 'q'){
    Q();
    Serial.print(" ");
  }
  else if (ch == 'R' || ch == 'r'){
    R();
    Serial.print(" ");
  }
  else if (ch == 'S' || ch == 's'){
    S();
    Serial.print(" ");
  }
  else if (ch == 'T' || ch == 't'){
    T();
    Serial.print(" ");
  }
  else if (ch == 'U' || ch == 'u'){
    U();
    Serial.print(" ");
  }
  else if (ch == 'V' || ch == 'v'){
    V();
    Serial.print(" ");
  }
  else if (ch == 'W' || ch == 'w'){
    W();
    Serial.print(" ");
  }
  else if (ch == 'X' || ch == 'x'){
    X();
    Serial.print(" ");
  }
  else if (ch == 'Y' || ch == 'y'){
    Y();
    Serial.print(" ");
  }
  else if (ch == 'Z' || ch == 'z'){
    Z();
    Serial.print(" ");
  }
  else if (ch == ' '){
    space();
    Serial.print(" ");
  }
  else{
    Serial.print("Invalid Character");
    
  }
  
}

void convertToMorse(){ //convert the message to Morse
  len = text.length() - 1;
  //Serial.print(len);
  for(int i = 0; i < len ; i++){
    ch = text.charAt(i);
    morse(); //call the function to print letter
  }
}

void setup() {
  Serial.begin(9600);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(buzz, OUTPUT);
  Serial.println("Ready to convert to Morse!");
}

void loop() {
  while (Serial.available())
  {
    text = Serial.readString();
    Serial.print(text);
    Serial.print(" = ");
    convertToMorse();
    Serial.println("");
  }
  delay(1000);
}
