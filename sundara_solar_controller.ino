/*
  Sundara Adaptive Solar Energy Controller
  Prototype: Solar-powered battery charging regulator with adaptive logic

  This system monitors input voltage from a solar source and dynamically
  enables or disables charging based on a defined threshold. It demonstrates
  energy-aware decision-making for embedded systems, which can be extended
  to SmallSat onboard power management.
*/

// Pin Definitions
#define SOLAR_INPUT_PIN A0
#define CHARGE_ENABLE_PIN 2

// System Parameters
#define CHARGE_THRESHOLD 550        // Threshold for voltage decision
#define CHARGE_ON_TIME 2000         // Charging duration (ms)
#define CHARGE_OFF_TIME 2000        // Pause duration (ms)

// Variables
int inputVoltage = 0;

void setup() {
  pinMode(CHARGE_ENABLE_PIN, OUTPUT);
  digitalWrite(CHARGE_ENABLE_PIN, HIGH); // Start with charging enabled
  Serial.begin(9600);
}

void loop() {

  // Read solar input voltage
  inputVoltage = analogRead(SOLAR_INPUT_PIN);

  // Print readings to Serial Monitor
  Serial.print("Solar Input (raw) = ");
  Serial.println(inputVoltage);

  Serial.print("Estimated Battery Voltage = ");
  Serial.println(inputVoltage * 0.00488 + 2.36);

  // Adaptive charging logic
  if (inputVoltage > CHARGE_THRESHOLD) {

    Serial.println("Charging paused (sufficient input energy)");
    digitalWrite(CHARGE_ENABLE_PIN, LOW);
    delay(CHARGE_OFF_TIME);

  } else {

    Serial.println("Charging active (low input energy)");
    digitalWrite(CHARGE_ENABLE_PIN, HIGH);
    delay(CHARGE_ON_TIME);
  }
}
