#include <IRremote.h>
int RECV_PIN = 5;
IRrecv irrecv(RECV_PIN); // le capteur infrarouge est connecté à broche 5 de l’Arduino
decode_results results;

const int led_verte = 2;  // le relais est connecté à la broche 2 de la carte Adruino
const int led_oranger = 3;  // le relais est connecté à la broche 3 de la carte Adruino
const int led_rouge = 4;  // le relais est connecté à la broche 4 de la carte Adruino
int allumer_vert,allumer_rouge,allumer_oranger;

void setup()
{ irrecv.enableIRIn(); // Initialise le recepteur infrarouge
allumer_vert=0;
allumer_rouge=0;
allumer_oranger=0;
pinMode(led_verte, OUTPUT);
pinMode(led_oranger, OUTPUT);
pinMode(led_rouge, OUTPUT);
}

void loop()
{ if (irrecv.decode(&results)) {

if (results.value==0xFF30CF)//on appuie sur la touche 1 de la télécommande
{
if (allumer_vert==0 )// si led verte éteinte
{allumer_vert=1;
digitalWrite(led_verte, HIGH);// LED oranger s’allume
}else
{allumer_vert=0;
digitalWrite(led_verte, LOW);// LED oranger s’éteint
}
}

if (results.value==0xFF18E7)//on appuie sur la touche 2
{
if (allumer_oranger==0 ) // si led oranger éteinte
{allumer_oranger=1;
digitalWrite(led_oranger, HIGH);// LED oranger s’allume
}else
{allumer_oranger=0;
digitalWrite(led_oranger, LOW);// LED oranger s’éteint
}
}

if (results.value==0xFF7A85)//on appuie sur la touche 3
{
if (allumer_rouge==0 ) // si led rouge éteinte
{allumer_rouge=1;
digitalWrite(led_rouge, HIGH);// LED rouge s’allume
}else
{allumer_rouge=0;
digitalWrite(led_rouge, LOW);// LED rouge s’éteint
}
}

irrecv.resume(); // Recoit la valeur suivante
}

}
