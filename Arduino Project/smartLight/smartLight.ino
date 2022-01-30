
#include <IRremote.h>


// Déclaration des variables

int pirPin1 = 7; //capteur de mouvement room1
int pirPin2 = 8; // capteur de mouvement roo2
int relayPin1 = 9; //light room 1
int relayPin2 = 10; //light room 2
int relayPin3 = 11; //light room 3
int relayPin4 = 12; // light room 4


int soundSensor = 6; // capteur de son Room 4

int irSensor = 5; // capteur infrarouge room 3


//#define TIMER_COUNT_TOP  (SYSCLOCK * MICROS_PER_TICK / 1000000)
/*
 * timerConfigForReceive() is used exclusively by IRrecv::enableIRIn()
 * It generates an interrupt each 50 (MICROS_PER_TICK) us.
 */
IRrecv irrecv(irSensor);// Vitesse de décodage



int buzzer = 4; // buzzer
int flameSensor = A0; // Capteur de flame
int valorFlameSensor = 0; // Valeur enregistré par le capteur de flame



void setup() {
   // Initialisation des variables, des modes et des fonctions

//Communication bits/s
  Serial.begin(9600);

  // demarrage du décodage
  /*
 * timerConfigForReceive() is used exclusively by IRrecv::enableIRIn()
 * It generates an interrupt each 50 (MICROS_PER_TICK) us.
 */
 // Supply own enableIRIn() and enableIROut()
  irrecv.enableIRIn();

  // Déclaration des modes
  pinMode(pirPin1, INPUT);  //room1
  pinMode(pirPin2, INPUT);  //room2
  pinMode(irSensor, INPUT); // room3
  pinMode(soundSensor, INPUT);  //room4

  pinMode(relayPin1, OUTPUT);  //room1
  pinMode(relayPin2, OUTPUT);  //room2
  pinMode(relayPin3, OUTPUT);  //room3
  pinMode(relayPin4, OUTPUT);  //room4
  pinMode(buzzer, OUTPUT);

//initialisation des états de sortie
  digitalWrite(relayPin1, LOW);
  digitalWrite(relayPin2, LOW);
  digitalWrite(relayPin3, LOW);
  digitalWrite(relayPin4, LOW);

}

void loop() {
  
lightByPir(); // Allumage par capteur de mouvement room 1 et 2
lightByIr(); // Allumage par infra rouge Romm3
lightBySound(); // Allumage par capteur sonore Room 4
flameAlarm(); // Alarm Anti feu

}

void lightByPir(){
  
  //Capteur de mouvement room 1

   if (digitalRead(pirPin1) == HIGH)
    {
       digitalWrite(relayPin1, HIGH);
    } else{
      digitalWrite(relayPin1, LOW);
    }
    

    //Capteur de mouvement room 2
    if (digitalRead(pirPin2) == HIGH)
    {
       digitalWrite(relayPin2, HIGH);
    }
    else{
      digitalWrite(relayPin2, LOW);
    }
}

void lightByIr(){

  //IR receiver room 3
    if (irrecv.decode()) {
    irrecv.resume();

    
      if(digitalRead(relayPin3)==1){
        digitalWrite(relayPin3, LOW);
      } else{
        digitalWrite(relayPin3, HIGH);
      }  
    
  }
  
}

void lightBySound(){

  // capteur de son room 4
//Serial.print(statusSensor);
int statusSensor = digitalRead(soundSensor);
    if (statusSensor==1){
      if(digitalRead(relayPin4)==1){
        digitalWrite(relayPin4, LOW);
      }
      else{
        digitalWrite(relayPin4, HIGH);
      }
    }
  
}

void flameAlarm(){

  // Capteur de flame 
  valorFlameSensor = analogRead(flameSensor);

Serial.println(valorFlameSensor);

//activate the buzzer

if (valorFlameSensor < 500){

digitalWrite(buzzer, HIGH);

delay(100);

// Desactiva el buzzer

digitalWrite(buzzer, LOW);

delay(50); }
  
}
  
    
