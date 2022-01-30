
 int touchPin1 = 2;
 
 int touchPin2 = 3;
 
 
void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);

pinMode(touchPin1, INPUT_PULLUP);
pinMode(touchPin2, INPUT_PULLUP);

}

void loop() {
  // put your main code here, to run repeatedly:
//    Serial.println("Etat 1: ");
//    Serial.println(digitalRead(touchPin1));
//    Serial.print("  //  Etat 2: ");
//    Serial.println(digitalRead(touchPin2));
//    delay(1000);


if (digitalRead(touchPin1)==1){
    Serial.println("Etat Haut 1");
  }
  else {Serial.println("Etat bas 1");
  }

   if (digitalRead(touchPin2)==1){
    Serial.println("Etat Haut 2");
  }
  else {Serial.println("Etat bas 2");
  }

  

}
