
// Déclaration des variables

// Premier Feu
int redPin1 = 2;
int yellowPin1 = 3;
int greenPin1 = 4;

// Deuxième Feu
int redPin2 = 5;
int yellowPin2 = 6;
int greenPin2 = 7;

// Troisième Feu
int redPin3 = 8;
int yellowPin3 = 9;
int greenPin3 = 10;

// Quatrième Feu
int redPin4 = 11;
int yellowPin4 = 12;
int greenPin4 = 13;




void setup() {
   // Initialisation des variables, des modes et des fonctions

//Communication bits/s
Serial.begin(9600);


// Déclaration des modes
pinMode(redPin1, OUTPUT);
pinMode(redPin2, OUTPUT);
pinMode(redPin3, OUTPUT);
pinMode(redPin4, OUTPUT);

pinMode(yellowPin1, OUTPUT);
pinMode(yellowPin2, OUTPUT);
pinMode(yellowPin3, OUTPUT);
pinMode(yellowPin4, OUTPUT);

pinMode(greenPin1, OUTPUT);
pinMode(greenPin2, OUTPUT);
pinMode(greenPin3, OUTPUT);
pinMode(greenPin4, OUTPUT);


//initialisation des états de sortie
digitalWrite (redPin1, LOW);
digitalWrite (redPin2, LOW);
digitalWrite (redPin3, LOW);
digitalWrite (redPin4, LOW);

digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, LOW);

digitalWrite (greenPin1, LOW);
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin3, LOW);
digitalWrite (greenPin4, LOW);

}

void loop() {
  // put your main code here, to run repeatedly:

normalTraffic();
smartTraffic();
safeTraffic();

}

void normalTraffic(){

//phhaseOne
digitalWrite (redPin1, HIGH);
digitalWrite (redPin4, HIGH);
digitalWrite (greenPin2, HIGH);
digitalWrite (greenPin3, HIGH);
delay(8000);

//phaseTwo
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin3, LOW);
digitalWrite (yellowPin2, HIGH);
digitalWrite (yellowPin3, HIGH);
delay(500);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
delay(500);
digitalWrite (yellowPin2, HIGH);
digitalWrite (yellowPin3, HIGH);
delay(500);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
delay(500);
digitalWrite (yellowPin2, HIGH);
digitalWrite (yellowPin3, HIGH);
delay(500);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
delay(500);


//phaseThree
digitalWrite (redPin1, LOW);
digitalWrite (redPin4, LOW);
digitalWrite (greenPin1, HIGH);
digitalWrite (greenPin4, HIGH);
digitalWrite (redPin2, HIGH);
digitalWrite (redPin3, HIGH);
delay(8000);

//phaseFour

digitalWrite (greenPin1, LOW);
digitalWrite (greenPin4, LOW);

digitalWrite (yellowPin1, HIGH);
digitalWrite (yellowPin4, HIGH);
delay(500);
digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin4, LOW);
delay(500);
digitalWrite (yellowPin1, HIGH);
digitalWrite (yellowPin4, HIGH);
delay(500);
digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin4, LOW);
delay(500);
digitalWrite (yellowPin1, HIGH);
digitalWrite (yellowPin4, HIGH);
delay(500);
digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin4, LOW);
delay(500);

//phaseFive

digitalWrite (redPin2, LOW);
digitalWrite (redPin3, LOW);
digitalWrite (redPin1, HIGH);
digitalWrite (redPin4, HIGH);
digitalWrite (greenPin2, HIGH);
digitalWrite (greenPin3, HIGH);
delay(4000);

digitalWrite (redPin1, LOW);
digitalWrite (redPin2, LOW);
digitalWrite (redPin3, LOW);
digitalWrite (redPin4, LOW);

digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, LOW);

digitalWrite (greenPin1, LOW);
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin3, LOW);
digitalWrite (greenPin4, LOW);
delay(1000);
  
}

void smartTraffic(){

  //phaseOne
digitalWrite (redPin1, HIGH);
digitalWrite (redPin4, HIGH);
digitalWrite (greenPin2, HIGH);
digitalWrite (greenPin3, HIGH);
delay(8000);

//phaseTwo
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin3, LOW);


digitalWrite (yellowPin2, HIGH);
digitalWrite (yellowPin3, HIGH);
delay(500);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
delay(500);
digitalWrite (yellowPin2, HIGH);
digitalWrite (yellowPin3, HIGH);
delay(500);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
delay(500);
digitalWrite (yellowPin2, HIGH);
digitalWrite (yellowPin3, HIGH);
delay(500);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
delay(500);


//phaseThree
digitalWrite (redPin1, LOW);
digitalWrite (redPin4, LOW);
digitalWrite (greenPin1, HIGH);
digitalWrite (greenPin4, HIGH);
digitalWrite (redPin2, HIGH);
digitalWrite (redPin3, HIGH);
delay(16000);

//phaseFour

digitalWrite (greenPin1, LOW);
digitalWrite (greenPin4, LOW);

digitalWrite (yellowPin1, HIGH);
digitalWrite (yellowPin4, HIGH);
delay(500);
digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin4, LOW);
delay(500);
digitalWrite (yellowPin1, HIGH);
digitalWrite (yellowPin4, HIGH);
delay(500);
digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin4, LOW);
delay(500);
digitalWrite (yellowPin1, HIGH);
digitalWrite (yellowPin4, HIGH);
delay(500);
digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin4, LOW);
delay(500);

//phaseFive

digitalWrite (redPin2, LOW);
digitalWrite (redPin3, LOW);
digitalWrite (redPin1, HIGH);
digitalWrite (redPin4, HIGH);
digitalWrite (greenPin2, HIGH);
digitalWrite (greenPin3, HIGH);
delay(8000);


digitalWrite (redPin1, LOW);
digitalWrite (redPin2, LOW);
digitalWrite (redPin3, LOW);
digitalWrite (redPin4, LOW);

digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, LOW);

digitalWrite (greenPin1, LOW);
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin3, LOW);
digitalWrite (greenPin4, LOW);
delay(1000);
}

void safeTraffic(){
  //Poteau1
  //phaseOne
digitalWrite (greenPin1, HIGH);
digitalWrite (redPin1, LOW);
digitalWrite (redPin2, HIGH);
digitalWrite (redPin3, HIGH);
digitalWrite (redPin4, HIGH);
delay(8000);

//phaseTwo
digitalWrite (greenPin1, LOW);
digitalWrite (yellowPin1, HIGH);
delay(500);
digitalWrite (yellowPin1, LOW);
delay(500);
digitalWrite (yellowPin1, HIGH);
delay(500);
digitalWrite (yellowPin1, LOW);
delay(500);
digitalWrite (yellowPin1, HIGH);
delay(500);
digitalWrite (yellowPin1, LOW);
delay(500);

//Poteau2
//phaseOne
digitalWrite (greenPin2, HIGH);
digitalWrite (redPin1, HIGH);
digitalWrite (redPin2, LOW);
digitalWrite (redPin3, HIGH);
digitalWrite (redPin4, HIGH);
delay(8000);

//phaseTwo
digitalWrite (greenPin2, LOW);
digitalWrite (yellowPin2, HIGH);
delay(500);
digitalWrite (yellowPin2, LOW);
delay(500);
digitalWrite (yellowPin2, HIGH);
delay(500);
digitalWrite (yellowPin2, LOW);
delay(500);
digitalWrite (yellowPin2, HIGH);
delay(500);
digitalWrite (yellowPin2, LOW);
delay(500);

//Poteau3
//phaseOne
digitalWrite (greenPin3, HIGH);
digitalWrite (redPin1, HIGH);
digitalWrite (redPin2, HIGH);
digitalWrite (redPin3, LOW);
digitalWrite (redPin4, HIGH);
delay(8000);

//phaseTwo
digitalWrite (greenPin3, LOW);
digitalWrite (yellowPin3, HIGH);
delay(500);
digitalWrite (yellowPin3, LOW);
delay(500);
digitalWrite (yellowPin3, HIGH);
delay(500);
digitalWrite (yellowPin3, LOW);
delay(500);
digitalWrite (yellowPin3, HIGH);
delay(500);
digitalWrite (yellowPin3, LOW);
delay(500);

//Poteau4
//phaseOne
digitalWrite (greenPin4, HIGH);
digitalWrite (redPin1, HIGH);
digitalWrite (redPin2, HIGH);
digitalWrite (redPin3, HIGH);
digitalWrite (redPin4, LOW);
delay(8000);

//phaseTwo
digitalWrite (greenPin4, LOW);
digitalWrite (yellowPin4, HIGH);
delay(500);
digitalWrite (yellowPin4, LOW);
delay(500);
digitalWrite (yellowPin4, HIGH);
delay(500);
digitalWrite (yellowPin4, LOW);
delay(500);
digitalWrite (yellowPin4, HIGH);
delay(500);
digitalWrite (yellowPin4, LOW);
delay(500);

digitalWrite (redPin1, LOW);
digitalWrite (redPin2, LOW);
digitalWrite (redPin3, LOW);
digitalWrite (redPin4, LOW);

digitalWrite (yellowPin1, LOW);
digitalWrite (yellowPin2, LOW);
digitalWrite (yellowPin3, LOW);
digitalWrite (yellowPin4, LOW);

digitalWrite (greenPin1, LOW);
digitalWrite (greenPin2, LOW);
digitalWrite (greenPin3, LOW);
digitalWrite (greenPin4, LOW);
delay(1000);
  
}
