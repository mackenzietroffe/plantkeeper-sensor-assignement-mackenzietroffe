// TemperatureSensor.cpp

#include "TemperatureSensor.h"

const int TemperatureError = -1000;

// Function declarations

// Name: TemperatureSetup
// Parameters: int SensorPin - the pin the sensor is attached to
// Returns: True if the setup succeeds, false if it fails
bool TemperatureSetup(int SensorPin)
{
  Serial.println("Temperature sensor setup complete");

  return true;
}

// Name: TemperatureLoop
// Parameters: int SensorPin - the pin the sensor is attached to
// Returns: The current temperature, in degrees Celsius, or int.min if it has not been setup yet
int TemperatureLoop(int SensorPin)
{
 int analogValue;
    float temperature;

    // read our temperature sensor
    analogValue = analogRead(SensorPin);

    // convert the 10bit analog value to celcius
    temperature = float(analogValue) / 1023;
    temperature = temperature * 500;

    // print the temperature over serial
    Serial.print("Temp: ");
    Serial.print(temperature);
    Serial.println("C");
  // Return an error
  return temperature;
}
