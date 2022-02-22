const int pResistor = A0; //Photoresistor is connected to Analog pin A1 (LED Light)
const int minute = 60000;  //After 1 minute, the message would end and the morse would be decoded - can be changed for longer messages

//ON and OFF times (as int, max = 60s)
const unsigned long onTime = 1000;
const unsigned long offTime = 500;

//Inteval on how long sensor is activated
unsigned long interval = onTime;

//Trasks the list time sensor activated
unsigned long startTime = 0;
long totTime;




int pause = 250;      //Unit for a dot (0.25 sec)
                      //Dashes are 3 times that
                      //Spaces are 7 time that
                      //Pause * 2  = break between words

int LEDValue;         //Value from Photoresistor checking the LED


String code = "";
String dash = "-";
String dot = ".";


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(pResistor, INPUT);
  
  Serial.println("Recieving Transmission");
 
}

void loop() {
 
  LEDValue = analogRead(pResistor); //get the value of the resistor pointing towards the LED's

  //Serial.print("LED-Light: ");
  //Serial.println(LEDValue);

  //First find the average that the sensor is reading
  //Ambient Light Value ~940  - So set target to value close to it

  //Note: As light it sensed, value decreases
  

  if (interval) { //Waiting to see if enough time has passed
    if ( (millis() - startTime) >= interval ){
      if ( LEDValue < 850 ){                             //This value must be adjusted given the environment
                                                         //Upper line of commented code can be used to run the for a second to see the average light level
                                                         //Subtract 100 from such level, and therefore yout treshold should work
        //LED is on - Morse code is being recieved

        interval = offTime;
        startTime = millis();
        
      }
      else {
        interval = 0;
      }
    }
  }

  totTime = millis() - startTime;

  if (totTime > 200 && totTime < 300){ //Signifies a Dot
    Serial.println(".");
    code = code + dot;
  }
  else if (totTime > 450 && totTime < 600){ //Signifies a new word, so convert
    convert(code);
    code = "";
  }
  else if (totTime > 650 && totTime < 800) { //Signifies a dash
    Serial.println("-");
    code = code + dash;
  }
  else {
    interval = onTime;
    
  }
  totTime = 0;

  //delay (100);
}

void convert(String text){
  if (text == ".-"){
    Serial.print("A");
  }
  else if (text == "-..."){
    Serial.print("B");
  }
  else if (text == "-.-."){
    Serial.print("C");
  }
  else if (text == "-.."){
    Serial.print("D");
  }
  else if (text == "."){
    Serial.print("E");
  }
  else if (text == "..-."){
    Serial.print("F");
  }
  else if (text == "--."){
    Serial.print("G");
  }
  else if (text == "...."){
    Serial.print("H");
  }
  else if (text == ".."){
    Serial.print("I");
  }
  else if (text == ".---"){
    Serial.print("J");
  }
  else if (text == "-.-"){
    Serial.print("K");
  }
  else if (text == ".-.."){
    Serial.print("L");
  }
  else if (text == "--"){
    Serial.print("M");
  }
  else if (text == "-."){
    Serial.print("N");
  }
  else if (text == "---"){
    Serial.print("O");
  }
  else if (text == ".--."){
    Serial.print("P");
  }
  else if (text == "--.-"){
    Serial.print("Q");
  }
  else if (text == ".-."){
    Serial.print("R");
  }
  else if (text == "..."){
    Serial.print("S");
  }
  else if (text == "-"){
    Serial.print("T");
  }
  else if (text == "..-"){
    Serial.print("U");
  }
  else if (text == "...-"){
    Serial.print("V");
  }
  else if (text == ".--"){
    Serial.print("W");
  }
  else if (text == "-..-"){
    Serial.print("X");
  }
  else if (text == "-.--"){
    Serial.print("Y");
  }
  else if (text == "--.."){
    Serial.print("Z");
  }
  else {
    Serial.print("?"); //Unknown Character
  }

  Serial.print(" ");
  text = "";           // Reset
  
}
