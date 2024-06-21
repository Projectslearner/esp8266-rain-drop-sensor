/*
    Project name : ESP8266 Rain drop sensor
    Modified Date: 20-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/esp8266-rain-drop-sensor
*/

// Define the analog pin connected to the raindrop sensor
const int raindropPin = A0; // Analog pin A0 on NodeMCU

void setup() {
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  // Read the analog value from the raindrop sensor
  int sensorValue = analogRead(raindropPin);

  // Print the sensor value to Serial Monitor
  Serial.print("Raindrop Sensor Value: ");
  Serial.println(sensorValue);

  // Add a small delay before the next reading
  delay(1000);
}
