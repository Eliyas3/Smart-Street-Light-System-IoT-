🚀 Project Title
Automatic Smart Street Light using LDR and ESP32

📖 Problem Statement

Street lights are often manually controlled or remain ON even during daylight, leading to huge electricity wastage. There is a need for an automated system that can intelligently control street lights based on environmental conditions.

🎯 Objective

To build a system that:
Automatically turns ON lights at night
Turns OFF lights during daytime
Reduces energy consumption
Works without human intervention

⚙️ Components Required

ESP32 / Arduino
LDR (Light Dependent Resistor)
LED / Street Light (via Relay)
Resistor (10kΩ)
Breadboard
Jumper wires

🔌 Working Principle

The LDR senses light intensity:
Daylight → Low resistance → Light OFF
Darkness → High resistance → Light ON
The ESP32 reads LDR values and controls the light accordingly.

🔄 System Flow

LDR → ESP32 → Decision → Light ON/OFF

🌍 Applications

Smart cities
Highways
Parking areas
Campus lighting systems

📌 Output

Light automatically turns ON in dark
Light turns OFF in daylight
Energy saving achieved
