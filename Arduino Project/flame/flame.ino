

int buzzer = 4; //select the pin for the buzzer

int valorSensor = 0; // variable to store the value coming from the sensor

void setup() {

//Setting the serial port speed

Serial.begin(9600);

// declare buzzer as a output

pinMode(buzzer, OUTPUT);

} void loop() {

//Read the sensor value:

valorSensor = analogRead(A0);

Serial.println(valorSensor);

//activate the buzzer

if (valorSensor < 500){

digitalWrite(buzzer, HIGH);

delay(100);

// Desactiva el buzzer

digitalWrite(buzzer, LOW);

delay(50); }

}
