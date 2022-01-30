

//Déclaration des variables

//Prémière ligne led Rouge
int redPin1 = 24;
int redPin2 = 25;
int redPin3 = 26;
int redPin4 = 27;
int redPin5 = 28;
int redPin6 = 29;

//Deuxième ligne led Verte
int greenPin1 = 30;
int greenPin2 = 31;
int greenPin3 = 32;
int greenPin4 = 33;
int greenPin5 = 34;
int greenPin6 = 35;

//Troisième ligne led Jaune
int yellowPin1 = 36;
int yellowPin2 = 37;
int yellowPin3 = 38;
int yellowPin4 = 39;
int yellowPin5 = 40;
int yellowPin6 = 41;

//Quatrième ligne bleu
int bluePin1 = 42;
int bluePin2 = 43;
int bluePin3 = 44;
int bluePin4 = 45;
int bluePin5 = 46;
int bluePin6 = 47;

//Cinquième ligne led Blanche
int whitePin1 = 48;
int whitePin2 = 49;
int whitePin3 = 50;
int whitePin4 = 51;
int whitePin5 = 52;
int whitePin6 = 53;
 

void setup() {
  // Initialisation des variables, des modes et des fonctions

//Communication bits/s
Serial.begin(9600);

// Déclaration des modes
pinMode(redPin1, OUTPUT);
pinMode(redPin2, OUTPUT);
pinMode(redPin3, OUTPUT);
pinMode(redPin4, OUTPUT);
pinMode(redPin5, OUTPUT);
pinMode(redPin6, OUTPUT);

pinMode(greenPin1, OUTPUT);
pinMode(greenPin2, OUTPUT);
pinMode(greenPin3, OUTPUT);
pinMode(greenPin4, OUTPUT);
pinMode(greenPin5, OUTPUT);
pinMode(greenPin6, OUTPUT);

pinMode(yellowPin1, OUTPUT);
pinMode(yellowPin2, OUTPUT);
pinMode(yellowPin3, OUTPUT);
pinMode(yellowPin4, OUTPUT);
pinMode(yellowPin5, OUTPUT);
pinMode(yellowPin6, OUTPUT);

pinMode(bluePin1, OUTPUT);
pinMode(bluePin2, OUTPUT);
pinMode(bluePin3, OUTPUT);
pinMode(bluePin4, OUTPUT);
pinMode(bluePin5, OUTPUT);
pinMode(bluePin6, OUTPUT);


pinMode(whitePin1, OUTPUT);
pinMode(whitePin2, OUTPUT);
pinMode(whitePin3, OUTPUT);
pinMode(whitePin4, OUTPUT);
pinMode(whitePin5, OUTPUT);
pinMode(whitePin6, OUTPUT);


//initialisation des états de sortie
digitalWrite (redPin1, LOW);
digitalWrite (redPin2, LOW);
digitalWrite (redPin3, LOW);
digitalWrite (redPin4, LOW);
digitalWrite (redPin5, LOW);
digitalWrite (redPin6, LOW);

digitalWrite (greenPin1, LOW);
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin3, LOW);
digitalWrite (greenPin4, LOW);
digitalWrite (greenPin5, LOW);
digitalWrite (greenPin6, LOW);

digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, LOW);
digitalWrite (yellowPin5, LOW);
digitalWrite (yellowPin6, LOW);

digitalWrite (bluePin1, LOW);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, LOW);
digitalWrite (bluePin5, LOW);
digitalWrite (bluePin6, LOW);

digitalWrite (whitePin1, LOW);
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin3, LOW);
digitalWrite (whitePin4, LOW);
digitalWrite (whitePin5, LOW);
digitalWrite (whitePin6, LOW);

}

void loop() {
  // put your main code here, to run repeatedly:

  Serial.println("All blink");
   allBlink();
   Serial.println("LineOneByOneOff");
   lineOneByOneOff();
   Serial.println("reOneByOneOff");
   redOneByOneOff();
   Serial.println("greenOneByOneOff");
   greenOneByOneOff();
   Serial.println("yellowOneByOneOff");
   yellowOneByOneOff();
   Serial.println("blueOneByOneOff");
   blueOneByOneOff();
   Serial.println("WhiteOneByOneOff");
   whiteOneByOneOff();
   Serial.println("allLineOneByOneOn");
   allLineOneByOneOn();
   redOneByOneOn();
   greenOneByOneOn();
   yellowOneByOneOn();
   blueOneByOneOn();
   whiteOneByOneOn();
   allLineBottomTopCenter();
   allLineLeftRightCenter();
   allLineHighSpeedOff();
   allLineHighSpeedOn();
   xAnimate();
   aAnimate();
   rectangleAnimate();
   bazzard();
  //makeFun();

}



void allBlink(){


digitalWrite (redPin1, HIGH);
digitalWrite (redPin2, HIGH);
digitalWrite (redPin3, HIGH);
digitalWrite (redPin4, HIGH);
digitalWrite (redPin5, HIGH);
digitalWrite (redPin6, HIGH);

digitalWrite (greenPin1, HIGH);
digitalWrite (greenPin2, HIGH);
digitalWrite (greenPin3, HIGH);
digitalWrite (greenPin4, HIGH);
digitalWrite (greenPin5, HIGH);
digitalWrite (greenPin6, HIGH);

digitalWrite (yellowPin1, HIGH);
digitalWrite (yellowPin2, HIGH);
digitalWrite (yellowPin3, HIGH);
digitalWrite (yellowPin4, HIGH);
digitalWrite (yellowPin5, HIGH);
digitalWrite (yellowPin6, HIGH);


digitalWrite (bluePin1, HIGH);
digitalWrite (bluePin2, HIGH);
digitalWrite (bluePin3, HIGH);
digitalWrite (bluePin4, HIGH);
digitalWrite (bluePin5, HIGH);
digitalWrite (bluePin6, HIGH);

digitalWrite (whitePin1, HIGH);
digitalWrite (whitePin2, HIGH);
digitalWrite (whitePin3, HIGH);
digitalWrite (whitePin4, HIGH);
digitalWrite (whitePin5, HIGH);
digitalWrite (whitePin6, HIGH);


delay(1000);

digitalWrite (redPin1, LOW);
digitalWrite (redPin2, LOW);
digitalWrite (redPin3, LOW);
digitalWrite (redPin4, LOW);
digitalWrite (redPin5, LOW);
digitalWrite (redPin6, LOW);

digitalWrite (greenPin1, LOW);
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin3, LOW);
digitalWrite (greenPin4, LOW);
digitalWrite (greenPin5, LOW);
digitalWrite (greenPin6, LOW);

digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, LOW);
digitalWrite (yellowPin5, LOW);
digitalWrite (yellowPin6, LOW);

digitalWrite (bluePin1, LOW);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, LOW);
digitalWrite (bluePin5, LOW);
digitalWrite (bluePin6, LOW);

digitalWrite (whitePin1, LOW);
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin3, LOW);
digitalWrite (whitePin4, LOW);
digitalWrite (whitePin5, LOW);
digitalWrite (whitePin6, LOW);

delay(1000);

digitalWrite (redPin1, HIGH);
digitalWrite (redPin2, HIGH);
digitalWrite (redPin3, HIGH);
digitalWrite (redPin4, HIGH);
digitalWrite (redPin5, HIGH);
digitalWrite (redPin6, HIGH);

digitalWrite (greenPin1, HIGH);
digitalWrite (greenPin2, HIGH);
digitalWrite (greenPin3, HIGH);
digitalWrite (greenPin4, HIGH);
digitalWrite (greenPin5, HIGH);
digitalWrite (greenPin6, HIGH);

digitalWrite (yellowPin1, HIGH);
digitalWrite (yellowPin2, HIGH);
digitalWrite (yellowPin3, HIGH);
digitalWrite (yellowPin4, HIGH);
digitalWrite (yellowPin5, HIGH);
digitalWrite (yellowPin6, HIGH);


digitalWrite (bluePin1, HIGH);
digitalWrite (bluePin2, HIGH);
digitalWrite (bluePin3, HIGH);
digitalWrite (bluePin4, HIGH);
digitalWrite (bluePin5, HIGH);
digitalWrite (bluePin6, HIGH);

digitalWrite (whitePin1, HIGH);
digitalWrite (whitePin2, HIGH);
digitalWrite (whitePin3, HIGH);
digitalWrite (whitePin4, HIGH);
digitalWrite (whitePin5, HIGH);
digitalWrite (whitePin6, HIGH);


delay(1000);

digitalWrite (redPin1, LOW);
digitalWrite (redPin2, LOW);
digitalWrite (redPin3, LOW);
digitalWrite (redPin4, LOW);
digitalWrite (redPin5, LOW);
digitalWrite (redPin6, LOW);

digitalWrite (greenPin1, LOW);
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin3, LOW);
digitalWrite (greenPin4, LOW);
digitalWrite (greenPin5, LOW);
digitalWrite (greenPin6, LOW);

digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, LOW);
digitalWrite (yellowPin5, LOW);
digitalWrite (yellowPin6, LOW);

digitalWrite (bluePin1, LOW);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, LOW);
digitalWrite (bluePin5, LOW);
digitalWrite (bluePin6, LOW);

digitalWrite (whitePin1, LOW);
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin3, LOW);
digitalWrite (whitePin4, LOW);
digitalWrite (whitePin5, LOW);
digitalWrite (whitePin6, LOW);

delay(1000);

digitalWrite (redPin1, LOW);
digitalWrite (redPin2, LOW);
digitalWrite (redPin3, LOW);
digitalWrite (redPin4, LOW);
digitalWrite (redPin5, LOW);
digitalWrite (redPin6, LOW);

digitalWrite (greenPin1, LOW);
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin3, LOW);
digitalWrite (greenPin4, LOW);
digitalWrite (greenPin5, LOW);
digitalWrite (greenPin6, LOW);

digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, LOW);
digitalWrite (yellowPin5, LOW);
digitalWrite (yellowPin6, LOW);

digitalWrite (bluePin1, LOW);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, LOW);
digitalWrite (bluePin5, LOW);
digitalWrite (bluePin6, LOW);

digitalWrite (whitePin1, LOW);
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin3, LOW);
digitalWrite (whitePin4, LOW);
digitalWrite (whitePin5, LOW);
digitalWrite (whitePin6, LOW);

delay(1000);
  
}

void lineOneByOneOff(){

digitalWrite (redPin1, HIGH);
digitalWrite (redPin2, HIGH);
digitalWrite (redPin3, HIGH);
digitalWrite (redPin4, HIGH);
digitalWrite (redPin5, HIGH);
digitalWrite (redPin6, HIGH);

digitalWrite (greenPin1, LOW);
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin3, LOW);
digitalWrite (greenPin4, LOW);
digitalWrite (greenPin5, LOW);
digitalWrite (greenPin6, LOW);

digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, LOW);
digitalWrite (yellowPin5, LOW);
digitalWrite (yellowPin6, LOW);

digitalWrite (bluePin1, LOW);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, LOW);
digitalWrite (bluePin5, LOW);
digitalWrite (bluePin6, LOW);

digitalWrite (whitePin1, LOW);
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin3, LOW);
digitalWrite (whitePin4, LOW);
digitalWrite (whitePin5, LOW);
digitalWrite (whitePin6, LOW);

delay(1000);


digitalWrite (redPin1, LOW);
digitalWrite (redPin2, LOW);
digitalWrite (redPin3, LOW);
digitalWrite (redPin4, LOW);
digitalWrite (redPin5, LOW);
digitalWrite (redPin6, LOW);

digitalWrite (greenPin1, HIGH);
digitalWrite (greenPin2, HIGH);
digitalWrite (greenPin3, HIGH);
digitalWrite (greenPin4, HIGH);
digitalWrite (greenPin5, HIGH);
digitalWrite (greenPin6, HIGH);

digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, LOW);
digitalWrite (yellowPin5, LOW);
digitalWrite (yellowPin6, LOW);

digitalWrite (bluePin1, LOW);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, LOW);
digitalWrite (bluePin5, LOW);
digitalWrite (bluePin6, LOW);

digitalWrite (whitePin1, LOW);
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin3, LOW);
digitalWrite (whitePin4, LOW);
digitalWrite (whitePin5, LOW);
digitalWrite (whitePin6, LOW);

delay(1000);

digitalWrite (redPin1, LOW);
digitalWrite (redPin2, LOW);
digitalWrite (redPin3, LOW);
digitalWrite (redPin4, LOW);
digitalWrite (redPin5, LOW);
digitalWrite (redPin6, LOW);

digitalWrite (greenPin1, LOW);
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin3, LOW);
digitalWrite (greenPin4, LOW);
digitalWrite (greenPin5, LOW);
digitalWrite (greenPin6, LOW);

digitalWrite (yellowPin1, HIGH);
digitalWrite (yellowPin2, HIGH);
digitalWrite (yellowPin3, HIGH);
digitalWrite (yellowPin4, HIGH);
digitalWrite (yellowPin5, HIGH);
digitalWrite (yellowPin6, HIGH);

digitalWrite (bluePin1, LOW);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, LOW);
digitalWrite (bluePin5, LOW);
digitalWrite (bluePin6, LOW);

digitalWrite (whitePin1, LOW);
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin3, LOW);
digitalWrite (whitePin4, LOW);
digitalWrite (whitePin5, LOW);
digitalWrite (whitePin6, LOW);

delay(1000);

digitalWrite (redPin1, LOW);
digitalWrite (redPin2, LOW);
digitalWrite (redPin3, LOW);
digitalWrite (redPin4, LOW);
digitalWrite (redPin5, LOW);
digitalWrite (redPin6, LOW);

digitalWrite (greenPin1, LOW);
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin3, LOW);
digitalWrite (greenPin4, LOW);
digitalWrite (greenPin5, LOW);
digitalWrite (greenPin6, LOW);

digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, LOW);
digitalWrite (yellowPin5, LOW);
digitalWrite (yellowPin6, LOW);

digitalWrite (bluePin1, HIGH);
digitalWrite (bluePin2, HIGH);
digitalWrite (bluePin3, HIGH);
digitalWrite (bluePin4, HIGH);
digitalWrite (bluePin5, HIGH);
digitalWrite (bluePin6, HIGH);

digitalWrite (whitePin1, LOW);
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin3, LOW);
digitalWrite (whitePin4, LOW);
digitalWrite (whitePin5, LOW);
digitalWrite (whitePin6, LOW);

delay(1000);

digitalWrite (redPin1, LOW);
digitalWrite (redPin2, LOW);
digitalWrite (redPin3, LOW);
digitalWrite (redPin4, LOW);
digitalWrite (redPin5, LOW);
digitalWrite (redPin6, LOW);

digitalWrite (greenPin1, LOW);
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin3, LOW);
digitalWrite (greenPin4, LOW);
digitalWrite (greenPin5, LOW);
digitalWrite (greenPin6, LOW);

digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, LOW);
digitalWrite (yellowPin5, LOW);
digitalWrite (yellowPin6, LOW);

digitalWrite (bluePin1, LOW);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, LOW);
digitalWrite (bluePin5, LOW);
digitalWrite (bluePin6, LOW);

digitalWrite (whitePin1, HIGH);
digitalWrite (whitePin2, HIGH);
digitalWrite (whitePin3, HIGH);
digitalWrite (whitePin4, HIGH);
digitalWrite (whitePin5, HIGH);
digitalWrite (whitePin6, HIGH);

delay(1000);

digitalWrite (redPin1, HIGH);
digitalWrite (redPin2, HIGH);
digitalWrite (redPin3, HIGH);
digitalWrite (redPin4, HIGH);
digitalWrite (redPin5, HIGH);
digitalWrite (redPin6, HIGH);

digitalWrite (greenPin1, LOW);
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin3, LOW);
digitalWrite (greenPin4, LOW);
digitalWrite (greenPin5, LOW);
digitalWrite (greenPin6, LOW);

digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, LOW);
digitalWrite (yellowPin5, LOW);
digitalWrite (yellowPin6, LOW);

digitalWrite (bluePin1, LOW);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, LOW);
digitalWrite (bluePin5, LOW);
digitalWrite (bluePin6, LOW);

digitalWrite (whitePin1, LOW);
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin3, LOW);
digitalWrite (whitePin4, LOW);
digitalWrite (whitePin5, LOW);
digitalWrite (whitePin6, LOW);

delay(1000);


digitalWrite (redPin1, LOW);
digitalWrite (redPin2, LOW);
digitalWrite (redPin3, LOW);
digitalWrite (redPin4, LOW);
digitalWrite (redPin5, LOW);
digitalWrite (redPin6, LOW);

digitalWrite (greenPin1, HIGH);
digitalWrite (greenPin2, HIGH);
digitalWrite (greenPin3, HIGH);
digitalWrite (greenPin4, HIGH);
digitalWrite (greenPin5, HIGH);
digitalWrite (greenPin6, HIGH);

digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, LOW);
digitalWrite (yellowPin5, LOW);
digitalWrite (yellowPin6, LOW);

digitalWrite (bluePin1, LOW);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, LOW);
digitalWrite (bluePin5, LOW);
digitalWrite (bluePin6, LOW);

digitalWrite (whitePin1, LOW);
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin3, LOW);
digitalWrite (whitePin4, LOW);
digitalWrite (whitePin5, LOW);
digitalWrite (whitePin6, LOW);

delay(1000);

digitalWrite (redPin1, LOW);
digitalWrite (redPin2, LOW);
digitalWrite (redPin3, LOW);
digitalWrite (redPin4, LOW);
digitalWrite (redPin5, LOW);
digitalWrite (redPin6, LOW);

digitalWrite (greenPin1, LOW);
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin3, LOW);
digitalWrite (greenPin4, LOW);
digitalWrite (greenPin5, LOW);
digitalWrite (greenPin6, LOW);

digitalWrite (yellowPin1, HIGH);
digitalWrite (yellowPin2, HIGH);
digitalWrite (yellowPin3, HIGH);
digitalWrite (yellowPin4, HIGH);
digitalWrite (yellowPin5, HIGH);
digitalWrite (yellowPin6, HIGH);

digitalWrite (bluePin1, LOW);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, LOW);
digitalWrite (bluePin5, LOW);
digitalWrite (bluePin6, LOW);

digitalWrite (whitePin1, LOW);
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin3, LOW);
digitalWrite (whitePin4, LOW);
digitalWrite (whitePin5, LOW);
digitalWrite (whitePin6, LOW);

delay(1000);

digitalWrite (redPin1, LOW);
digitalWrite (redPin2, LOW);
digitalWrite (redPin3, LOW);
digitalWrite (redPin4, LOW);
digitalWrite (redPin5, LOW);
digitalWrite (redPin6, LOW);

digitalWrite (greenPin1, LOW);
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin3, LOW);
digitalWrite (greenPin4, LOW);
digitalWrite (greenPin5, LOW);
digitalWrite (greenPin6, LOW);

digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, LOW);
digitalWrite (yellowPin5, LOW);
digitalWrite (yellowPin6, LOW);

digitalWrite (bluePin1, HIGH);
digitalWrite (bluePin2, HIGH);
digitalWrite (bluePin3, HIGH);
digitalWrite (bluePin4, HIGH);
digitalWrite (bluePin5, HIGH);
digitalWrite (bluePin6, HIGH);

digitalWrite (whitePin1, LOW);
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin3, LOW);
digitalWrite (whitePin4, LOW);
digitalWrite (whitePin5, LOW);
digitalWrite (whitePin6, LOW);

delay(1000);

digitalWrite (redPin1, LOW);
digitalWrite (redPin2, LOW);
digitalWrite (redPin3, LOW);
digitalWrite (redPin4, LOW);
digitalWrite (redPin5, LOW);
digitalWrite (redPin6, LOW);

digitalWrite (greenPin1, LOW);
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin3, LOW);
digitalWrite (greenPin4, LOW);
digitalWrite (greenPin5, LOW);
digitalWrite (greenPin6, LOW);

digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, LOW);
digitalWrite (yellowPin5, LOW);
digitalWrite (yellowPin6, LOW);

digitalWrite (bluePin1, LOW);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, LOW);
digitalWrite (bluePin5, LOW);
digitalWrite (bluePin6, LOW);

digitalWrite (whitePin1, HIGH);
digitalWrite (whitePin2, HIGH);
digitalWrite (whitePin3, HIGH);
digitalWrite (whitePin4, HIGH);
digitalWrite (whitePin5, HIGH);
digitalWrite (whitePin6, HIGH);

delay(1000);

digitalWrite (redPin1, LOW);
digitalWrite (redPin2, LOW);
digitalWrite (redPin3, LOW);
digitalWrite (redPin4, LOW);
digitalWrite (redPin5, LOW);
digitalWrite (redPin6, LOW);

digitalWrite (greenPin1, LOW);
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin3, LOW);
digitalWrite (greenPin4, LOW);
digitalWrite (greenPin5, LOW);
digitalWrite (greenPin6, LOW);

digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, LOW);
digitalWrite (yellowPin5, LOW);
digitalWrite (yellowPin6, LOW);

digitalWrite (bluePin1, LOW);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, LOW);
digitalWrite (bluePin5, LOW);
digitalWrite (bluePin6, LOW);

digitalWrite (whitePin1, LOW);
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin3, LOW);
digitalWrite (whitePin4, LOW);
digitalWrite (whitePin5, LOW);
digitalWrite (whitePin6, LOW);

delay(1000);
}

void redOneByOneOff(){

digitalWrite (redPin1, HIGH);
digitalWrite (redPin2, LOW);
digitalWrite (redPin3, LOW);
digitalWrite (redPin4, LOW);
digitalWrite (redPin5, LOW);
digitalWrite (redPin6, LOW);
delay(500);

digitalWrite (redPin1, LOW);
digitalWrite (redPin2, HIGH);
digitalWrite (redPin3, LOW);
digitalWrite (redPin4, LOW);
digitalWrite (redPin5, LOW);
digitalWrite (redPin6, LOW);
delay(500);

digitalWrite (redPin1, LOW);
digitalWrite (redPin2, LOW);
digitalWrite (redPin3, HIGH);
digitalWrite (redPin4, LOW);
digitalWrite (redPin5, LOW);
digitalWrite (redPin6, LOW);
delay(500);

digitalWrite (redPin1, LOW);
digitalWrite (redPin2, LOW);
digitalWrite (redPin3, LOW);
digitalWrite (redPin4, HIGH);
digitalWrite (redPin5, LOW);
digitalWrite (redPin6, LOW);
delay(500);

digitalWrite (redPin1, LOW);
digitalWrite (redPin2, LOW);
digitalWrite (redPin3, LOW);
digitalWrite (redPin4, LOW);
digitalWrite (redPin5, HIGH);
digitalWrite (redPin6, LOW);
delay(500);

digitalWrite (redPin1, LOW);
digitalWrite (redPin2, LOW);
digitalWrite (redPin3, LOW);
digitalWrite (redPin4, LOW);
digitalWrite (redPin5, LOW);
digitalWrite (redPin6, HIGH);
delay(500);

digitalWrite (redPin1, LOW);
digitalWrite (redPin2, LOW);
digitalWrite (redPin3, LOW);
digitalWrite (redPin4, LOW);
digitalWrite (redPin5, LOW);
digitalWrite (redPin6, LOW);

digitalWrite (greenPin1, LOW);
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin3, LOW);
digitalWrite (greenPin4, LOW);
digitalWrite (greenPin5, LOW);
digitalWrite (greenPin6, LOW);

digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, LOW);
digitalWrite (yellowPin5, LOW);
digitalWrite (yellowPin6, LOW);

digitalWrite (bluePin1, LOW);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, LOW);
digitalWrite (bluePin5, LOW);
digitalWrite (bluePin6, LOW);

digitalWrite (whitePin1, LOW);
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin3, LOW);
digitalWrite (whitePin4, LOW);
digitalWrite (whitePin5, LOW);
digitalWrite (whitePin6, LOW);

delay(1000);

 
}

void greenOneByOneOff(){

digitalWrite (greenPin1, HIGH);
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin3, LOW);
digitalWrite (greenPin4, LOW);
digitalWrite (greenPin5, LOW);
digitalWrite (greenPin6, LOW);
delay(500);

digitalWrite (greenPin1, LOW);
digitalWrite (greenPin2, HIGH);
digitalWrite (greenPin3, LOW);
digitalWrite (greenPin4, LOW);
digitalWrite (greenPin5, LOW);
digitalWrite (greenPin6, LOW);
delay(500);

digitalWrite (greenPin1, LOW);
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin3, HIGH);
digitalWrite (greenPin4, LOW);
digitalWrite (greenPin5, LOW);
digitalWrite (greenPin6, LOW);
delay(500);

digitalWrite (greenPin1, LOW);
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin3, LOW);
digitalWrite (greenPin4, HIGH);
digitalWrite (greenPin5, LOW);
digitalWrite (greenPin6, LOW);
delay(500);

digitalWrite (greenPin1, LOW);
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin3, LOW);
digitalWrite (greenPin4, LOW);
digitalWrite (greenPin5, HIGH);
digitalWrite (greenPin6, LOW);
delay(500);

digitalWrite (greenPin1, LOW);
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin3, LOW);
digitalWrite (greenPin4, LOW);
digitalWrite (greenPin5, LOW);
digitalWrite (greenPin6, HIGH);
delay(500);

digitalWrite (redPin1, LOW);
digitalWrite (redPin2, LOW);
digitalWrite (redPin3, LOW);
digitalWrite (redPin4, LOW);
digitalWrite (redPin5, LOW);
digitalWrite (redPin6, LOW);

digitalWrite (greenPin1, LOW);
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin3, LOW);
digitalWrite (greenPin4, LOW);
digitalWrite (greenPin5, LOW);
digitalWrite (greenPin6, LOW);

digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, LOW);
digitalWrite (yellowPin5, LOW);
digitalWrite (yellowPin6, LOW);

digitalWrite (bluePin1, LOW);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, LOW);
digitalWrite (bluePin5, LOW);
digitalWrite (bluePin6, LOW);

digitalWrite (whitePin1, LOW);
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin3, LOW);
digitalWrite (whitePin4, LOW);
digitalWrite (whitePin5, LOW);
digitalWrite (whitePin6, LOW);

delay(1000);

}

void yellowOneByOneOff(){

digitalWrite (yellowPin1, HIGH);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, LOW);
digitalWrite (yellowPin5, LOW);
digitalWrite (yellowPin6, LOW);
delay(500);

digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin2, HIGH);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, LOW);
digitalWrite (yellowPin5, LOW);
digitalWrite (yellowPin6, LOW);
delay(500);

digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, HIGH);
digitalWrite (yellowPin4, LOW);
digitalWrite (yellowPin5, LOW);
digitalWrite (yellowPin6, LOW);
delay(500);

digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, HIGH);
digitalWrite (yellowPin5, LOW);
digitalWrite (yellowPin6, LOW);
delay(500);

digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, LOW);
digitalWrite (yellowPin5, HIGH);
digitalWrite (yellowPin6, LOW);
delay(500);

digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, LOW);
digitalWrite (yellowPin5, LOW);
digitalWrite (yellowPin6, HIGH);
delay(500);

digitalWrite (redPin1, LOW);
digitalWrite (redPin2, LOW);
digitalWrite (redPin3, LOW);
digitalWrite (redPin4, LOW);
digitalWrite (redPin5, LOW);
digitalWrite (redPin6, LOW);

digitalWrite (greenPin1, LOW);
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin3, LOW);
digitalWrite (greenPin4, LOW);
digitalWrite (greenPin5, LOW);
digitalWrite (greenPin6, LOW);

digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, LOW);
digitalWrite (yellowPin5, LOW);
digitalWrite (yellowPin6, LOW);

digitalWrite (bluePin1, LOW);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, LOW);
digitalWrite (bluePin5, LOW);
digitalWrite (bluePin6, LOW);

digitalWrite (whitePin1, LOW);
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin3, LOW);
digitalWrite (whitePin4, LOW);
digitalWrite (whitePin5, LOW);
digitalWrite (whitePin6, LOW);

delay(1000);
}

void blueOneByOneOff(){

digitalWrite (bluePin1, HIGH);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, LOW);
digitalWrite (bluePin5, LOW);
digitalWrite (bluePin6, LOW);
delay(500);

digitalWrite (bluePin1, LOW);
digitalWrite (bluePin2, HIGH);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, LOW);
digitalWrite (bluePin5, LOW);
digitalWrite (bluePin6, LOW);
delay(500);

digitalWrite (bluePin1, LOW);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin3, HIGH);
digitalWrite (bluePin4, LOW);
digitalWrite (bluePin5, LOW);
digitalWrite (bluePin6, LOW);
delay(500);

digitalWrite (bluePin1, LOW);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, HIGH);
digitalWrite (bluePin5, LOW);
digitalWrite (bluePin6, LOW);
delay(500);

digitalWrite (bluePin1, LOW);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, LOW);
digitalWrite (bluePin5, HIGH);
digitalWrite (bluePin6, LOW);
delay(500);

digitalWrite (bluePin1, LOW);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, LOW);
digitalWrite (bluePin5, LOW);
digitalWrite (bluePin6, HIGH);
delay(500);

digitalWrite (redPin1, LOW);
digitalWrite (redPin2, LOW);
digitalWrite (redPin3, LOW);
digitalWrite (redPin4, LOW);
digitalWrite (redPin5, LOW);
digitalWrite (redPin6, LOW);

digitalWrite (greenPin1, LOW);
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin3, LOW);
digitalWrite (greenPin4, LOW);
digitalWrite (greenPin5, LOW);
digitalWrite (greenPin6, LOW);

digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, LOW);
digitalWrite (yellowPin5, LOW);
digitalWrite (yellowPin6, LOW);

digitalWrite (bluePin1, LOW);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, LOW);
digitalWrite (bluePin5, LOW);
digitalWrite (bluePin6, LOW);

digitalWrite (whitePin1, LOW);
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin3, LOW);
digitalWrite (whitePin4, LOW);
digitalWrite (whitePin5, LOW);
digitalWrite (whitePin6, LOW);

delay(1000);

}


void whiteOneByOneOff(){

digitalWrite (whitePin1, HIGH);
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin3, LOW);
digitalWrite (whitePin4, LOW);
digitalWrite (whitePin5, LOW);
digitalWrite (whitePin6, LOW);
delay(500);

digitalWrite (whitePin1, LOW);
digitalWrite (whitePin2, HIGH);
digitalWrite (whitePin3, LOW);
digitalWrite (whitePin4, LOW);
digitalWrite (whitePin5, LOW);
digitalWrite (whitePin6, LOW);
delay(500);

digitalWrite (whitePin1, LOW);
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin3, HIGH);
digitalWrite (whitePin4, LOW);
digitalWrite (whitePin5, LOW);
digitalWrite (whitePin6, LOW);
delay(500);

digitalWrite (whitePin1, LOW);
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin3, LOW);
digitalWrite (whitePin4, HIGH);
digitalWrite (whitePin5, LOW);
digitalWrite (whitePin6, LOW);
delay(500);

digitalWrite (whitePin1, LOW);
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin3, LOW);
digitalWrite (whitePin4, LOW);
digitalWrite (whitePin5, HIGH);
digitalWrite (whitePin6, LOW);
delay(500);

digitalWrite (whitePin1, LOW);
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin3, LOW);
digitalWrite (whitePin4, LOW);
digitalWrite (whitePin5, LOW);
digitalWrite (whitePin6, HIGH);
delay(500);

digitalWrite (redPin1, LOW);
digitalWrite (redPin2, LOW);
digitalWrite (redPin3, LOW);
digitalWrite (redPin4, LOW);
digitalWrite (redPin5, LOW);
digitalWrite (redPin6, LOW);

digitalWrite (greenPin1, LOW);
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin3, LOW);
digitalWrite (greenPin4, LOW);
digitalWrite (greenPin5, LOW);
digitalWrite (greenPin6, LOW);

digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, LOW);
digitalWrite (yellowPin5, LOW);
digitalWrite (yellowPin6, LOW);

digitalWrite (bluePin1, LOW);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, LOW);
digitalWrite (bluePin5, LOW);
digitalWrite (bluePin6, LOW);

digitalWrite (whitePin1, LOW);
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin3, LOW);
digitalWrite (whitePin4, LOW);
digitalWrite (whitePin5, LOW);
digitalWrite (whitePin6, LOW);

delay(1000);
}

void allLineOneByOneOn(){

digitalWrite (redPin1, HIGH);
digitalWrite (redPin2, HIGH);
digitalWrite (redPin3, HIGH);
digitalWrite (redPin4, HIGH);
digitalWrite (redPin5, HIGH);
digitalWrite (redPin6, HIGH);

digitalWrite (greenPin1, LOW);
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin3, LOW);
digitalWrite (greenPin4, LOW);
digitalWrite (greenPin5, LOW);
digitalWrite (greenPin6, LOW);

digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, LOW);
digitalWrite (yellowPin5, LOW);
digitalWrite (yellowPin6, LOW);

digitalWrite (bluePin1, LOW);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, LOW);
digitalWrite (bluePin5, LOW);
digitalWrite (bluePin6, LOW);

digitalWrite (whitePin1, LOW);
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin3, LOW);
digitalWrite (whitePin4, LOW);
digitalWrite (whitePin5, LOW);
digitalWrite (whitePin6, LOW);

delay(1000);


digitalWrite (redPin1, HIGH);
digitalWrite (redPin2, HIGH);
digitalWrite (redPin3, HIGH);
digitalWrite (redPin4, HIGH);
digitalWrite (redPin5, HIGH);
digitalWrite (redPin6, HIGH);

digitalWrite (greenPin1, HIGH);
digitalWrite (greenPin2, HIGH);
digitalWrite (greenPin3, HIGH);
digitalWrite (greenPin4, HIGH);
digitalWrite (greenPin5, HIGH);
digitalWrite (greenPin6, HIGH);

digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, LOW);
digitalWrite (yellowPin5, LOW);
digitalWrite (yellowPin6, LOW);

digitalWrite (bluePin1, LOW);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, LOW);
digitalWrite (bluePin5, LOW);
digitalWrite (bluePin6, LOW);

digitalWrite (whitePin1, LOW);
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin3, LOW);
digitalWrite (whitePin4, LOW);
digitalWrite (whitePin5, LOW);
digitalWrite (whitePin6, LOW);

delay(1000);

digitalWrite (redPin1, HIGH);
digitalWrite (redPin2, HIGH);
digitalWrite (redPin3, HIGH);
digitalWrite (redPin4, HIGH);
digitalWrite (redPin5, HIGH);
digitalWrite (redPin6, HIGH);

digitalWrite (greenPin1, HIGH);
digitalWrite (greenPin2, HIGH);
digitalWrite (greenPin3, HIGH);
digitalWrite (greenPin4, HIGH);
digitalWrite (greenPin5, HIGH);
digitalWrite (greenPin6, HIGH);

digitalWrite (yellowPin1, HIGH);
digitalWrite (yellowPin2, HIGH);
digitalWrite (yellowPin3, HIGH);
digitalWrite (yellowPin4, HIGH);
digitalWrite (yellowPin5, HIGH);
digitalWrite (yellowPin6, HIGH);

digitalWrite (bluePin1, LOW);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, LOW);
digitalWrite (bluePin5, LOW);
digitalWrite (bluePin6, LOW);

digitalWrite (whitePin1, LOW);
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin3, LOW);
digitalWrite (whitePin4, LOW);
digitalWrite (whitePin5, LOW);
digitalWrite (whitePin6, LOW);

delay(1000);

digitalWrite (redPin1, HIGH);
digitalWrite (redPin2, HIGH);
digitalWrite (redPin3, HIGH);
digitalWrite (redPin4, HIGH);
digitalWrite (redPin5, HIGH);
digitalWrite (redPin6, HIGH);

digitalWrite (greenPin1, HIGH);
digitalWrite (greenPin2, HIGH);
digitalWrite (greenPin3, HIGH);
digitalWrite (greenPin4, HIGH);
digitalWrite (greenPin5, HIGH);
digitalWrite (greenPin6, HIGH);

digitalWrite (yellowPin1, HIGH);
digitalWrite (yellowPin2, HIGH);
digitalWrite (yellowPin3, HIGH);
digitalWrite (yellowPin4, HIGH);
digitalWrite (yellowPin5, HIGH);
digitalWrite (yellowPin6, HIGH);

digitalWrite (bluePin1, HIGH);
digitalWrite (bluePin2, HIGH);
digitalWrite (bluePin3, HIGH);
digitalWrite (bluePin4, HIGH);
digitalWrite (bluePin5, HIGH);
digitalWrite (bluePin6, HIGH);

digitalWrite (whitePin1, LOW);
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin3, LOW);
digitalWrite (whitePin4, LOW);
digitalWrite (whitePin5, LOW);
digitalWrite (whitePin6, LOW);

delay(1000);

digitalWrite (redPin1, HIGH);
digitalWrite (redPin2, HIGH);
digitalWrite (redPin3, HIGH);
digitalWrite (redPin4, HIGH);
digitalWrite (redPin5, HIGH);
digitalWrite (redPin6, HIGH);

digitalWrite (greenPin1, HIGH);
digitalWrite (greenPin2, HIGH);
digitalWrite (greenPin3, HIGH);
digitalWrite (greenPin4, HIGH);
digitalWrite (greenPin5, HIGH);
digitalWrite (greenPin6, HIGH);

digitalWrite (yellowPin1, HIGH);
digitalWrite (yellowPin2, HIGH);
digitalWrite (yellowPin3, HIGH);
digitalWrite (yellowPin4, HIGH);
digitalWrite (yellowPin5, HIGH);
digitalWrite (yellowPin6, HIGH);

digitalWrite (bluePin1, HIGH);
digitalWrite (bluePin2, HIGH);
digitalWrite (bluePin3, HIGH);
digitalWrite (bluePin4, HIGH);
digitalWrite (bluePin5, HIGH);
digitalWrite (bluePin6, HIGH);

digitalWrite (whitePin1, HIGH);
digitalWrite (whitePin2, HIGH);
digitalWrite (whitePin3, HIGH);
digitalWrite (whitePin4, HIGH);
digitalWrite (whitePin5, HIGH);
digitalWrite (whitePin6, HIGH);

delay(1000);

digitalWrite (redPin1, HIGH);
digitalWrite (redPin2, HIGH);
digitalWrite (redPin3, HIGH);
digitalWrite (redPin4, HIGH);
digitalWrite (redPin5, HIGH);
digitalWrite (redPin6, HIGH);

digitalWrite (greenPin1, LOW);
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin3, LOW);
digitalWrite (greenPin4, LOW);
digitalWrite (greenPin5, LOW);
digitalWrite (greenPin6, LOW);

digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, LOW);
digitalWrite (yellowPin5, LOW);
digitalWrite (yellowPin6, LOW);

digitalWrite (bluePin1, LOW);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, LOW);
digitalWrite (bluePin5, LOW);
digitalWrite (bluePin6, LOW);

digitalWrite (whitePin1, LOW);
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin3, LOW);
digitalWrite (whitePin4, LOW);
digitalWrite (whitePin5, LOW);
digitalWrite (whitePin6, LOW);

delay(1000);


digitalWrite (redPin1, HIGH);
digitalWrite (redPin2, HIGH);
digitalWrite (redPin3, HIGH);
digitalWrite (redPin4, HIGH);
digitalWrite (redPin5, HIGH);
digitalWrite (redPin6, HIGH);

digitalWrite (greenPin1, HIGH);
digitalWrite (greenPin2, HIGH);
digitalWrite (greenPin3, HIGH);
digitalWrite (greenPin4, HIGH);
digitalWrite (greenPin5, HIGH);
digitalWrite (greenPin6, HIGH);

digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, LOW);
digitalWrite (yellowPin5, LOW);
digitalWrite (yellowPin6, LOW);

digitalWrite (bluePin1, LOW);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, LOW);
digitalWrite (bluePin5, LOW);
digitalWrite (bluePin6, LOW);

digitalWrite (whitePin1, LOW);
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin3, LOW);
digitalWrite (whitePin4, LOW);
digitalWrite (whitePin5, LOW);
digitalWrite (whitePin6, LOW);

delay(1000);

digitalWrite (redPin1, HIGH);
digitalWrite (redPin2, HIGH);
digitalWrite (redPin3, HIGH);
digitalWrite (redPin4, HIGH);
digitalWrite (redPin5, HIGH);
digitalWrite (redPin6, HIGH);

digitalWrite (greenPin1, HIGH);
digitalWrite (greenPin2, HIGH);
digitalWrite (greenPin3, HIGH);
digitalWrite (greenPin4, HIGH);
digitalWrite (greenPin5, HIGH);
digitalWrite (greenPin6, HIGH);

digitalWrite (yellowPin1, HIGH);
digitalWrite (yellowPin2, HIGH);
digitalWrite (yellowPin3, HIGH);
digitalWrite (yellowPin4, HIGH);
digitalWrite (yellowPin5, HIGH);
digitalWrite (yellowPin6, HIGH);

digitalWrite (bluePin1, LOW);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, LOW);
digitalWrite (bluePin5, LOW);
digitalWrite (bluePin6, LOW);

digitalWrite (whitePin1, LOW);
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin3, LOW);
digitalWrite (whitePin4, LOW);
digitalWrite (whitePin5, LOW);
digitalWrite (whitePin6, LOW);

delay(1000);

digitalWrite (redPin1, HIGH);
digitalWrite (redPin2, HIGH);
digitalWrite (redPin3, HIGH);
digitalWrite (redPin4, HIGH);
digitalWrite (redPin5, HIGH);
digitalWrite (redPin6, HIGH);

digitalWrite (greenPin1, HIGH);
digitalWrite (greenPin2, HIGH);
digitalWrite (greenPin3, HIGH);
digitalWrite (greenPin4, HIGH);
digitalWrite (greenPin5, HIGH);
digitalWrite (greenPin6, HIGH);

digitalWrite (yellowPin1, HIGH);
digitalWrite (yellowPin2, HIGH);
digitalWrite (yellowPin3, HIGH);
digitalWrite (yellowPin4, HIGH);
digitalWrite (yellowPin5, HIGH);
digitalWrite (yellowPin6, HIGH);

digitalWrite (bluePin1, HIGH);
digitalWrite (bluePin2, HIGH);
digitalWrite (bluePin3, HIGH);
digitalWrite (bluePin4, HIGH);
digitalWrite (bluePin5, HIGH);
digitalWrite (bluePin6, HIGH);

digitalWrite (whitePin1, LOW);
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin3, LOW);
digitalWrite (whitePin4, LOW);
digitalWrite (whitePin5, LOW);
digitalWrite (whitePin6, LOW);

delay(1000);

digitalWrite (redPin1, HIGH);
digitalWrite (redPin2, HIGH);
digitalWrite (redPin3, HIGH);
digitalWrite (redPin4, HIGH);
digitalWrite (redPin5, HIGH);
digitalWrite (redPin6, HIGH);

digitalWrite (greenPin1, HIGH);
digitalWrite (greenPin2, HIGH);
digitalWrite (greenPin3, HIGH);
digitalWrite (greenPin4, HIGH);
digitalWrite (greenPin5, HIGH);
digitalWrite (greenPin6, HIGH);

digitalWrite (yellowPin1, HIGH);
digitalWrite (yellowPin2, HIGH);
digitalWrite (yellowPin3, HIGH);
digitalWrite (yellowPin4, HIGH);
digitalWrite (yellowPin5, HIGH);
digitalWrite (yellowPin6, HIGH);

digitalWrite (bluePin1, HIGH);
digitalWrite (bluePin2, HIGH);
digitalWrite (bluePin3, HIGH);
digitalWrite (bluePin4, HIGH);
digitalWrite (bluePin5, HIGH);
digitalWrite (bluePin6, HIGH);

digitalWrite (whitePin1, HIGH);
digitalWrite (whitePin2, HIGH);
digitalWrite (whitePin3, HIGH);
digitalWrite (whitePin4, HIGH);
digitalWrite (whitePin5, HIGH);
digitalWrite (whitePin6, HIGH);

delay(1000);

digitalWrite (redPin1, LOW);
digitalWrite (redPin2, LOW);
digitalWrite (redPin3, LOW);
digitalWrite (redPin4, LOW);
digitalWrite (redPin5, LOW);
digitalWrite (redPin6, LOW);

digitalWrite (greenPin1, LOW);
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin3, LOW);
digitalWrite (greenPin4, LOW);
digitalWrite (greenPin5, LOW);
digitalWrite (greenPin6, LOW);

digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, LOW);
digitalWrite (yellowPin5, LOW);
digitalWrite (yellowPin6, LOW);

digitalWrite (bluePin1, LOW);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, LOW);
digitalWrite (bluePin5, LOW);
digitalWrite (bluePin6, LOW);

digitalWrite (whitePin1, LOW);
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin3, LOW);
digitalWrite (whitePin4, LOW);
digitalWrite (whitePin5, LOW);
digitalWrite (whitePin6, LOW);

delay(1000);
}


void redOneByOneOn(){

digitalWrite (redPin1, HIGH);
digitalWrite (redPin2, LOW);
digitalWrite (redPin3, LOW);
digitalWrite (redPin4, LOW);
digitalWrite (redPin5, LOW);
digitalWrite (redPin6, LOW);
delay(500);

digitalWrite (redPin1, HIGH);
digitalWrite (redPin2, HIGH);
digitalWrite (redPin3, LOW);
digitalWrite (redPin4, LOW);
digitalWrite (redPin5, LOW);
digitalWrite (redPin6, LOW);
delay(500);

digitalWrite (redPin1, HIGH);
digitalWrite (redPin2, HIGH);
digitalWrite (redPin3, HIGH);
digitalWrite (redPin4, LOW);
digitalWrite (redPin5, LOW);
digitalWrite (redPin6, LOW);
delay(500);

digitalWrite (redPin1, HIGH);
digitalWrite (redPin2, HIGH);
digitalWrite (redPin3, HIGH);
digitalWrite (redPin4, HIGH);
digitalWrite (redPin5, LOW);
digitalWrite (redPin6, LOW);
delay(500);

digitalWrite (redPin1, HIGH);
digitalWrite (redPin2, HIGH);
digitalWrite (redPin3, HIGH);
digitalWrite (redPin4, HIGH);
digitalWrite (redPin5, HIGH);
digitalWrite (redPin6, LOW);
delay(500);

digitalWrite (redPin1, HIGH);
digitalWrite (redPin2, HIGH);
digitalWrite (redPin3, HIGH);
digitalWrite (redPin4, HIGH);
digitalWrite (redPin5, HIGH);
digitalWrite (redPin6, HIGH);
delay(500);

digitalWrite (redPin1, LOW);
digitalWrite (redPin2, LOW);
digitalWrite (redPin3, LOW);
digitalWrite (redPin4, LOW);
digitalWrite (redPin5, LOW);
digitalWrite (redPin6, LOW);

digitalWrite (greenPin1, LOW);
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin3, LOW);
digitalWrite (greenPin4, LOW);
digitalWrite (greenPin5, LOW);
digitalWrite (greenPin6, LOW);

digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, LOW);
digitalWrite (yellowPin5, LOW);
digitalWrite (yellowPin6, LOW);

digitalWrite (bluePin1, LOW);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, LOW);
digitalWrite (bluePin5, LOW);
digitalWrite (bluePin6, LOW);

digitalWrite (whitePin1, LOW);
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin3, LOW);
digitalWrite (whitePin4, LOW);
digitalWrite (whitePin5, LOW);
digitalWrite (whitePin6, LOW);

delay(1000);

 
}

void greenOneByOneOn(){

digitalWrite (greenPin1, HIGH);
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin3, LOW);
digitalWrite (greenPin4, LOW);
digitalWrite (greenPin5, LOW);
digitalWrite (greenPin6, LOW);
delay(500);

digitalWrite (greenPin1, HIGH);
digitalWrite (greenPin2, HIGH);
digitalWrite (greenPin3, LOW);
digitalWrite (greenPin4, LOW);
digitalWrite (greenPin5, LOW);
digitalWrite (greenPin6, LOW);
delay(500);

digitalWrite (greenPin1, HIGH);
digitalWrite (greenPin2, HIGH);
digitalWrite (greenPin3, HIGH);
digitalWrite (greenPin4, LOW);
digitalWrite (greenPin5, LOW);
digitalWrite (greenPin6, LOW);
delay(500);

digitalWrite (greenPin1, HIGH);
digitalWrite (greenPin2, HIGH);
digitalWrite (greenPin3, HIGH);
digitalWrite (greenPin4, HIGH);
digitalWrite (greenPin5, LOW);
digitalWrite (greenPin6, LOW);
delay(500);

digitalWrite (greenPin1, HIGH);
digitalWrite (greenPin2, HIGH);
digitalWrite (greenPin3, HIGH);
digitalWrite (greenPin4, HIGH);
digitalWrite (greenPin5, HIGH);
digitalWrite (greenPin6, LOW);
delay(500);

digitalWrite (greenPin1, HIGH);
digitalWrite (greenPin2, HIGH);
digitalWrite (greenPin3, HIGH);
digitalWrite (greenPin4, HIGH);
digitalWrite (greenPin5, HIGH);
digitalWrite (greenPin6, HIGH);
delay(500);

digitalWrite (redPin1, LOW);
digitalWrite (redPin2, LOW);
digitalWrite (redPin3, LOW);
digitalWrite (redPin4, LOW);
digitalWrite (redPin5, LOW);
digitalWrite (redPin6, LOW);

digitalWrite (greenPin1, LOW);
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin3, LOW);
digitalWrite (greenPin4, LOW);
digitalWrite (greenPin5, LOW);
digitalWrite (greenPin6, LOW);

digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, LOW);
digitalWrite (yellowPin5, LOW);
digitalWrite (yellowPin6, LOW);

digitalWrite (bluePin1, LOW);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, LOW);
digitalWrite (bluePin5, LOW);
digitalWrite (bluePin6, LOW);

digitalWrite (whitePin1, LOW);
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin3, LOW);
digitalWrite (whitePin4, LOW);
digitalWrite (whitePin5, LOW);
digitalWrite (whitePin6, LOW);

delay(1000);

}

void yellowOneByOneOn(){

digitalWrite (yellowPin1, HIGH);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, LOW);
digitalWrite (yellowPin5, LOW);
digitalWrite (yellowPin6, LOW);
delay(500);

digitalWrite (yellowPin1, HIGH);
digitalWrite (yellowPin2, HIGH);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, LOW);
digitalWrite (yellowPin5, LOW);
digitalWrite (yellowPin6, LOW);
delay(500);

digitalWrite (yellowPin1, HIGH);
digitalWrite (yellowPin2, HIGH);
digitalWrite (yellowPin3, HIGH);
digitalWrite (yellowPin4, LOW);
digitalWrite (yellowPin5, LOW);
digitalWrite (yellowPin6, LOW);
delay(500);

digitalWrite (yellowPin1, HIGH);
digitalWrite (yellowPin2, HIGH);
digitalWrite (yellowPin3, HIGH);
digitalWrite (yellowPin4, HIGH);
digitalWrite (yellowPin5, LOW);
digitalWrite (yellowPin6, LOW);
delay(500);

digitalWrite (yellowPin1, HIGH);
digitalWrite (yellowPin2, HIGH);
digitalWrite (yellowPin3, HIGH);
digitalWrite (yellowPin4, HIGH);
digitalWrite (yellowPin5, HIGH);
digitalWrite (yellowPin6, LOW);
delay(500);

digitalWrite (yellowPin1, HIGH);
digitalWrite (yellowPin2, HIGH);
digitalWrite (yellowPin3, HIGH);
digitalWrite (yellowPin4, HIGH);
digitalWrite (yellowPin5, HIGH);
digitalWrite (yellowPin6, HIGH);
delay(500);

digitalWrite (redPin1, LOW);
digitalWrite (redPin2, LOW);
digitalWrite (redPin3, LOW);
digitalWrite (redPin4, LOW);
digitalWrite (redPin5, LOW);
digitalWrite (redPin6, LOW);

digitalWrite (greenPin1, LOW);
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin3, LOW);
digitalWrite (greenPin4, LOW);
digitalWrite (greenPin5, LOW);
digitalWrite (greenPin6, LOW);

digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, LOW);
digitalWrite (yellowPin5, LOW);
digitalWrite (yellowPin6, LOW);

digitalWrite (bluePin1, LOW);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, LOW);
digitalWrite (bluePin5, LOW);
digitalWrite (bluePin6, LOW);

digitalWrite (whitePin1, LOW);
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin3, LOW);
digitalWrite (whitePin4, LOW);
digitalWrite (whitePin5, LOW);
digitalWrite (whitePin6, LOW);

delay(1000);
}

void blueOneByOneOn(){

digitalWrite (bluePin1, HIGH);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, LOW);
digitalWrite (bluePin5, LOW);
digitalWrite (bluePin6, LOW);
delay(500);

digitalWrite (bluePin1, HIGH);
digitalWrite (bluePin2, HIGH);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, LOW);
digitalWrite (bluePin5, LOW);
digitalWrite (bluePin6, LOW);
delay(500);

digitalWrite (bluePin1, HIGH);
digitalWrite (bluePin2, HIGH);
digitalWrite (bluePin3, HIGH);
digitalWrite (bluePin4, LOW);
digitalWrite (bluePin5, LOW);
digitalWrite (bluePin6, LOW);
delay(500);

digitalWrite (bluePin1, HIGH);
digitalWrite (bluePin2, HIGH);
digitalWrite (bluePin3, HIGH);
digitalWrite (bluePin4, HIGH);
digitalWrite (bluePin5, LOW);
digitalWrite (bluePin6, LOW);
delay(500);

digitalWrite (bluePin1, HIGH);
digitalWrite (bluePin2, HIGH);
digitalWrite (bluePin3, HIGH);
digitalWrite (bluePin4, HIGH);
digitalWrite (bluePin5, HIGH);
digitalWrite (bluePin6, LOW);
delay(500);

digitalWrite (bluePin1, HIGH);
digitalWrite (bluePin2, HIGH);
digitalWrite (bluePin3, HIGH);
digitalWrite (bluePin4, HIGH);
digitalWrite (bluePin5, HIGH);
digitalWrite (bluePin6, HIGH);
delay(500);

digitalWrite (redPin1, LOW);
digitalWrite (redPin2, LOW);
digitalWrite (redPin3, LOW);
digitalWrite (redPin4, LOW);
digitalWrite (redPin5, LOW);
digitalWrite (redPin6, LOW);

digitalWrite (greenPin1, LOW);
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin3, LOW);
digitalWrite (greenPin4, LOW);
digitalWrite (greenPin5, LOW);
digitalWrite (greenPin6, LOW);

digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, LOW);
digitalWrite (yellowPin5, LOW);
digitalWrite (yellowPin6, LOW);

digitalWrite (bluePin1, LOW);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, LOW);
digitalWrite (bluePin5, LOW);
digitalWrite (bluePin6, LOW);

digitalWrite (whitePin1, LOW);
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin3, LOW);
digitalWrite (whitePin4, LOW);
digitalWrite (whitePin5, LOW);
digitalWrite (whitePin6, LOW);

delay(1000);

}


void whiteOneByOneOn(){

digitalWrite (whitePin1, HIGH);
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin3, LOW);
digitalWrite (whitePin4, LOW);
digitalWrite (whitePin5, LOW);
digitalWrite (whitePin6, LOW);
delay(500);

digitalWrite (whitePin1, HIGH);
digitalWrite (whitePin2, HIGH);
digitalWrite (whitePin3, LOW);
digitalWrite (whitePin4, LOW);
digitalWrite (whitePin5, LOW);
digitalWrite (whitePin6, LOW);
delay(500);

digitalWrite (whitePin1, HIGH);
digitalWrite (whitePin2, HIGH);
digitalWrite (whitePin3, HIGH);
digitalWrite (whitePin4, LOW);
digitalWrite (whitePin5, LOW);
digitalWrite (whitePin6, LOW);
delay(500);

digitalWrite (whitePin1, HIGH);
digitalWrite (whitePin2, HIGH);
digitalWrite (whitePin3, HIGH);
digitalWrite (whitePin4, HIGH);
digitalWrite (whitePin5, LOW);
digitalWrite (whitePin6, LOW);
delay(500);

digitalWrite (whitePin1, HIGH);
digitalWrite (whitePin2, HIGH);
digitalWrite (whitePin3, HIGH);
digitalWrite (whitePin4, HIGH);
digitalWrite (whitePin5, HIGH);
digitalWrite (whitePin6, LOW);
delay(500);

digitalWrite (whitePin1, HIGH);
digitalWrite (whitePin2, HIGH);
digitalWrite (whitePin3, HIGH);
digitalWrite (whitePin4, HIGH);
digitalWrite (whitePin5, HIGH);
digitalWrite (whitePin6, HIGH);
delay(500);

digitalWrite (redPin1, LOW);
digitalWrite (redPin2, LOW);
digitalWrite (redPin3, LOW);
digitalWrite (redPin4, LOW);
digitalWrite (redPin5, LOW);
digitalWrite (redPin6, LOW);

digitalWrite (greenPin1, LOW);
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin3, LOW);
digitalWrite (greenPin4, LOW);
digitalWrite (greenPin5, LOW);
digitalWrite (greenPin6, LOW);

digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, LOW);
digitalWrite (yellowPin5, LOW);
digitalWrite (yellowPin6, LOW);

digitalWrite (bluePin1, LOW);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, LOW);
digitalWrite (bluePin5, LOW);
digitalWrite (bluePin6, LOW);

digitalWrite (whitePin1, LOW);
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin3, LOW);
digitalWrite (whitePin4, LOW);
digitalWrite (whitePin5, LOW);
digitalWrite (whitePin6, LOW);

delay(1000);
}

void allLineBottomTopCenter(){

digitalWrite (redPin1, HIGH);
digitalWrite (redPin2, HIGH);
digitalWrite (redPin3, HIGH);
digitalWrite (redPin4, HIGH);
digitalWrite (redPin5, HIGH);
digitalWrite (redPin6, HIGH);

digitalWrite (greenPin1, LOW);
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin3, LOW);
digitalWrite (greenPin4, LOW);
digitalWrite (greenPin5, LOW);
digitalWrite (greenPin6, LOW);

digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, LOW);
digitalWrite (yellowPin5, LOW);
digitalWrite (yellowPin6, LOW);

digitalWrite (bluePin1, LOW);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, LOW);
digitalWrite (bluePin5, LOW);
digitalWrite (bluePin6, LOW);

digitalWrite (whitePin1, HIGH);
digitalWrite (whitePin2, HIGH);
digitalWrite (whitePin3, HIGH);
digitalWrite (whitePin4, HIGH);
digitalWrite (whitePin5, HIGH);
digitalWrite (whitePin6, HIGH);

delay(1000);


digitalWrite (redPin1, HIGH);
digitalWrite (redPin2, HIGH);
digitalWrite (redPin3, HIGH);
digitalWrite (redPin4, HIGH);
digitalWrite (redPin5, HIGH);
digitalWrite (redPin6, HIGH);

digitalWrite (greenPin1, HIGH);
digitalWrite (greenPin2, HIGH);
digitalWrite (greenPin3, HIGH);
digitalWrite (greenPin4, HIGH);
digitalWrite (greenPin5, HIGH);
digitalWrite (greenPin6, HIGH);

digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, LOW);
digitalWrite (yellowPin5, LOW);
digitalWrite (yellowPin6, LOW);

digitalWrite (bluePin1, HIGH);
digitalWrite (bluePin2, HIGH);
digitalWrite (bluePin3, HIGH);
digitalWrite (bluePin4, HIGH);
digitalWrite (bluePin5, HIGH);
digitalWrite (bluePin6, HIGH);

digitalWrite (whitePin1, HIGH);
digitalWrite (whitePin2, HIGH);
digitalWrite (whitePin3, HIGH);
digitalWrite (whitePin4, HIGH);
digitalWrite (whitePin5, HIGH);
digitalWrite (whitePin6, HIGH);

delay(1000);

digitalWrite (redPin1, HIGH);
digitalWrite (redPin2, HIGH);
digitalWrite (redPin3, HIGH);
digitalWrite (redPin4, HIGH);
digitalWrite (redPin5, HIGH);
digitalWrite (redPin6, HIGH);

digitalWrite (greenPin1, HIGH);
digitalWrite (greenPin2, HIGH);
digitalWrite (greenPin3, HIGH);
digitalWrite (greenPin4, HIGH);
digitalWrite (greenPin5, HIGH);
digitalWrite (greenPin6, HIGH);

digitalWrite (yellowPin1, HIGH);
digitalWrite (yellowPin2, HIGH);
digitalWrite (yellowPin3, HIGH);
digitalWrite (yellowPin4, HIGH);
digitalWrite (yellowPin5, HIGH);
digitalWrite (yellowPin6, HIGH);

digitalWrite (bluePin1, HIGH);
digitalWrite (bluePin2, HIGH);
digitalWrite (bluePin3, HIGH);
digitalWrite (bluePin4, HIGH);
digitalWrite (bluePin5, HIGH);
digitalWrite (bluePin6, HIGH);

digitalWrite (whitePin1, HIGH);
digitalWrite (whitePin2, HIGH);
digitalWrite (whitePin3, HIGH);
digitalWrite (whitePin4, HIGH);
digitalWrite (whitePin5, HIGH);
digitalWrite (whitePin6, HIGH);

delay(1000);


digitalWrite (redPin1, HIGH);
digitalWrite (redPin2, HIGH);
digitalWrite (redPin3, HIGH);
digitalWrite (redPin4, HIGH);
digitalWrite (redPin5, HIGH);
digitalWrite (redPin6, HIGH);

digitalWrite (greenPin1, HIGH);
digitalWrite (greenPin2, HIGH);
digitalWrite (greenPin3, HIGH);
digitalWrite (greenPin4, HIGH);
digitalWrite (greenPin5, HIGH);
digitalWrite (greenPin6, HIGH);

digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, LOW);
digitalWrite (yellowPin5, LOW);
digitalWrite (yellowPin6, LOW);

digitalWrite (bluePin1, HIGH);
digitalWrite (bluePin2, HIGH);
digitalWrite (bluePin3, HIGH);
digitalWrite (bluePin4, HIGH);
digitalWrite (bluePin5, HIGH);
digitalWrite (bluePin6, HIGH);

digitalWrite (whitePin1, HIGH);
digitalWrite (whitePin2, HIGH);
digitalWrite (whitePin3, HIGH);
digitalWrite (whitePin4, HIGH);
digitalWrite (whitePin5, HIGH);
digitalWrite (whitePin6, HIGH);

delay(1000);


digitalWrite (redPin1, HIGH);
digitalWrite (redPin2, HIGH);
digitalWrite (redPin3, HIGH);
digitalWrite (redPin4, HIGH);
digitalWrite (redPin5, HIGH);
digitalWrite (redPin6, HIGH);

digitalWrite (greenPin1, LOW);
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin3, LOW);
digitalWrite (greenPin4, LOW);
digitalWrite (greenPin5, LOW);
digitalWrite (greenPin6, LOW);

digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, LOW);
digitalWrite (yellowPin5, LOW);
digitalWrite (yellowPin6, LOW);

digitalWrite (bluePin1, LOW);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, LOW);
digitalWrite (bluePin5, LOW);
digitalWrite (bluePin6, LOW);

digitalWrite (whitePin1, HIGH);
digitalWrite (whitePin2, HIGH);
digitalWrite (whitePin3, HIGH);
digitalWrite (whitePin4, HIGH);
digitalWrite (whitePin5, HIGH);
digitalWrite (whitePin6, HIGH);

delay(1000);


digitalWrite (redPin1, LOW);
digitalWrite (redPin2, LOW);
digitalWrite (redPin3, LOW);
digitalWrite (redPin4, LOW);
digitalWrite (redPin5, LOW);
digitalWrite (redPin6, LOW);

digitalWrite (greenPin1, LOW);
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin3, LOW);
digitalWrite (greenPin4, LOW);
digitalWrite (greenPin5, LOW);
digitalWrite (greenPin6, LOW);

digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, LOW);
digitalWrite (yellowPin5, LOW);
digitalWrite (yellowPin6, LOW);

digitalWrite (bluePin1, LOW);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, LOW);
digitalWrite (bluePin5, LOW);
digitalWrite (bluePin6, LOW);

digitalWrite (whitePin1, LOW);
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin3, LOW);
digitalWrite (whitePin4, LOW);
digitalWrite (whitePin5, LOW);
digitalWrite (whitePin6, LOW);

delay(1000);


digitalWrite (redPin1, HIGH);
digitalWrite (redPin2, HIGH);
digitalWrite (redPin3, HIGH);
digitalWrite (redPin4, HIGH);
digitalWrite (redPin5, HIGH);
digitalWrite (redPin6, HIGH);

digitalWrite (greenPin1, LOW);
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin3, LOW);
digitalWrite (greenPin4, LOW);
digitalWrite (greenPin5, LOW);
digitalWrite (greenPin6, LOW);

digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, LOW);
digitalWrite (yellowPin5, LOW);
digitalWrite (yellowPin6, LOW);

digitalWrite (bluePin1, LOW);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, LOW);
digitalWrite (bluePin5, LOW);
digitalWrite (bluePin6, LOW);

digitalWrite (whitePin1, HIGH);
digitalWrite (whitePin2, HIGH);
digitalWrite (whitePin3, HIGH);
digitalWrite (whitePin4, HIGH);
digitalWrite (whitePin5, HIGH);
digitalWrite (whitePin6, HIGH);

delay(1000);


digitalWrite (redPin1, HIGH);
digitalWrite (redPin2, HIGH);
digitalWrite (redPin3, HIGH);
digitalWrite (redPin4, HIGH);
digitalWrite (redPin5, HIGH);
digitalWrite (redPin6, HIGH);

digitalWrite (greenPin1, HIGH);
digitalWrite (greenPin2, HIGH);
digitalWrite (greenPin3, HIGH);
digitalWrite (greenPin4, HIGH);
digitalWrite (greenPin5, HIGH);
digitalWrite (greenPin6, HIGH);

digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, LOW);
digitalWrite (yellowPin5, LOW);
digitalWrite (yellowPin6, LOW);

digitalWrite (bluePin1, HIGH);
digitalWrite (bluePin2, HIGH);
digitalWrite (bluePin3, HIGH);
digitalWrite (bluePin4, HIGH);
digitalWrite (bluePin5, HIGH);
digitalWrite (bluePin6, HIGH);

digitalWrite (whitePin1, HIGH);
digitalWrite (whitePin2, HIGH);
digitalWrite (whitePin3, HIGH);
digitalWrite (whitePin4, HIGH);
digitalWrite (whitePin5, HIGH);
digitalWrite (whitePin6, HIGH);

delay(1000);

digitalWrite (redPin1, HIGH);
digitalWrite (redPin2, HIGH);
digitalWrite (redPin3, HIGH);
digitalWrite (redPin4, HIGH);
digitalWrite (redPin5, HIGH);
digitalWrite (redPin6, HIGH);

digitalWrite (greenPin1, HIGH);
digitalWrite (greenPin2, HIGH);
digitalWrite (greenPin3, HIGH);
digitalWrite (greenPin4, HIGH);
digitalWrite (greenPin5, HIGH);
digitalWrite (greenPin6, HIGH);

digitalWrite (yellowPin1, HIGH);
digitalWrite (yellowPin2, HIGH);
digitalWrite (yellowPin3, HIGH);
digitalWrite (yellowPin4, HIGH);
digitalWrite (yellowPin5, HIGH);
digitalWrite (yellowPin6, HIGH);

digitalWrite (bluePin1, HIGH);
digitalWrite (bluePin2, HIGH);
digitalWrite (bluePin3, HIGH);
digitalWrite (bluePin4, HIGH);
digitalWrite (bluePin5, HIGH);
digitalWrite (bluePin6, HIGH);

digitalWrite (whitePin1, HIGH);
digitalWrite (whitePin2, HIGH);
digitalWrite (whitePin3, HIGH);
digitalWrite (whitePin4, HIGH);
digitalWrite (whitePin5, HIGH);
digitalWrite (whitePin6, HIGH);

delay(1000);


digitalWrite (redPin1, HIGH);
digitalWrite (redPin2, HIGH);
digitalWrite (redPin3, HIGH);
digitalWrite (redPin4, HIGH);
digitalWrite (redPin5, HIGH);
digitalWrite (redPin6, HIGH);

digitalWrite (greenPin1, HIGH);
digitalWrite (greenPin2, HIGH);
digitalWrite (greenPin3, HIGH);
digitalWrite (greenPin4, HIGH);
digitalWrite (greenPin5, HIGH);
digitalWrite (greenPin6, HIGH);

digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, LOW);
digitalWrite (yellowPin5, LOW);
digitalWrite (yellowPin6, LOW);

digitalWrite (bluePin1, HIGH);
digitalWrite (bluePin2, HIGH);
digitalWrite (bluePin3, HIGH);
digitalWrite (bluePin4, HIGH);
digitalWrite (bluePin5, HIGH);
digitalWrite (bluePin6, HIGH);

digitalWrite (whitePin1, HIGH);
digitalWrite (whitePin2, HIGH);
digitalWrite (whitePin3, HIGH);
digitalWrite (whitePin4, HIGH);
digitalWrite (whitePin5, HIGH);
digitalWrite (whitePin6, HIGH);

delay(1000);


digitalWrite (redPin1, HIGH);
digitalWrite (redPin2, HIGH);
digitalWrite (redPin3, HIGH);
digitalWrite (redPin4, HIGH);
digitalWrite (redPin5, HIGH);
digitalWrite (redPin6, HIGH);

digitalWrite (greenPin1, LOW);
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin3, LOW);
digitalWrite (greenPin4, LOW);
digitalWrite (greenPin5, LOW);
digitalWrite (greenPin6, LOW);

digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, LOW);
digitalWrite (yellowPin5, LOW);
digitalWrite (yellowPin6, LOW);

digitalWrite (bluePin1, LOW);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, LOW);
digitalWrite (bluePin5, LOW);
digitalWrite (bluePin6, LOW);

digitalWrite (whitePin1, HIGH);
digitalWrite (whitePin2, HIGH);
digitalWrite (whitePin3, HIGH);
digitalWrite (whitePin4, HIGH);
digitalWrite (whitePin5, HIGH);
digitalWrite (whitePin6, HIGH);

delay(1000);


digitalWrite (redPin1, LOW);
digitalWrite (redPin2, LOW);
digitalWrite (redPin3, LOW);
digitalWrite (redPin4, LOW);
digitalWrite (redPin5, LOW);
digitalWrite (redPin6, LOW);

digitalWrite (greenPin1, LOW);
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin3, LOW);
digitalWrite (greenPin4, LOW);
digitalWrite (greenPin5, LOW);
digitalWrite (greenPin6, LOW);

digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, LOW);
digitalWrite (yellowPin5, LOW);
digitalWrite (yellowPin6, LOW);

digitalWrite (bluePin1, LOW);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, LOW);
digitalWrite (bluePin5, LOW);
digitalWrite (bluePin6, LOW);

digitalWrite (whitePin1, LOW);
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin3, LOW);
digitalWrite (whitePin4, LOW);
digitalWrite (whitePin5, LOW);
digitalWrite (whitePin6, LOW);

delay(1000);
}


void allLineLeftRightCenter(){

digitalWrite (redPin1, HIGH);
digitalWrite (redPin2, LOW);
digitalWrite (redPin3, LOW);
digitalWrite (redPin4, LOW);
digitalWrite (redPin5, LOW);
digitalWrite (redPin6, HIGH);

digitalWrite (greenPin1, HIGH);
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin3, LOW);
digitalWrite (greenPin4, LOW);
digitalWrite (greenPin5, LOW);
digitalWrite (greenPin6, HIGH);

digitalWrite (yellowPin1, HIGH);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, LOW);
digitalWrite (yellowPin5, LOW);
digitalWrite (yellowPin6, HIGH);

digitalWrite (bluePin1, HIGH);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, LOW);
digitalWrite (bluePin5, LOW);
digitalWrite (bluePin6, HIGH);

digitalWrite (whitePin1, HIGH);
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin3, LOW);
digitalWrite (whitePin4, LOW);
digitalWrite (whitePin5, LOW);
digitalWrite (whitePin6, HIGH);

delay(1000);


digitalWrite (redPin1, HIGH);
digitalWrite (redPin2, HIGH);
digitalWrite (redPin3, LOW);
digitalWrite (redPin4, LOW);
digitalWrite (redPin5, HIGH);
digitalWrite (redPin6, HIGH);

digitalWrite (greenPin1, HIGH);
digitalWrite (greenPin2, HIGH);
digitalWrite (greenPin3, LOW);
digitalWrite (greenPin4, LOW);
digitalWrite (greenPin5, HIGH);
digitalWrite (greenPin6, HIGH);

digitalWrite (yellowPin1, HIGH);
digitalWrite (yellowPin2, HIGH);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, LOW);
digitalWrite (yellowPin5, HIGH);
digitalWrite (yellowPin6, HIGH);

digitalWrite (bluePin1, HIGH);
digitalWrite (bluePin2, HIGH);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, LOW);
digitalWrite (bluePin5, HIGH);
digitalWrite (bluePin6, HIGH);

digitalWrite (whitePin1, HIGH);
digitalWrite (whitePin2, HIGH);
digitalWrite (whitePin3, LOW);
digitalWrite (whitePin4, LOW);
digitalWrite (whitePin5, HIGH);
digitalWrite (whitePin6, HIGH);

delay(1000);

digitalWrite (redPin1, HIGH);
digitalWrite (redPin2, HIGH);
digitalWrite (redPin3, HIGH);
digitalWrite (redPin4, HIGH);
digitalWrite (redPin5, HIGH);
digitalWrite (redPin6, HIGH);

digitalWrite (greenPin1, HIGH);
digitalWrite (greenPin2, HIGH);
digitalWrite (greenPin3, HIGH);
digitalWrite (greenPin4, HIGH);
digitalWrite (greenPin5, HIGH);
digitalWrite (greenPin6, HIGH);

digitalWrite (yellowPin1, HIGH);
digitalWrite (yellowPin2, HIGH);
digitalWrite (yellowPin3, HIGH);
digitalWrite (yellowPin4, HIGH);
digitalWrite (yellowPin5, HIGH);
digitalWrite (yellowPin6, HIGH);

digitalWrite (bluePin1, HIGH);
digitalWrite (bluePin2, HIGH);
digitalWrite (bluePin3, HIGH);
digitalWrite (bluePin4, HIGH);
digitalWrite (bluePin5, HIGH);
digitalWrite (bluePin6, HIGH);

digitalWrite (whitePin1, HIGH);
digitalWrite (whitePin2, HIGH);
digitalWrite (whitePin3, HIGH);
digitalWrite (whitePin4, HIGH);
digitalWrite (whitePin5, HIGH);
digitalWrite (whitePin6, HIGH);

delay(1000);


digitalWrite (redPin1, HIGH);
digitalWrite (redPin2, HIGH);
digitalWrite (redPin3, LOW);
digitalWrite (redPin4, LOW);
digitalWrite (redPin5, HIGH);
digitalWrite (redPin6, HIGH);

digitalWrite (greenPin1, HIGH);
digitalWrite (greenPin2, HIGH);
digitalWrite (greenPin3, LOW);
digitalWrite (greenPin4, LOW);
digitalWrite (greenPin5, HIGH);
digitalWrite (greenPin6, HIGH);

digitalWrite (yellowPin1, HIGH);
digitalWrite (yellowPin2, HIGH);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, LOW);
digitalWrite (yellowPin5, HIGH);
digitalWrite (yellowPin6, HIGH);

digitalWrite (bluePin1, HIGH);
digitalWrite (bluePin2, HIGH);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, LOW);
digitalWrite (bluePin5, HIGH);
digitalWrite (bluePin6, HIGH);

digitalWrite (whitePin1, HIGH);
digitalWrite (whitePin2, HIGH);
digitalWrite (whitePin3, LOW);
digitalWrite (whitePin4, LOW);
digitalWrite (whitePin5, HIGH);
digitalWrite (whitePin6, HIGH);

delay(1000);


digitalWrite (redPin1, HIGH);
digitalWrite (redPin2, LOW);
digitalWrite (redPin3, LOW);
digitalWrite (redPin4, LOW);
digitalWrite (redPin5, LOW);
digitalWrite (redPin6, HIGH);

digitalWrite (greenPin1, HIGH);
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin3, LOW);
digitalWrite (greenPin4, LOW);
digitalWrite (greenPin5, LOW);
digitalWrite (greenPin6, HIGH);

digitalWrite (yellowPin1, HIGH);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, LOW);
digitalWrite (yellowPin5, LOW);
digitalWrite (yellowPin6, HIGH);

digitalWrite (bluePin1, HIGH);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, LOW);
digitalWrite (bluePin5, LOW);
digitalWrite (bluePin6, HIGH);

digitalWrite (whitePin1, HIGH);
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin3, LOW);
digitalWrite (whitePin4, LOW);
digitalWrite (whitePin5, LOW);
digitalWrite (whitePin6, HIGH);

delay(1000);


digitalWrite (redPin1, LOW);
digitalWrite (redPin2, LOW);
digitalWrite (redPin3, LOW);
digitalWrite (redPin4, LOW);
digitalWrite (redPin5, LOW);
digitalWrite (redPin6, LOW);

digitalWrite (greenPin1, LOW);
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin3, LOW);
digitalWrite (greenPin4, LOW);
digitalWrite (greenPin5, LOW);
digitalWrite (greenPin6, LOW);

digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, LOW);
digitalWrite (yellowPin5, LOW);
digitalWrite (yellowPin6, LOW);

digitalWrite (bluePin1, LOW);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, LOW);
digitalWrite (bluePin5, LOW);
digitalWrite (bluePin6, LOW);

digitalWrite (whitePin1, LOW);
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin3, LOW);
digitalWrite (whitePin4, LOW);
digitalWrite (whitePin5, LOW);
digitalWrite (whitePin6, LOW);

delay(1000);

digitalWrite (redPin1, HIGH);
digitalWrite (redPin2, LOW);
digitalWrite (redPin3, LOW);
digitalWrite (redPin4, LOW);
digitalWrite (redPin5, LOW);
digitalWrite (redPin6, HIGH);

digitalWrite (greenPin1, HIGH);
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin3, LOW);
digitalWrite (greenPin4, LOW);
digitalWrite (greenPin5, LOW);
digitalWrite (greenPin6, HIGH);

digitalWrite (yellowPin1, HIGH);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, LOW);
digitalWrite (yellowPin5, LOW);
digitalWrite (yellowPin6, HIGH);

digitalWrite (bluePin1, HIGH);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, LOW);
digitalWrite (bluePin5, LOW);
digitalWrite (bluePin6, HIGH);

digitalWrite (whitePin1, HIGH);
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin3, LOW);
digitalWrite (whitePin4, LOW);
digitalWrite (whitePin5, LOW);
digitalWrite (whitePin6, HIGH);

delay(1000);


digitalWrite (redPin1, HIGH);
digitalWrite (redPin2, HIGH);
digitalWrite (redPin3, LOW);
digitalWrite (redPin4, LOW);
digitalWrite (redPin5, HIGH);
digitalWrite (redPin6, HIGH);

digitalWrite (greenPin1, HIGH);
digitalWrite (greenPin2, HIGH);
digitalWrite (greenPin3, LOW);
digitalWrite (greenPin4, LOW);
digitalWrite (greenPin5, HIGH);
digitalWrite (greenPin6, HIGH);

digitalWrite (yellowPin1, HIGH);
digitalWrite (yellowPin2, HIGH);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, LOW);
digitalWrite (yellowPin5, HIGH);
digitalWrite (yellowPin6, HIGH);

digitalWrite (bluePin1, HIGH);
digitalWrite (bluePin2, HIGH);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, LOW);
digitalWrite (bluePin5, HIGH);
digitalWrite (bluePin6, HIGH);

digitalWrite (whitePin1, HIGH);
digitalWrite (whitePin2, HIGH);
digitalWrite (whitePin3, LOW);
digitalWrite (whitePin4, LOW);
digitalWrite (whitePin5, HIGH);
digitalWrite (whitePin6, HIGH);

delay(1000);

digitalWrite (redPin1, HIGH);
digitalWrite (redPin2, HIGH);
digitalWrite (redPin3, HIGH);
digitalWrite (redPin4, HIGH);
digitalWrite (redPin5, HIGH);
digitalWrite (redPin6, HIGH);

digitalWrite (greenPin1, HIGH);
digitalWrite (greenPin2, HIGH);
digitalWrite (greenPin3, HIGH);
digitalWrite (greenPin4, HIGH);
digitalWrite (greenPin5, HIGH);
digitalWrite (greenPin6, HIGH);

digitalWrite (yellowPin1, HIGH);
digitalWrite (yellowPin2, HIGH);
digitalWrite (yellowPin3, HIGH);
digitalWrite (yellowPin4, HIGH);
digitalWrite (yellowPin5, HIGH);
digitalWrite (yellowPin6, HIGH);

digitalWrite (bluePin1, HIGH);
digitalWrite (bluePin2, HIGH);
digitalWrite (bluePin3, HIGH);
digitalWrite (bluePin4, HIGH);
digitalWrite (bluePin5, HIGH);
digitalWrite (bluePin6, HIGH);

digitalWrite (whitePin1, HIGH);
digitalWrite (whitePin2, HIGH);
digitalWrite (whitePin3, HIGH);
digitalWrite (whitePin4, HIGH);
digitalWrite (whitePin5, HIGH);
digitalWrite (whitePin6, HIGH);

delay(1000);


digitalWrite (redPin1, HIGH);
digitalWrite (redPin2, HIGH);
digitalWrite (redPin3, LOW);
digitalWrite (redPin4, LOW);
digitalWrite (redPin5, HIGH);
digitalWrite (redPin6, HIGH);

digitalWrite (greenPin1, HIGH);
digitalWrite (greenPin2, HIGH);
digitalWrite (greenPin3, LOW);
digitalWrite (greenPin4, LOW);
digitalWrite (greenPin5, HIGH);
digitalWrite (greenPin6, HIGH);

digitalWrite (yellowPin1, HIGH);
digitalWrite (yellowPin2, HIGH);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, LOW);
digitalWrite (yellowPin5, HIGH);
digitalWrite (yellowPin6, HIGH);

digitalWrite (bluePin1, HIGH);
digitalWrite (bluePin2, HIGH);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, LOW);
digitalWrite (bluePin5, HIGH);
digitalWrite (bluePin6, HIGH);

digitalWrite (whitePin1, HIGH);
digitalWrite (whitePin2, HIGH);
digitalWrite (whitePin3, LOW);
digitalWrite (whitePin4, LOW);
digitalWrite (whitePin5, HIGH);
digitalWrite (whitePin6, HIGH);

delay(1000);


digitalWrite (redPin1, HIGH);
digitalWrite (redPin2, LOW);
digitalWrite (redPin3, LOW);
digitalWrite (redPin4, LOW);
digitalWrite (redPin5, LOW);
digitalWrite (redPin6, HIGH);

digitalWrite (greenPin1, HIGH);
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin3, LOW);
digitalWrite (greenPin4, LOW);
digitalWrite (greenPin5, LOW);
digitalWrite (greenPin6, HIGH);

digitalWrite (yellowPin1, HIGH);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, LOW);
digitalWrite (yellowPin5, LOW);
digitalWrite (yellowPin6, HIGH);

digitalWrite (bluePin1, HIGH);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, LOW);
digitalWrite (bluePin5, LOW);
digitalWrite (bluePin6, HIGH);

digitalWrite (whitePin1, HIGH);
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin3, LOW);
digitalWrite (whitePin4, LOW);
digitalWrite (whitePin5, LOW);
digitalWrite (whitePin6, HIGH);

delay(1000);


digitalWrite (redPin1, LOW);
digitalWrite (redPin2, LOW);
digitalWrite (redPin3, LOW);
digitalWrite (redPin4, LOW);
digitalWrite (redPin5, LOW);
digitalWrite (redPin6, LOW);

digitalWrite (greenPin1, LOW);
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin3, LOW);
digitalWrite (greenPin4, LOW);
digitalWrite (greenPin5, LOW);
digitalWrite (greenPin6, LOW);

digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, LOW);
digitalWrite (yellowPin5, LOW);
digitalWrite (yellowPin6, LOW);

digitalWrite (bluePin1, LOW);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, LOW);
digitalWrite (bluePin5, LOW);
digitalWrite (bluePin6, LOW);

digitalWrite (whitePin1, LOW);
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin3, LOW);
digitalWrite (whitePin4, LOW);
digitalWrite (whitePin5, LOW);
digitalWrite (whitePin6, LOW);

delay(1000);
}

void allLineHighSpeedOff(){

digitalWrite (redPin1, HIGH);
digitalWrite (redPin2, HIGH);
digitalWrite (redPin3, HIGH);
digitalWrite (redPin4, HIGH);
digitalWrite (redPin5, HIGH);
digitalWrite (redPin6, HIGH);

digitalWrite (greenPin1, HIGH);
digitalWrite (greenPin2, HIGH);
digitalWrite (greenPin3, HIGH);
digitalWrite (greenPin4, HIGH);
digitalWrite (greenPin5, HIGH);
digitalWrite (greenPin6, HIGH);

digitalWrite (yellowPin1, HIGH);
digitalWrite (yellowPin2, HIGH);
digitalWrite (yellowPin3, HIGH);
digitalWrite (yellowPin4, HIGH);
digitalWrite (yellowPin5, HIGH);
digitalWrite (yellowPin6, HIGH);

digitalWrite (bluePin1, HIGH);
digitalWrite (bluePin2, HIGH);
digitalWrite (bluePin3, HIGH);
digitalWrite (bluePin4, HIGH);
digitalWrite (bluePin5, HIGH);
digitalWrite (bluePin6, HIGH);

digitalWrite (whitePin1, HIGH);
digitalWrite (whitePin2, HIGH);
digitalWrite (whitePin3, HIGH);
digitalWrite (whitePin4, HIGH);
digitalWrite (whitePin5, HIGH);
digitalWrite (whitePin6, HIGH);

delay(100);

 // redPinOff
digitalWrite (redPin1, LOW);
digitalWrite (redPin2, HIGH);
digitalWrite (redPin3, HIGH);
digitalWrite (redPin4, HIGH);
digitalWrite (redPin5, HIGH);
digitalWrite (redPin6, HIGH);
delay(100);

digitalWrite (redPin1, LOW);
digitalWrite (redPin2, LOW);
digitalWrite (redPin3, HIGH);
digitalWrite (redPin4, HIGH);
digitalWrite (redPin5, HIGH);
digitalWrite (redPin6, HIGH);
delay(100);

digitalWrite (redPin1, LOW);
digitalWrite (redPin2, LOW);
digitalWrite (redPin3, LOW);
digitalWrite (redPin4, HIGH);
digitalWrite (redPin5, HIGH);
digitalWrite (redPin6, HIGH);
delay(100);

digitalWrite (redPin1, LOW);
digitalWrite (redPin2, LOW);
digitalWrite (redPin3, LOW);
digitalWrite (redPin4, LOW);
digitalWrite (redPin5, HIGH);
digitalWrite (redPin6, HIGH);
delay(100);

digitalWrite (redPin1, LOW);
digitalWrite (redPin2, LOW);
digitalWrite (redPin3, LOW);
digitalWrite (redPin4, LOW);
digitalWrite (redPin5, LOW);
digitalWrite (redPin6, HIGH);
delay(100);

digitalWrite (redPin1, LOW);
digitalWrite (redPin2, LOW);
digitalWrite (redPin3, LOW);
digitalWrite (redPin4, LOW);
digitalWrite (redPin5, LOW);
digitalWrite (redPin6, LOW);
delay(100);

  //greenPinOff

digitalWrite (greenPin1,LOW );
digitalWrite (greenPin2, HIGH);
digitalWrite (greenPin3, HIGH);
digitalWrite (greenPin4, HIGH);
digitalWrite (greenPin5, HIGH);
digitalWrite (greenPin6, HIGH);
delay(100);

digitalWrite (greenPin1,LOW );
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin3, HIGH);
digitalWrite (greenPin4, HIGH);
digitalWrite (greenPin5, HIGH);
digitalWrite (greenPin6, HIGH);
delay(100);

digitalWrite (greenPin1,LOW );
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin3, LOW);
digitalWrite (greenPin4, HIGH);
digitalWrite (greenPin5, HIGH);
digitalWrite (greenPin6, HIGH);
delay(100);

digitalWrite (greenPin1,LOW );
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin3, LOW);
digitalWrite (greenPin4, LOW);
digitalWrite (greenPin5, HIGH);
digitalWrite (greenPin6, HIGH);
delay(100);

digitalWrite (greenPin1,LOW );
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin3, LOW);
digitalWrite (greenPin4, LOW);
digitalWrite (greenPin5, LOW);
digitalWrite (greenPin6, HIGH);
delay(100);

digitalWrite (greenPin1,LOW );
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin3, LOW);
digitalWrite (greenPin4, LOW);
digitalWrite (greenPin5, LOW);
digitalWrite (greenPin6, LOW);
delay(100);

//YellowPinOff
digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin2, HIGH);
digitalWrite (yellowPin3, HIGH);
digitalWrite (yellowPin4, HIGH);
digitalWrite (yellowPin5, HIGH);
digitalWrite (yellowPin6, HIGH);
delay(100);

digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, HIGH);
digitalWrite (yellowPin4, HIGH);
digitalWrite (yellowPin5, HIGH);
digitalWrite (yellowPin6, HIGH);
delay(100);

digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, HIGH);
digitalWrite (yellowPin5, HIGH);
digitalWrite (yellowPin6, HIGH);
delay(100);

digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, LOW);
digitalWrite (yellowPin5, HIGH);
digitalWrite (yellowPin6, HIGH);
delay(100);

digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, LOW);
digitalWrite (yellowPin5, LOW);
digitalWrite (yellowPin6, HIGH);
delay(100);


digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, LOW);
digitalWrite (yellowPin5, LOW);
digitalWrite (yellowPin6, LOW);
delay(100);

//BluePinOff
digitalWrite (bluePin1, LOW);
digitalWrite (bluePin2, HIGH);
digitalWrite (bluePin3, HIGH);
digitalWrite (bluePin4, HIGH);
digitalWrite (bluePin5, HIGH);
digitalWrite (bluePin6, HIGH);
delay(100);

digitalWrite (bluePin1, LOW);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin3, HIGH);
digitalWrite (bluePin4, HIGH);
digitalWrite (bluePin5, HIGH);
digitalWrite (bluePin6, HIGH);
delay(100);

digitalWrite (bluePin1, LOW);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, HIGH);
digitalWrite (bluePin5, HIGH);
digitalWrite (bluePin6, HIGH);
delay(100);

digitalWrite (bluePin1, LOW);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, LOW);
digitalWrite (bluePin5, HIGH);
digitalWrite (bluePin6, HIGH);
delay(100);

digitalWrite (bluePin1, LOW);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, LOW);
digitalWrite (bluePin5, LOW);
digitalWrite (bluePin6, HIGH);
delay(100);

digitalWrite (bluePin1, LOW);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, LOW);
digitalWrite (bluePin5, LOW);
digitalWrite (bluePin6, LOW);
delay(100);

//WhitePinOff
digitalWrite (whitePin1, LOW);
digitalWrite (whitePin2, HIGH);
digitalWrite (whitePin3, HIGH);
digitalWrite (whitePin4, HIGH);
digitalWrite (whitePin5, HIGH);
digitalWrite (whitePin6, HIGH);
delay(100);

digitalWrite (whitePin1, LOW);
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin3, HIGH);
digitalWrite (whitePin4, HIGH);
digitalWrite (whitePin5, HIGH);
digitalWrite (whitePin6, HIGH);
delay(100);

digitalWrite (whitePin1, LOW);
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin3, HIGH);
digitalWrite (whitePin4, HIGH);
digitalWrite (whitePin5, HIGH);
digitalWrite (whitePin6, HIGH);
delay(100);

digitalWrite (whitePin1, LOW);
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin3, LOW);
digitalWrite (whitePin4, HIGH);
digitalWrite (whitePin5, HIGH);
digitalWrite (whitePin6, HIGH);
delay(100);

digitalWrite (whitePin1, LOW);
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin3, LOW);
digitalWrite (whitePin4, LOW);
digitalWrite (whitePin5, HIGH);
digitalWrite (whitePin6, HIGH);
delay(100);

digitalWrite (whitePin1, LOW);
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin3, LOW);
digitalWrite (whitePin4, LOW);
digitalWrite (whitePin5, LOW);
digitalWrite (whitePin6, HIGH);
delay(100);

digitalWrite (whitePin1, LOW);
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin3, LOW);
digitalWrite (whitePin4, LOW);
digitalWrite (whitePin5, LOW);
digitalWrite (whitePin6, LOW);
delay(100);

digitalWrite (redPin1, HIGH);
digitalWrite (redPin2, HIGH);
digitalWrite (redPin3, HIGH);
digitalWrite (redPin4, HIGH);
digitalWrite (redPin5, HIGH);
digitalWrite (redPin6, HIGH);

digitalWrite (greenPin1, HIGH);
digitalWrite (greenPin2, HIGH);
digitalWrite (greenPin3, HIGH);
digitalWrite (greenPin4, HIGH);
digitalWrite (greenPin5, HIGH);
digitalWrite (greenPin6, HIGH);

digitalWrite (yellowPin1, HIGH);
digitalWrite (yellowPin2, HIGH);
digitalWrite (yellowPin3, HIGH);
digitalWrite (yellowPin4, HIGH);
digitalWrite (yellowPin5, HIGH);
digitalWrite (yellowPin6, HIGH);

digitalWrite (bluePin1, HIGH);
digitalWrite (bluePin2, HIGH);
digitalWrite (bluePin3, HIGH);
digitalWrite (bluePin4, HIGH);
digitalWrite (bluePin5, HIGH);
digitalWrite (bluePin6, HIGH);

digitalWrite (whitePin1, HIGH);
digitalWrite (whitePin2, HIGH);
digitalWrite (whitePin3, HIGH);
digitalWrite (whitePin4, HIGH);
digitalWrite (whitePin5, HIGH);
digitalWrite (whitePin6, HIGH);

delay(100);

 // redPinOff
digitalWrite (redPin1, LOW);
digitalWrite (redPin2, HIGH);
digitalWrite (redPin3, HIGH);
digitalWrite (redPin4, HIGH);
digitalWrite (redPin5, HIGH);
digitalWrite (redPin6, HIGH);
delay(100);

digitalWrite (redPin1, LOW);
digitalWrite (redPin2, LOW);
digitalWrite (redPin3, HIGH);
digitalWrite (redPin4, HIGH);
digitalWrite (redPin5, HIGH);
digitalWrite (redPin6, HIGH);
delay(100);

digitalWrite (redPin1, LOW);
digitalWrite (redPin2, LOW);
digitalWrite (redPin3, LOW);
digitalWrite (redPin4, HIGH);
digitalWrite (redPin5, HIGH);
digitalWrite (redPin6, HIGH);
delay(100);

digitalWrite (redPin1, LOW);
digitalWrite (redPin2, LOW);
digitalWrite (redPin3, LOW);
digitalWrite (redPin4, LOW);
digitalWrite (redPin5, HIGH);
digitalWrite (redPin6, HIGH);
delay(100);

digitalWrite (redPin1, LOW);
digitalWrite (redPin2, LOW);
digitalWrite (redPin3, LOW);
digitalWrite (redPin4, LOW);
digitalWrite (redPin5, LOW);
digitalWrite (redPin6, HIGH);
delay(100);

digitalWrite (redPin1, LOW);
digitalWrite (redPin2, LOW);
digitalWrite (redPin3, LOW);
digitalWrite (redPin4, LOW);
digitalWrite (redPin5, LOW);
digitalWrite (redPin6, LOW);
delay(100);

  //greenPinOff

digitalWrite (greenPin1,LOW );
digitalWrite (greenPin2, HIGH);
digitalWrite (greenPin3, HIGH);
digitalWrite (greenPin4, HIGH);
digitalWrite (greenPin5, HIGH);
digitalWrite (greenPin6, HIGH);
delay(100);

digitalWrite (greenPin1,LOW );
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin3, HIGH);
digitalWrite (greenPin4, HIGH);
digitalWrite (greenPin5, HIGH);
digitalWrite (greenPin6, HIGH);
delay(100);

digitalWrite (greenPin1,LOW );
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin3, LOW);
digitalWrite (greenPin4, HIGH);
digitalWrite (greenPin5, HIGH);
digitalWrite (greenPin6, HIGH);
delay(100);

digitalWrite (greenPin1,LOW );
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin3, LOW);
digitalWrite (greenPin4, LOW);
digitalWrite (greenPin5, HIGH);
digitalWrite (greenPin6, HIGH);
delay(100);

digitalWrite (greenPin1,LOW );
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin3, LOW);
digitalWrite (greenPin4, LOW);
digitalWrite (greenPin5, LOW);
digitalWrite (greenPin6, HIGH);
delay(100);

digitalWrite (greenPin1,LOW );
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin3, LOW);
digitalWrite (greenPin4, LOW);
digitalWrite (greenPin5, LOW);
digitalWrite (greenPin6, LOW);
delay(100);

//YellowPinOff
digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin2, HIGH);
digitalWrite (yellowPin3, HIGH);
digitalWrite (yellowPin4, HIGH);
digitalWrite (yellowPin5, HIGH);
digitalWrite (yellowPin6, HIGH);
delay(100);

digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, HIGH);
digitalWrite (yellowPin4, HIGH);
digitalWrite (yellowPin5, HIGH);
digitalWrite (yellowPin6, HIGH);
delay(100);

digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, HIGH);
digitalWrite (yellowPin5, HIGH);
digitalWrite (yellowPin6, HIGH);
delay(100);

digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, LOW);
digitalWrite (yellowPin5, HIGH);
digitalWrite (yellowPin6, HIGH);
delay(100);

digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, LOW);
digitalWrite (yellowPin5, LOW);
digitalWrite (yellowPin6, HIGH);
delay(100);


digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, LOW);
digitalWrite (yellowPin5, LOW);
digitalWrite (yellowPin6, LOW);
delay(100);

//BluePinOff
digitalWrite (bluePin1, LOW);
digitalWrite (bluePin2, HIGH);
digitalWrite (bluePin3, HIGH);
digitalWrite (bluePin4, HIGH);
digitalWrite (bluePin5, HIGH);
digitalWrite (bluePin6, HIGH);
delay(100);

digitalWrite (bluePin1, LOW);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin3, HIGH);
digitalWrite (bluePin4, HIGH);
digitalWrite (bluePin5, HIGH);
digitalWrite (bluePin6, HIGH);
delay(100);

digitalWrite (bluePin1, LOW);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, HIGH);
digitalWrite (bluePin5, HIGH);
digitalWrite (bluePin6, HIGH);
delay(100);

digitalWrite (bluePin1, LOW);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, LOW);
digitalWrite (bluePin5, HIGH);
digitalWrite (bluePin6, HIGH);
delay(100);

digitalWrite (bluePin1, LOW);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, LOW);
digitalWrite (bluePin5, LOW);
digitalWrite (bluePin6, HIGH);
delay(100);

digitalWrite (bluePin1, LOW);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, LOW);
digitalWrite (bluePin5, LOW);
digitalWrite (bluePin6, LOW);
delay(100);

//WhitePinOff
digitalWrite (whitePin1, LOW);
digitalWrite (whitePin2, HIGH);
digitalWrite (whitePin3, HIGH);
digitalWrite (whitePin4, HIGH);
digitalWrite (whitePin5, HIGH);
digitalWrite (whitePin6, HIGH);
delay(100);

digitalWrite (whitePin1, LOW);
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin3, HIGH);
digitalWrite (whitePin4, HIGH);
digitalWrite (whitePin5, HIGH);
digitalWrite (whitePin6, HIGH);
delay(100);

digitalWrite (whitePin1, LOW);
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin3, HIGH);
digitalWrite (whitePin4, HIGH);
digitalWrite (whitePin5, HIGH);
digitalWrite (whitePin6, HIGH);
delay(100);

digitalWrite (whitePin1, LOW);
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin3, LOW);
digitalWrite (whitePin4, HIGH);
digitalWrite (whitePin5, HIGH);
digitalWrite (whitePin6, HIGH);
delay(100);

digitalWrite (whitePin1, LOW);
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin3, LOW);
digitalWrite (whitePin4, LOW);
digitalWrite (whitePin5, HIGH);
digitalWrite (whitePin6, HIGH);
delay(100);

digitalWrite (whitePin1, LOW);
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin3, LOW);
digitalWrite (whitePin4, LOW);
digitalWrite (whitePin5, LOW);
digitalWrite (whitePin6, HIGH);
delay(100);

digitalWrite (whitePin1, LOW);
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin3, LOW);
digitalWrite (whitePin4, LOW);
digitalWrite (whitePin5, LOW);
digitalWrite (whitePin6, LOW);
delay(100);

}

void allLineHighSpeedOn(){

digitalWrite (redPin1, LOW);
digitalWrite (redPin2, LOW);
digitalWrite (redPin3, LOW);
digitalWrite (redPin4, LOW);
digitalWrite (redPin5, LOW);
digitalWrite (redPin6, LOW);

digitalWrite (greenPin1, LOW);
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin3, LOW);
digitalWrite (greenPin4, LOW);
digitalWrite (greenPin5, LOW);
digitalWrite (greenPin6, LOW);

digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, LOW);
digitalWrite (yellowPin5, LOW);
digitalWrite (yellowPin6, LOW);

digitalWrite (bluePin1, LOW);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, LOW);
digitalWrite (bluePin5, LOW);
digitalWrite (bluePin6, LOW);

digitalWrite (whitePin1, LOW);
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin3, LOW);
digitalWrite (whitePin4, LOW);
digitalWrite (whitePin5, LOW);
digitalWrite (whitePin6, LOW);

delay(100);

//WhitePinOn
digitalWrite (whitePin1, LOW);
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin3, LOW);
digitalWrite (whitePin4, LOW);
digitalWrite (whitePin5, LOW);
digitalWrite (whitePin6, HIGH);
delay(100);

digitalWrite (whitePin1, LOW);
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin3, LOW);
digitalWrite (whitePin4, LOW);
digitalWrite (whitePin5, HIGH);
digitalWrite (whitePin6, HIGH);
delay(100);

digitalWrite (whitePin1, LOW);
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin3, LOW);
digitalWrite (whitePin4, HIGH);
digitalWrite (whitePin5, HIGH);
digitalWrite (whitePin6, HIGH);
delay(100);

digitalWrite (whitePin1, LOW);
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin3, HIGH);
digitalWrite (whitePin4, HIGH);
digitalWrite (whitePin5, HIGH);
digitalWrite (whitePin6, HIGH);
delay(100);

digitalWrite (whitePin1, LOW);
digitalWrite (whitePin2, HIGH);
digitalWrite (whitePin3, HIGH);
digitalWrite (whitePin4, HIGH);
digitalWrite (whitePin5, HIGH);
digitalWrite (whitePin6, HIGH);
delay(100);

digitalWrite (whitePin1, HIGH);
digitalWrite (whitePin2, HIGH);
digitalWrite (whitePin3, HIGH);
digitalWrite (whitePin4, HIGH);
digitalWrite (whitePin5, HIGH);
digitalWrite (whitePin6, HIGH);
delay(100);



 // bluePinOn
digitalWrite (bluePin1, LOW);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, LOW);
digitalWrite (bluePin5, LOW);
digitalWrite (bluePin6, HIGH);
delay(100);

digitalWrite (bluePin1, LOW);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, LOW);
digitalWrite (bluePin5, HIGH);
digitalWrite (bluePin6, HIGH);
delay(100);

digitalWrite (bluePin1, LOW);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, HIGH);
digitalWrite (bluePin5, HIGH);
digitalWrite (bluePin6, HIGH);
delay(100);

digitalWrite (bluePin1, LOW);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin3, HIGH);
digitalWrite (bluePin4, HIGH);
digitalWrite (bluePin5, HIGH);
digitalWrite (bluePin6, HIGH);
delay(100);

digitalWrite (bluePin1, LOW);
digitalWrite (bluePin2, HIGH);
digitalWrite (bluePin3, HIGH);
digitalWrite (bluePin4, HIGH);
digitalWrite (bluePin5, HIGH);
digitalWrite (bluePin6, HIGH);
delay(100);

digitalWrite (bluePin1, HIGH);
digitalWrite (bluePin2, HIGH);
digitalWrite (bluePin3, HIGH);
digitalWrite (bluePin4, HIGH);
digitalWrite (bluePin5, HIGH);
digitalWrite (bluePin6, HIGH);
delay(100);

//YellowPinOn
digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, LOW);
digitalWrite (yellowPin5, LOW);
digitalWrite (yellowPin6, HIGH);
delay(100);

digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, LOW);
digitalWrite (yellowPin5, HIGH);
digitalWrite (yellowPin6, HIGH);
delay(100);

digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, HIGH);
digitalWrite (yellowPin5, HIGH);
digitalWrite (yellowPin6, HIGH);
delay(100);

digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, HIGH);
digitalWrite (yellowPin4, HIGH);
digitalWrite (yellowPin5, HIGH);
digitalWrite (yellowPin6, HIGH);
delay(100);

digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin2, HIGH);
digitalWrite (yellowPin3, HIGH);
digitalWrite (yellowPin4, HIGH);
digitalWrite (yellowPin5, HIGH);
digitalWrite (yellowPin6, HIGH);
delay(100);


digitalWrite (yellowPin1, HIGH);
digitalWrite (yellowPin2, HIGH);
digitalWrite (yellowPin3, HIGH);
digitalWrite (yellowPin4, HIGH);
digitalWrite (yellowPin5, HIGH);
digitalWrite (yellowPin6, HIGH);
delay(100);

  //greenPinOn

digitalWrite (greenPin1,LOW );
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin3, LOW);
digitalWrite (greenPin4, LOW);
digitalWrite (greenPin5, LOW);
digitalWrite (greenPin6, HIGH);
delay(100);

digitalWrite (greenPin1,LOW );
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin3, LOW);
digitalWrite (greenPin4, LOW);
digitalWrite (greenPin5, HIGH);
digitalWrite (greenPin6, HIGH);
delay(100);

digitalWrite (greenPin1,LOW );
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin3, LOW);
digitalWrite (greenPin4, HIGH);
digitalWrite (greenPin5, HIGH);
digitalWrite (greenPin6, HIGH);
delay(100);

digitalWrite (greenPin1,LOW );
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin3, HIGH);
digitalWrite (greenPin4, HIGH);
digitalWrite (greenPin5, HIGH);
digitalWrite (greenPin6, HIGH);
delay(100);

digitalWrite (greenPin1,LOW );
digitalWrite (greenPin2, HIGH);
digitalWrite (greenPin3, HIGH);
digitalWrite (greenPin4, HIGH);
digitalWrite (greenPin5, HIGH);
digitalWrite (greenPin6, HIGH);
delay(100);

digitalWrite (greenPin1,HIGH );
digitalWrite (greenPin2, HIGH);
digitalWrite (greenPin3, HIGH);
digitalWrite (greenPin4, HIGH);
digitalWrite (greenPin5, HIGH);
digitalWrite (greenPin6, HIGH);
delay(100);

// redPinOn
digitalWrite (redPin1, LOW);
digitalWrite (redPin2, LOW);
digitalWrite (redPin3, LOW);
digitalWrite (redPin4, LOW);
digitalWrite (redPin5, LOW);
digitalWrite (redPin6, HIGH);
delay(100);

digitalWrite (redPin1, LOW);
digitalWrite (redPin2, LOW);
digitalWrite (redPin3, LOW);
digitalWrite (redPin4, LOW);
digitalWrite (redPin5, HIGH);
digitalWrite (redPin6, HIGH);
delay(100);

digitalWrite (redPin1, LOW);
digitalWrite (redPin2, LOW);
digitalWrite (redPin3, LOW);
digitalWrite (redPin4, HIGH);
digitalWrite (redPin5, HIGH);
digitalWrite (redPin6, HIGH);
delay(100);

digitalWrite (redPin1, LOW);
digitalWrite (redPin2, LOW);
digitalWrite (redPin3, HIGH);
digitalWrite (redPin4, HIGH);
digitalWrite (redPin5, HIGH);
digitalWrite (redPin6, HIGH);
delay(100);

digitalWrite (redPin1, LOW);
digitalWrite (redPin2, HIGH);
digitalWrite (redPin3, HIGH);
digitalWrite (redPin4, HIGH);
digitalWrite (redPin5, HIGH);
digitalWrite (redPin6, HIGH);
delay(100);

digitalWrite (redPin1, HIGH);
digitalWrite (redPin2, HIGH);
digitalWrite (redPin3, HIGH);
digitalWrite (redPin4, HIGH);
digitalWrite (redPin5, HIGH);
digitalWrite (redPin6, HIGH);
delay(100);


digitalWrite (redPin1, LOW);
digitalWrite (redPin2, LOW);
digitalWrite (redPin3, LOW);
digitalWrite (redPin4, LOW);
digitalWrite (redPin5, LOW);
digitalWrite (redPin6, LOW);

digitalWrite (greenPin1, LOW);
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin3, LOW);
digitalWrite (greenPin4, LOW);
digitalWrite (greenPin5, LOW);
digitalWrite (greenPin6, LOW);

digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, LOW);
digitalWrite (yellowPin5, LOW);
digitalWrite (yellowPin6, LOW);

digitalWrite (bluePin1, LOW);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, LOW);
digitalWrite (bluePin5, LOW);
digitalWrite (bluePin6, LOW);

digitalWrite (whitePin1, LOW);
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin3, LOW);
digitalWrite (whitePin4, LOW);
digitalWrite (whitePin5, LOW);
digitalWrite (whitePin6, LOW);

delay(100);

//WhitePinOn
digitalWrite (whitePin1, LOW);
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin3, LOW);
digitalWrite (whitePin4, LOW);
digitalWrite (whitePin5, LOW);
digitalWrite (whitePin6, HIGH);
delay(100);

digitalWrite (whitePin1, LOW);
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin3, LOW);
digitalWrite (whitePin4, LOW);
digitalWrite (whitePin5, HIGH);
digitalWrite (whitePin6, HIGH);
delay(100);

digitalWrite (whitePin1, LOW);
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin3, LOW);
digitalWrite (whitePin4, HIGH);
digitalWrite (whitePin5, HIGH);
digitalWrite (whitePin6, HIGH);
delay(100);

digitalWrite (whitePin1, LOW);
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin3, HIGH);
digitalWrite (whitePin4, HIGH);
digitalWrite (whitePin5, HIGH);
digitalWrite (whitePin6, HIGH);
delay(100);

digitalWrite (whitePin1, LOW);
digitalWrite (whitePin2, HIGH);
digitalWrite (whitePin3, HIGH);
digitalWrite (whitePin4, HIGH);
digitalWrite (whitePin5, HIGH);
digitalWrite (whitePin6, HIGH);
delay(100);

digitalWrite (whitePin1, HIGH);
digitalWrite (whitePin2, HIGH);
digitalWrite (whitePin3, HIGH);
digitalWrite (whitePin4, HIGH);
digitalWrite (whitePin5, HIGH);
digitalWrite (whitePin6, HIGH);
delay(100);



 // bluePinOn
digitalWrite (bluePin1, LOW);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, LOW);
digitalWrite (bluePin5, LOW);
digitalWrite (bluePin6, HIGH);
delay(100);

digitalWrite (bluePin1, LOW);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, LOW);
digitalWrite (bluePin5, HIGH);
digitalWrite (bluePin6, HIGH);
delay(100);

digitalWrite (bluePin1, LOW);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, HIGH);
digitalWrite (bluePin5, HIGH);
digitalWrite (bluePin6, HIGH);
delay(100);

digitalWrite (bluePin1, LOW);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin3, HIGH);
digitalWrite (bluePin4, HIGH);
digitalWrite (bluePin5, HIGH);
digitalWrite (bluePin6, HIGH);
delay(100);

digitalWrite (bluePin1, LOW);
digitalWrite (bluePin2, HIGH);
digitalWrite (bluePin3, HIGH);
digitalWrite (bluePin4, HIGH);
digitalWrite (bluePin5, HIGH);
digitalWrite (bluePin6, HIGH);
delay(100);

digitalWrite (bluePin1, HIGH);
digitalWrite (bluePin2, HIGH);
digitalWrite (bluePin3, HIGH);
digitalWrite (bluePin4, HIGH);
digitalWrite (bluePin5, HIGH);
digitalWrite (bluePin6, HIGH);
delay(100);

//YellowPinOn
digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, LOW);
digitalWrite (yellowPin5, LOW);
digitalWrite (yellowPin6, HIGH);
delay(100);

digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, LOW);
digitalWrite (yellowPin5, HIGH);
digitalWrite (yellowPin6, HIGH);
delay(100);

digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, HIGH);
digitalWrite (yellowPin5, HIGH);
digitalWrite (yellowPin6, HIGH);
delay(100);

digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, HIGH);
digitalWrite (yellowPin4, HIGH);
digitalWrite (yellowPin5, HIGH);
digitalWrite (yellowPin6, HIGH);
delay(100);

digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin2, HIGH);
digitalWrite (yellowPin3, HIGH);
digitalWrite (yellowPin4, HIGH);
digitalWrite (yellowPin5, HIGH);
digitalWrite (yellowPin6, HIGH);
delay(100);


digitalWrite (yellowPin1, HIGH);
digitalWrite (yellowPin2, HIGH);
digitalWrite (yellowPin3, HIGH);
digitalWrite (yellowPin4, HIGH);
digitalWrite (yellowPin5, HIGH);
digitalWrite (yellowPin6, HIGH);
delay(100);

  //greenPinOn

digitalWrite (greenPin1,LOW );
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin3, LOW);
digitalWrite (greenPin4, LOW);
digitalWrite (greenPin5, LOW);
digitalWrite (greenPin6, HIGH);
delay(100);

digitalWrite (greenPin1,LOW );
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin3, LOW);
digitalWrite (greenPin4, LOW);
digitalWrite (greenPin5, HIGH);
digitalWrite (greenPin6, HIGH);
delay(100);

digitalWrite (greenPin1,LOW );
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin3, LOW);
digitalWrite (greenPin4, HIGH);
digitalWrite (greenPin5, HIGH);
digitalWrite (greenPin6, HIGH);
delay(100);

digitalWrite (greenPin1,LOW );
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin3, HIGH);
digitalWrite (greenPin4, HIGH);
digitalWrite (greenPin5, HIGH);
digitalWrite (greenPin6, HIGH);
delay(100);

digitalWrite (greenPin1,LOW );
digitalWrite (greenPin2, HIGH);
digitalWrite (greenPin3, HIGH);
digitalWrite (greenPin4, HIGH);
digitalWrite (greenPin5, HIGH);
digitalWrite (greenPin6, HIGH);
delay(100);

digitalWrite (greenPin1,HIGH );
digitalWrite (greenPin2, HIGH);
digitalWrite (greenPin3, HIGH);
digitalWrite (greenPin4, HIGH);
digitalWrite (greenPin5, HIGH);
digitalWrite (greenPin6, HIGH);
delay(100);

// redPinOn
digitalWrite (redPin1, LOW);
digitalWrite (redPin2, LOW);
digitalWrite (redPin3, LOW);
digitalWrite (redPin4, LOW);
digitalWrite (redPin5, LOW);
digitalWrite (redPin6, HIGH);
delay(100);

digitalWrite (redPin1, LOW);
digitalWrite (redPin2, LOW);
digitalWrite (redPin3, LOW);
digitalWrite (redPin4, LOW);
digitalWrite (redPin5, HIGH);
digitalWrite (redPin6, HIGH);
delay(100);

digitalWrite (redPin1, LOW);
digitalWrite (redPin2, LOW);
digitalWrite (redPin3, LOW);
digitalWrite (redPin4, HIGH);
digitalWrite (redPin5, HIGH);
digitalWrite (redPin6, HIGH);
delay(100);

digitalWrite (redPin1, LOW);
digitalWrite (redPin2, LOW);
digitalWrite (redPin3, HIGH);
digitalWrite (redPin4, HIGH);
digitalWrite (redPin5, HIGH);
digitalWrite (redPin6, HIGH);
delay(100);

digitalWrite (redPin1, LOW);
digitalWrite (redPin2, HIGH);
digitalWrite (redPin3, HIGH);
digitalWrite (redPin4, HIGH);
digitalWrite (redPin5, HIGH);
digitalWrite (redPin6, HIGH);
delay(100);

digitalWrite (redPin1, HIGH);
digitalWrite (redPin2, HIGH);
digitalWrite (redPin3, HIGH);
digitalWrite (redPin4, HIGH);
digitalWrite (redPin5, HIGH);
digitalWrite (redPin6, HIGH);
delay(100);

digitalWrite (redPin1, LOW);
digitalWrite (redPin2, LOW);
digitalWrite (redPin3, LOW);
digitalWrite (redPin4, LOW);
digitalWrite (redPin5, LOW);
digitalWrite (redPin6, LOW);

digitalWrite (greenPin1, LOW);
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin3, LOW);
digitalWrite (greenPin4, LOW);
digitalWrite (greenPin5, LOW);
digitalWrite (greenPin6, LOW);

digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, LOW);
digitalWrite (yellowPin5, LOW);
digitalWrite (yellowPin6, LOW);

digitalWrite (bluePin1, LOW);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, LOW);
digitalWrite (bluePin5, LOW);
digitalWrite (bluePin6, LOW);

digitalWrite (whitePin1, LOW);
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin3, LOW);
digitalWrite (whitePin4, LOW);
digitalWrite (whitePin5, LOW);
digitalWrite (whitePin6, LOW);

delay(100);

}

void xAnimate(){

digitalWrite (redPin1, LOW);
digitalWrite (redPin2, LOW);
digitalWrite (redPin3, LOW);
digitalWrite (redPin4, LOW);
digitalWrite (redPin5, LOW);
digitalWrite (redPin6, LOW);

digitalWrite (greenPin1, LOW);
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin3, LOW);
digitalWrite (greenPin4, LOW);
digitalWrite (greenPin5, LOW);
digitalWrite (greenPin6, LOW);

digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, LOW);
digitalWrite (yellowPin5, LOW);
digitalWrite (yellowPin6, LOW);

digitalWrite (bluePin1, LOW);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, LOW);
digitalWrite (bluePin5, LOW);
digitalWrite (bluePin6, LOW);

digitalWrite (whitePin1, LOW);
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin3, LOW);
digitalWrite (whitePin4, LOW);
digitalWrite (whitePin5, LOW);
digitalWrite (whitePin6, LOW);

delay(1000);

//XAnimateOn

digitalWrite (redPin1, HIGH);
digitalWrite (redPin6, HIGH);
digitalWrite (greenPin2, HIGH);
digitalWrite (greenPin5, HIGH);
digitalWrite (yellowPin3, HIGH);
digitalWrite (yellowPin4, HIGH);
digitalWrite (bluePin3, HIGH);
digitalWrite (bluePin4, HIGH);
digitalWrite (whitePin2, HIGH);
digitalWrite (whitePin5, HIGH);

delay(3000);

digitalWrite (redPin1, LOW);
digitalWrite (redPin6, LOW);
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin5, LOW);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, LOW);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, LOW);
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin5, LOW);

delay(1000);

// xAnimateLineByLineOn
digitalWrite (redPin1, HIGH);
digitalWrite (redPin6, HIGH);
delay(300);
digitalWrite (greenPin2, HIGH);
digitalWrite (greenPin5, HIGH);
delay(300);
digitalWrite (yellowPin3, HIGH);
digitalWrite (yellowPin4, HIGH);
delay(300);
digitalWrite (bluePin3, HIGH);
digitalWrite (bluePin4, HIGH);
delay(300);
digitalWrite (whitePin2, HIGH);
digitalWrite (whitePin5, HIGH);
delay(300);

// xAnimateLineByLineOff
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin5, LOW);
delay(300);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, LOW);
delay(300);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, LOW);
delay(300);
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin5, LOW);
delay(300);
digitalWrite (redPin1, LOW);
digitalWrite (redPin6, LOW);
delay(300);

//xAnimateAllBlink
digitalWrite (redPin1, HIGH);
digitalWrite (redPin6, HIGH);
digitalWrite (greenPin2, HIGH);
digitalWrite (greenPin5, HIGH);
digitalWrite (yellowPin3, HIGH);
digitalWrite (yellowPin4, HIGH);
digitalWrite (bluePin3, HIGH);
digitalWrite (bluePin4, HIGH);
digitalWrite (whitePin2, HIGH);
digitalWrite (whitePin5, HIGH);
delay(1000);
digitalWrite (redPin1, LOW);
digitalWrite (redPin6, LOW);
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin5, LOW);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, LOW);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, LOW);
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin5, LOW);
delay(1000);
digitalWrite (redPin1, HIGH);
digitalWrite (redPin6, HIGH);
digitalWrite (greenPin2, HIGH);
digitalWrite (greenPin5, HIGH);
digitalWrite (yellowPin3, HIGH);
digitalWrite (yellowPin4, HIGH);
digitalWrite (bluePin3, HIGH);
digitalWrite (bluePin4, HIGH);
digitalWrite (whitePin2, HIGH);
digitalWrite (whitePin5, HIGH);
delay(1000);
digitalWrite (redPin1, LOW);
digitalWrite (redPin6, LOW);
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin5, LOW);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, LOW);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, LOW);
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin5, LOW);
delay(1000);


}

void aAnimate(){
digitalWrite (redPin2, HIGH);
digitalWrite (redPin3, HIGH);
digitalWrite (redPin4, HIGH);
digitalWrite (redPin5, HIGH);
digitalWrite (greenPin2, HIGH);
digitalWrite (greenPin5, HIGH);
digitalWrite (yellowPin2, HIGH);
digitalWrite (yellowPin3, HIGH);
digitalWrite (yellowPin4, HIGH);
digitalWrite (yellowPin5, HIGH);
digitalWrite (bluePin2, HIGH);
digitalWrite (bluePin5, HIGH);
digitalWrite (whitePin2, HIGH);
digitalWrite (whitePin5, HIGH);
delay(3000);

digitalWrite (redPin2, LOW);
digitalWrite (redPin3, LOW);
digitalWrite (redPin4, LOW);
digitalWrite (redPin5, LOW);
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin5, LOW);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, LOW);
digitalWrite (yellowPin5, LOW);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin5, LOW);
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin5, LOW);
delay(1000);

//whitePinOn
digitalWrite (whitePin2, HIGH);
digitalWrite (whitePin5, HIGH);
delay(200);

//bluePinOn
digitalWrite (bluePin2, HIGH);
digitalWrite (bluePin5, HIGH);
delay(200);

//yellowPinOn
digitalWrite (yellowPin2, HIGH);
digitalWrite (yellowPin3, HIGH);
digitalWrite (yellowPin4, HIGH);
digitalWrite (yellowPin5, HIGH);
delay(200);

//greenPinOn
digitalWrite (greenPin2, HIGH);
digitalWrite (greenPin5, HIGH);
delay(200);

//redPinOn
digitalWrite (redPin2, HIGH);
digitalWrite (redPin3, HIGH);
digitalWrite (redPin4, HIGH);
digitalWrite (redPin5, HIGH);
delay(200);

digitalWrite (redPin2, LOW);
digitalWrite (redPin3, LOW);
digitalWrite (redPin4, LOW);
digitalWrite (redPin5, LOW);
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin5, LOW);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, LOW);
digitalWrite (yellowPin5, LOW);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin5, LOW);
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin5, LOW);
delay(1000);

//ledOnByOn

digitalWrite (whitePin5, HIGH);
delay(200);
digitalWrite (bluePin5, HIGH);
delay(200);
digitalWrite (yellowPin5, HIGH);
delay(200);
digitalWrite (greenPin5, HIGH);
delay(200);
digitalWrite (redPin5, HIGH);
delay(200);
digitalWrite (redPin4, HIGH);
delay(200);
digitalWrite (redPin3, HIGH);
delay(200);
digitalWrite (redPin2, HIGH);
delay(200);
digitalWrite (greenPin2, HIGH);
delay(200);
digitalWrite (yellowPin2, HIGH);
delay(200);
digitalWrite (bluePin2, HIGH);
delay(200);
digitalWrite (whitePin2, HIGH);
delay(200);
digitalWrite (yellowPin4, HIGH);
delay(200);
digitalWrite (yellowPin3, HIGH);
delay(200);

//aAnimateBlink
digitalWrite (redPin2, HIGH);
digitalWrite (redPin3, HIGH);
digitalWrite (redPin4, HIGH);
digitalWrite (redPin5, HIGH);
digitalWrite (greenPin2, HIGH);
digitalWrite (greenPin5, HIGH);
digitalWrite (yellowPin2, HIGH);
digitalWrite (yellowPin3, HIGH);
digitalWrite (yellowPin4, HIGH);
digitalWrite (yellowPin5, HIGH);
digitalWrite (bluePin2, HIGH);
digitalWrite (bluePin5, HIGH);
digitalWrite (whitePin2, HIGH);
digitalWrite (whitePin5, HIGH);
delay(1000);

digitalWrite (redPin2, LOW);
digitalWrite (redPin3, LOW);
digitalWrite (redPin4, LOW);
digitalWrite (redPin5, LOW);
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin5, LOW);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, LOW);
digitalWrite (yellowPin5, LOW);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin5, LOW);
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin5, LOW);
delay(1000);

digitalWrite (redPin2, HIGH);
digitalWrite (redPin3, HIGH);
digitalWrite (redPin4, HIGH);
digitalWrite (redPin5, HIGH);
digitalWrite (greenPin2, HIGH);
digitalWrite (greenPin5, HIGH);
digitalWrite (yellowPin2, HIGH);
digitalWrite (yellowPin3, HIGH);
digitalWrite (yellowPin4, HIGH);
digitalWrite (yellowPin5, HIGH);
digitalWrite (bluePin2, HIGH);
digitalWrite (bluePin5, HIGH);
digitalWrite (whitePin2, HIGH);
digitalWrite (whitePin5, HIGH);
delay(1000);

digitalWrite (redPin2, LOW);
digitalWrite (redPin3, LOW);
digitalWrite (redPin4, LOW);
digitalWrite (redPin5, LOW);
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin5, LOW);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, LOW);
digitalWrite (yellowPin5, LOW);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin5, LOW);
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin5, LOW);
delay(1000);

  
}

void rectangleAnimate(){

digitalWrite (greenPin2, HIGH);
digitalWrite (greenPin3, HIGH);
digitalWrite (greenPin4, HIGH);
digitalWrite (greenPin5, HIGH);
digitalWrite (yellowPin2, HIGH);
digitalWrite (yellowPin5, HIGH);
digitalWrite (bluePin2, HIGH);
digitalWrite (bluePin3, HIGH);
digitalWrite (bluePin4, HIGH);
digitalWrite (bluePin5, HIGH);
delay(3000);

digitalWrite (greenPin2, LOW);
digitalWrite (greenPin3, LOW);
digitalWrite (greenPin4, LOW);
digitalWrite (greenPin5, LOW);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin5, LOW);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, LOW);
digitalWrite (bluePin5, LOW);
delay(1000);

//ledOneByOneOn
digitalWrite (greenPin2, HIGH);
delay(200);
digitalWrite (greenPin3, HIGH);
delay(200);
digitalWrite (greenPin4, HIGH);
delay(200);
digitalWrite (greenPin5, HIGH);
delay(200);
digitalWrite (yellowPin5, HIGH);
delay(200);
digitalWrite (bluePin5, HIGH);
delay(200);
digitalWrite (bluePin4, HIGH);
delay(200);
digitalWrite (bluePin3, HIGH);
delay(200);
digitalWrite (bluePin2, HIGH);
delay(200);
digitalWrite (yellowPin2, HIGH);
delay(200);

//ledOnByOneOff
digitalWrite (yellowPin2, LOW);
delay(200);
digitalWrite (bluePin2, LOW);
delay(200);
digitalWrite (bluePin3, LOW);
delay(200);
digitalWrite (bluePin4, LOW);
delay(200);
digitalWrite (bluePin5, LOW);
delay(200);
digitalWrite (yellowPin5, LOW);
delay(200);
digitalWrite (greenPin5, LOW);
delay(200);
digitalWrite (greenPin4, LOW);
delay(200);
digitalWrite (greenPin3, LOW);
delay(200);
digitalWrite (greenPin2, LOW);
delay(200);

//ledOneByOneOn
digitalWrite (greenPin2, HIGH);
delay(200);
digitalWrite (greenPin3, HIGH);
delay(200);
digitalWrite (greenPin4, HIGH);
delay(200);
digitalWrite (greenPin5, HIGH);
delay(200);
digitalWrite (yellowPin5, HIGH);
delay(200);
digitalWrite (bluePin5, HIGH);
delay(200);
digitalWrite (bluePin4, HIGH);
delay(200);
digitalWrite (bluePin3, HIGH);
delay(200);
digitalWrite (bluePin2, HIGH);
delay(200);
digitalWrite (yellowPin2, HIGH);
delay(200);

//ledOnByOneOff
digitalWrite (yellowPin2, LOW);
delay(200);
digitalWrite (bluePin2, LOW);
delay(200);
digitalWrite (bluePin3, LOW);
delay(200);
digitalWrite (bluePin4, LOW);
delay(200);
digitalWrite (bluePin5, LOW);
delay(200);
digitalWrite (yellowPin5, LOW);
delay(200);
digitalWrite (greenPin5, LOW);
delay(200);
digitalWrite (greenPin4, LOW);
delay(200);
digitalWrite (greenPin3, LOW);
delay(200);
digitalWrite (greenPin2, LOW);
delay(200);

//allBlink

digitalWrite (greenPin2, HIGH);
digitalWrite (greenPin3, HIGH);
digitalWrite (greenPin4, HIGH);
digitalWrite (greenPin5, HIGH);
digitalWrite (yellowPin2, HIGH);
digitalWrite (yellowPin5, HIGH);
digitalWrite (bluePin2, HIGH);
digitalWrite (bluePin3, HIGH);
digitalWrite (bluePin4, HIGH);
digitalWrite (bluePin5, HIGH);
delay(1000);

digitalWrite (greenPin2, LOW);
digitalWrite (greenPin3, LOW);
digitalWrite (greenPin4, LOW);
digitalWrite (greenPin5, LOW);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin5, LOW);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, LOW);
digitalWrite (bluePin5, LOW);
delay(1000);

digitalWrite (greenPin2, HIGH);
digitalWrite (greenPin3, HIGH);
digitalWrite (greenPin4, HIGH);
digitalWrite (greenPin5, HIGH);
digitalWrite (yellowPin2, HIGH);
digitalWrite (yellowPin5, HIGH);
digitalWrite (bluePin2, HIGH);
digitalWrite (bluePin3, HIGH);
digitalWrite (bluePin4, HIGH);
digitalWrite (bluePin5, HIGH);
delay(1000);

digitalWrite (greenPin2, LOW);
digitalWrite (greenPin3, LOW);
digitalWrite (greenPin4, LOW);
digitalWrite (greenPin5, LOW);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin5, LOW);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, LOW);
digitalWrite (bluePin5, LOW);
delay(1000);


  
}

void bazzard(){

digitalWrite (redPin1, LOW);
digitalWrite (redPin2, LOW);
digitalWrite (redPin3, LOW);
digitalWrite (redPin4, HIGH);
digitalWrite (redPin5, LOW);
digitalWrite (redPin6, LOW);

digitalWrite (greenPin1, LOW);
digitalWrite (greenPin2, HIGH);
digitalWrite (greenPin3, LOW);
digitalWrite (greenPin4, LOW);
digitalWrite (greenPin5, LOW);
digitalWrite (greenPin6, LOW);

digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, LOW);
digitalWrite (yellowPin5, LOW);
digitalWrite (yellowPin6, LOW);

digitalWrite (bluePin1, LOW);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, LOW);
digitalWrite (bluePin5, HIGH);
digitalWrite (bluePin6, LOW);

digitalWrite (whitePin1, LOW);
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin3, HIGH);
digitalWrite (whitePin4, LOW);
digitalWrite (whitePin5, HIGH);
digitalWrite (whitePin6, LOW);
delay(500);

digitalWrite (redPin1, HIGH);
digitalWrite (redPin2, HIGH);
digitalWrite (redPin3, HIGH);
digitalWrite (redPin4, HIGH);
digitalWrite (redPin5, HIGH);
digitalWrite (redPin6, HIGH);

digitalWrite (greenPin1, LOW);
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin3, LOW);
digitalWrite (greenPin4, LOW);
digitalWrite (greenPin5, LOW);
digitalWrite (greenPin6, LOW);

digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, HIGH);
digitalWrite (yellowPin4, LOW);
digitalWrite (yellowPin5, HIGH);
digitalWrite (yellowPin6, LOW);

digitalWrite (bluePin1, LOW);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, HIGH);
digitalWrite (bluePin5, HIGH);
digitalWrite (bluePin6, HIGH);

digitalWrite (whitePin1, LOW);
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin3, LOW);
digitalWrite (whitePin4, LOW);
digitalWrite (whitePin5, LOW);
digitalWrite (whitePin6, LOW);
delay(500);

digitalWrite (redPin1, LOW);
digitalWrite (redPin2, LOW);
digitalWrite (redPin3, LOW);
digitalWrite (redPin4, LOW);
digitalWrite (redPin5, LOW);
digitalWrite (redPin6, LOW);

digitalWrite (greenPin1, LOW);
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin3, LOW);
digitalWrite (greenPin4, LOW);
digitalWrite (greenPin5, LOW);
digitalWrite (greenPin6, LOW);

digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, HIGH);
digitalWrite (yellowPin4, LOW);
digitalWrite (yellowPin5, HIGH);
digitalWrite (yellowPin6, HIGH);

digitalWrite (bluePin1, LOW);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin3, HIGH);
digitalWrite (bluePin4, HIGH);
digitalWrite (bluePin5, LOW);
digitalWrite (bluePin6, LOW);

digitalWrite (whitePin1, LOW);
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin3, HIGH);
digitalWrite (whitePin4, LOW);
digitalWrite (whitePin5, LOW);
digitalWrite (whitePin6, HIGH);
delay(500);

digitalWrite (redPin1, LOW);
digitalWrite (redPin2, LOW);
digitalWrite (redPin3, HIGH);
digitalWrite (redPin4, LOW);
digitalWrite (redPin5, LOW);
digitalWrite (redPin6, LOW);

digitalWrite (greenPin1, HIGH);
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin3, LOW);
digitalWrite (greenPin4, LOW);
digitalWrite (greenPin5, LOW);
digitalWrite (greenPin6, HIGH);

digitalWrite (yellowPin1, HIGH);
digitalWrite (yellowPin2, HIGH);
digitalWrite (yellowPin3, HIGH);
digitalWrite (yellowPin4, HIGH);
digitalWrite (yellowPin5, HIGH);
digitalWrite (yellowPin6, HIGH);

digitalWrite (bluePin1, LOW);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, LOW);
digitalWrite (bluePin5, HIGH);
digitalWrite (bluePin6, HIGH);

digitalWrite (whitePin1, HIGH);
digitalWrite (whitePin2, HIGH);
digitalWrite (whitePin3, HIGH);
digitalWrite (whitePin4, LOW);
digitalWrite (whitePin5, LOW);
digitalWrite (whitePin6, LOW);
delay(500);

digitalWrite (redPin1, HIGH);
digitalWrite (redPin2, HIGH);
digitalWrite (redPin3, HIGH);
digitalWrite (redPin4, HIGH);
digitalWrite (redPin5, HIGH);
digitalWrite (redPin6, HIGH);

digitalWrite (greenPin1, HIGH);
digitalWrite (greenPin2, HIGH);
digitalWrite (greenPin3, HIGH);
digitalWrite (greenPin4, HIGH);
digitalWrite (greenPin5, HIGH);
digitalWrite (greenPin6, HIGH);

digitalWrite (yellowPin1, HIGH);
digitalWrite (yellowPin2, HIGH);
digitalWrite (yellowPin3, HIGH);
digitalWrite (yellowPin4, HIGH);
digitalWrite (yellowPin5, HIGH);
digitalWrite (yellowPin6, HIGH);

digitalWrite (bluePin1, HIGH);
digitalWrite (bluePin2, HIGH);
digitalWrite (bluePin3, HIGH);
digitalWrite (bluePin4, HIGH);
digitalWrite (bluePin5, HIGH);
digitalWrite (bluePin6, HIGH);

digitalWrite (whitePin1, HIGH);
digitalWrite (whitePin2, HIGH);
digitalWrite (whitePin3, HIGH);
digitalWrite (whitePin4, HIGH);
digitalWrite (whitePin5, HIGH);
digitalWrite (whitePin6, HIGH);
delay(500);

digitalWrite (redPin1, HIGH);
digitalWrite (redPin2, LOW);
digitalWrite (redPin3, LOW);
digitalWrite (redPin4, LOW);
digitalWrite (redPin5, LOW);
digitalWrite (redPin6, HIGH);

digitalWrite (greenPin1, HIGH);
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin3, LOW);
digitalWrite (greenPin4, LOW);
digitalWrite (greenPin5, LOW);
digitalWrite (greenPin6, HIGH);

digitalWrite (yellowPin1, HIGH);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, LOW);
digitalWrite (yellowPin5, LOW);
digitalWrite (yellowPin6, HIGH);

digitalWrite (bluePin1, HIGH);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, LOW);
digitalWrite (bluePin5, LOW);
digitalWrite (bluePin6, HIGH);

digitalWrite (whitePin1, HIGH);
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin3, LOW);
digitalWrite (whitePin4, LOW);
digitalWrite (whitePin5, LOW);
digitalWrite (whitePin6, HIGH);
delay(500);

digitalWrite (redPin1, LOW);
digitalWrite (redPin2, LOW);
digitalWrite (redPin3, HIGH);
digitalWrite (redPin4, HIGH);
digitalWrite (redPin5, LOW);
digitalWrite (redPin6, LOW);

digitalWrite (greenPin1, LOW);
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin3, HIGH);
digitalWrite (greenPin4, HIGH);
digitalWrite (greenPin5, LOW);
digitalWrite (greenPin6, LOW);

digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, HIGH);
digitalWrite (yellowPin4, HIGH);
digitalWrite (yellowPin5, LOW);
digitalWrite (yellowPin6, LOW);

digitalWrite (bluePin1, LOW);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin3, HIGH);
digitalWrite (bluePin4, HIGH);
digitalWrite (bluePin5, LOW);
digitalWrite (bluePin6, LOW);

digitalWrite (whitePin1, LOW);
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin3, HIGH);
digitalWrite (whitePin4, HIGH);
digitalWrite (whitePin5, LOW);
digitalWrite (whitePin6, LOW);
delay(500);

digitalWrite (redPin1, LOW);
digitalWrite (redPin2, LOW);
digitalWrite (redPin3, LOW);
digitalWrite (redPin4, LOW);
digitalWrite (redPin5, LOW);
digitalWrite (redPin6, LOW);

digitalWrite (greenPin1, LOW);
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin3, LOW);
digitalWrite (greenPin4, LOW);
digitalWrite (greenPin5, LOW);
digitalWrite (greenPin6, LOW);

digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, LOW);
digitalWrite (yellowPin5, LOW);
digitalWrite (yellowPin6, LOW);

digitalWrite (bluePin1, LOW);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, LOW);
digitalWrite (bluePin5, LOW);
digitalWrite (bluePin6, LOW);

digitalWrite (whitePin1, HIGH);
digitalWrite (whitePin2, HIGH);
digitalWrite (whitePin3, HIGH);
digitalWrite (whitePin4, HIGH);
digitalWrite (whitePin5, HIGH);
digitalWrite (whitePin6, HIGH);
delay(500);

digitalWrite (redPin1, LOW);
digitalWrite (redPin2, LOW);
digitalWrite (redPin3, LOW);
digitalWrite (redPin4, LOW);
digitalWrite (redPin5, LOW);
digitalWrite (redPin6, LOW);

digitalWrite (greenPin1, LOW);
digitalWrite (greenPin2, HIGH);
digitalWrite (greenPin3, LOW);
digitalWrite (greenPin4, HIGH);
digitalWrite (greenPin5, LOW);
digitalWrite (greenPin6, HIGH);

digitalWrite (yellowPin1, HIGH);
digitalWrite (yellowPin2, HIGH);
digitalWrite (yellowPin3, HIGH);
digitalWrite (yellowPin4, LOW);
digitalWrite (yellowPin5, LOW);
digitalWrite (yellowPin6, LOW);

digitalWrite (bluePin1, LOW);
digitalWrite (bluePin2, HIGH);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, LOW);
digitalWrite (bluePin5, HIGH);
digitalWrite (bluePin6, LOW);

digitalWrite (whitePin1, LOW);
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin3, HIGH);
digitalWrite (whitePin4, LOW);
digitalWrite (whitePin5, LOW);
digitalWrite (whitePin6, HIGH);
delay(500);

digitalWrite (redPin1, LOW);
digitalWrite (redPin2, LOW);
digitalWrite (redPin3, LOW);
digitalWrite (redPin4, LOW);
digitalWrite (redPin5, LOW);
digitalWrite (redPin6, LOW);

digitalWrite (greenPin1, HIGH);
digitalWrite (greenPin2, HIGH);
digitalWrite (greenPin3, HIGH);
digitalWrite (greenPin4, HIGH);
digitalWrite (greenPin5, HIGH);
digitalWrite (greenPin6, HIGH);

digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, LOW);
digitalWrite (yellowPin5, LOW);
digitalWrite (yellowPin6, HIGH);

digitalWrite (bluePin1, HIGH);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, LOW);
digitalWrite (bluePin5, LOW);
digitalWrite (bluePin6, LOW);

digitalWrite (whitePin1, LOW);
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin3, HIGH);
digitalWrite (whitePin4, HIGH);
digitalWrite (whitePin5, LOW);
digitalWrite (whitePin6, LOW);
delay(500);

digitalWrite (redPin1, LOW);
digitalWrite (redPin2, LOW);
digitalWrite (redPin3, LOW);
digitalWrite (redPin4, LOW);
digitalWrite (redPin5, LOW);
digitalWrite (redPin6, LOW);

digitalWrite (greenPin1, HIGH);
digitalWrite (greenPin2, HIGH);
digitalWrite (greenPin3, HIGH);
digitalWrite (greenPin4, HIGH);
digitalWrite (greenPin5, HIGH);
digitalWrite (greenPin6, HIGH);

digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, LOW);
digitalWrite (yellowPin5, LOW);
digitalWrite (yellowPin6, LOW);

digitalWrite (bluePin1, HIGH);
digitalWrite (bluePin2, HIGH);
digitalWrite (bluePin3, HIGH);
digitalWrite (bluePin4, HIGH);
digitalWrite (bluePin5, HIGH);
digitalWrite (bluePin6, HIGH);

digitalWrite (whitePin1, LOW);
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin3, LOW);
digitalWrite (whitePin4, LOW);
digitalWrite (whitePin5, LOW);
digitalWrite (whitePin6, LOW);
delay(500);

digitalWrite (redPin1, HIGH);
digitalWrite (redPin2, HIGH);
digitalWrite (redPin3, HIGH);
digitalWrite (redPin4, HIGH);
digitalWrite (redPin5, HIGH);
digitalWrite (redPin6, HIGH);

digitalWrite (greenPin1, LOW);
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin3, LOW);
digitalWrite (greenPin4, LOW);
digitalWrite (greenPin5, LOW);
digitalWrite (greenPin6, LOW);

digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, LOW);
digitalWrite (yellowPin5, LOW);
digitalWrite (yellowPin6, LOW);

digitalWrite (bluePin1, LOW);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, LOW);
digitalWrite (bluePin5, LOW);
digitalWrite (bluePin6, LOW);

digitalWrite (whitePin1, HIGH);
digitalWrite (whitePin2, HIGH);
digitalWrite (whitePin3, HIGH);
digitalWrite (whitePin4, HIGH);
digitalWrite (whitePin5, HIGH);
digitalWrite (whitePin6, HIGH);
delay(500);

digitalWrite (redPin1, LOW);
digitalWrite (redPin2, LOW);
digitalWrite (redPin3, LOW);
digitalWrite (redPin4, LOW);
digitalWrite (redPin5, LOW);
digitalWrite (redPin6, LOW);

digitalWrite (greenPin1, LOW);
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin3, LOW);
digitalWrite (greenPin4, LOW);
digitalWrite (greenPin5, LOW);
digitalWrite (greenPin6, LOW);

digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4,HIGH);
digitalWrite (yellowPin5, LOW);
digitalWrite (yellowPin6, LOW);

digitalWrite (bluePin1, LOW);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, LOW);
digitalWrite (bluePin5, LOW);
digitalWrite (bluePin6, LOW);

digitalWrite (whitePin1, LOW);
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin3, LOW);
digitalWrite (whitePin4, LOW);
digitalWrite (whitePin5, LOW);
digitalWrite (whitePin6, LOW);

delay(500);
digitalWrite (redPin1, LOW);
digitalWrite (redPin2, LOW);
digitalWrite (redPin3, LOW);
digitalWrite (redPin4, LOW);
digitalWrite (redPin5, LOW);
digitalWrite (redPin6, LOW);

digitalWrite (greenPin1, LOW);
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin3, LOW);
digitalWrite (greenPin4, LOW);
digitalWrite (greenPin5, LOW);
digitalWrite (greenPin6, LOW);

digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, LOW);
digitalWrite (yellowPin5, LOW);
digitalWrite (yellowPin6, LOW);

digitalWrite (bluePin1, LOW);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, LOW);
digitalWrite (bluePin5, LOW);
digitalWrite (bluePin6, LOW);

digitalWrite (whitePin1, LOW);
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin3, LOW);
digitalWrite (whitePin4, LOW);
digitalWrite (whitePin5, LOW);
digitalWrite (whitePin6, LOW);

delay(500);

digitalWrite (redPin1, LOW);
digitalWrite (redPin2, LOW);
digitalWrite (redPin3, LOW);
digitalWrite (redPin4, LOW);
digitalWrite (redPin5, LOW);
digitalWrite (redPin6, LOW);

digitalWrite (greenPin1, LOW);
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin3, LOW);
digitalWrite (greenPin4, LOW);
digitalWrite (greenPin5, LOW);
digitalWrite (greenPin6, LOW);

digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, HIGH);
digitalWrite (yellowPin5, LOW);
digitalWrite (yellowPin6, LOW);

digitalWrite (bluePin1, LOW);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, LOW);
digitalWrite (bluePin5, LOW);
digitalWrite (bluePin6, LOW);

digitalWrite (whitePin1, LOW);
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin3, LOW);
digitalWrite (whitePin4, LOW);
digitalWrite (whitePin5, LOW);
digitalWrite (whitePin6, LOW);
delay(500);

digitalWrite (redPin1, HIGH);
digitalWrite (redPin2, HIGH);
digitalWrite (redPin3, HIGH);
digitalWrite (redPin4, LOW);
digitalWrite (redPin5, LOW);
digitalWrite (redPin6, LOW);

digitalWrite (greenPin1, HIGH);
digitalWrite (greenPin2, HIGH);
digitalWrite (greenPin3, HIGH);
digitalWrite (greenPin4, LOW);
digitalWrite (greenPin5, LOW);
digitalWrite (greenPin6, LOW);

digitalWrite (yellowPin1, HIGH);
digitalWrite (yellowPin2, HIGH);
digitalWrite (yellowPin3, HIGH);
digitalWrite (yellowPin4, LOW);
digitalWrite (yellowPin5, LOW);
digitalWrite (yellowPin6, LOW);

digitalWrite (bluePin1, HIGH);
digitalWrite (bluePin2, HIGH);
digitalWrite (bluePin3, HIGH);
digitalWrite (bluePin4, LOW);
digitalWrite (bluePin5, LOW);
digitalWrite (bluePin6, LOW);

digitalWrite (whitePin1, HIGH);
digitalWrite (whitePin2, HIGH);
digitalWrite (whitePin3, HIGH);
digitalWrite (whitePin4, LOW);
digitalWrite (whitePin5, LOW);
digitalWrite (whitePin6, LOW);
delay(500);

digitalWrite (redPin1, LOW);
digitalWrite (redPin2, LOW);
digitalWrite (redPin3, LOW);
digitalWrite (redPin4, LOW);
digitalWrite (redPin5, LOW);
digitalWrite (redPin6, LOW);

digitalWrite (greenPin1, LOW);
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin3, LOW);
digitalWrite (greenPin4, LOW);
digitalWrite (greenPin5, LOW);
digitalWrite (greenPin6, LOW);

digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, LOW);
digitalWrite (yellowPin5, LOW);
digitalWrite (yellowPin6, LOW);

digitalWrite (bluePin1, LOW);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, LOW);
digitalWrite (bluePin5, LOW);
digitalWrite (bluePin6, LOW);

digitalWrite (whitePin1, LOW);
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin3, LOW);
digitalWrite (whitePin4, LOW);
digitalWrite (whitePin5, LOW);
digitalWrite (whitePin6, LOW);
delay(500);

digitalWrite (redPin1, LOW);
digitalWrite (redPin2, LOW);
digitalWrite (redPin3, LOW);
digitalWrite (redPin4, HIGH);
digitalWrite (redPin5, HIGH);
digitalWrite (redPin6, HIGH);

digitalWrite (greenPin1, LOW);
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin3, LOW);
digitalWrite (greenPin4, HIGH);
digitalWrite (greenPin5, HIGH);
digitalWrite (greenPin6, HIGH);

digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, HIGH);
digitalWrite (yellowPin5, HIGH);
digitalWrite (yellowPin6, HIGH);

digitalWrite (bluePin1, LOW);
digitalWrite (bluePin2, LOW);
digitalWrite (bluePin3, LOW);
digitalWrite (bluePin4, HIGH);
digitalWrite (bluePin5, HIGH);
digitalWrite (bluePin6, HIGH);

digitalWrite (whitePin1, LOW);
digitalWrite (whitePin2, LOW);
digitalWrite (whitePin3, LOW);
digitalWrite (whitePin4, HIGH);
digitalWrite (whitePin5, HIGH);
digitalWrite (whitePin6, HIGH);
delay(500);



  
}

//void makeFun(){
//
//digitalWrite (redPin1, HIGH);
//digitalWrite (redPin2, HIGH);
//digitalWrite (redPin3, HIGH);
//
//digitalWrite (greenPin1, HIGH);
//digitalWrite (greenPin2, HIGH);
//digitalWrite (greenPin3, HIGH);
//
//delay(1000);
//
//digitalWrite (redPin1, LOW);
//digitalWrite (redPin2, LOW);
//digitalWrite (redPin3, LOW);
//
//digitalWrite (greenPin1, LOW);
//digitalWrite (greenPin2, LOW);
//digitalWrite (greenPin3, LOW);
//
//delay(1000);
//
//digitalWrite (redPin1, HIGH);
//digitalWrite (redPin2, HIGH);
//digitalWrite (redPin3, HIGH);
//
//digitalWrite (greenPin1, HIGH);
//digitalWrite (greenPin2, HIGH);
//digitalWrite (greenPin3, HIGH);
//
//delay(1000);
//
//digitalWrite (redPin1, LOW);
//digitalWrite (redPin2, LOW);
//digitalWrite (redPin3, LOW);
//
//digitalWrite (greenPin1, LOW);
//digitalWrite (greenPin2, LOW);
//digitalWrite (greenPin3, LOW);
//
//delay(1000);
//
//
//digitalWrite (redPin1, HIGH);
//digitalWrite (redPin2, HIGH);
//digitalWrite (redPin3, HIGH);
//
//digitalWrite (greenPin1, LOW);
//digitalWrite (greenPin2, LOW);
//digitalWrite (greenPin3, LOW);
//
//delay(1000);
//
//
//digitalWrite (redPin1, LOW);
//digitalWrite (redPin2, LOW);
//digitalWrite (redPin3, LOW);
//
//digitalWrite (greenPin1, HIGH);
//digitalWrite (greenPin2, HIGH);
//digitalWrite (greenPin3, HIGH);
//
//delay(1000);
//
//
//digitalWrite (redPin1, HIGH);
//digitalWrite (redPin2, HIGH);
//digitalWrite (redPin3, HIGH);
//
//digitalWrite (greenPin1, LOW);
//digitalWrite (greenPin2, LOW);
//digitalWrite (greenPin3, LOW);
//
//delay(1000);
//
//
//digitalWrite (redPin1, LOW);
//digitalWrite (redPin2, LOW);
//digitalWrite (redPin3, LOW);
//
//digitalWrite (greenPin1, HIGH);
//digitalWrite (greenPin2, HIGH);
//digitalWrite (greenPin3, HIGH);
//
//delay(1000);
//
//digitalWrite (redPin1, LOW);
//digitalWrite (redPin2, LOW);
//digitalWrite (redPin3, LOW);
//
//digitalWrite (greenPin1, LOW);
//digitalWrite (greenPin2, LOW);
//digitalWrite (greenPin3, LOW);
//
//delay(1000);
//}
