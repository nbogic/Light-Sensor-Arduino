
int photosensor = A0; // This is where your photoresistor or phototransistor is plugged in. The other side goes to the "power" pin (below).

int analogvalue; // Here we are declaring the integer variable analogvalue, which we will use later to store the value of the photoresistor or phototransistor.


void setup() {
	Serial.begin();

}

void loop() {
	String level = String(analogRead(photosensor)); //integer to string value
	Serial.printlnf("%d", analogvalue); //print to console
	Particle.publish("level", level, PRIVATE); //publish as a event
	delay(30000); //delay in between readings
}
