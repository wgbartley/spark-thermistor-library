#include "thermistor-library/thermistor-library.h"

// Analog pin the thermistor is connected to
int thermPin = A0;

// Voltage divider resistor value
int thermRes = 10000;

// Configure the Thermistor class
Thermistor Thermistor(thermPin, thermRes);


void setup() {
	// Start Serial output
	Serial.begin(9600);

	// Initialize the Thermistor class
	Thermistor.begin();
}


void loop() {
	// Print temperature in degrees Kelvin
	Serial.print("Kelvin: ");
	Serial.println(Thermistor.getTempK());

	// Print temperature in degrees Celsius
	Serial.print("Celsius: ");
	Serial.println(Thermistor.getTempC());
	
	// Print temperature in degrees Fahrenheit
	Serial.print("Fahrenheit: ");
	Serial.println(Thermistor.getTempF());
	

	// Wait 1 second
	delay(1000);
}
