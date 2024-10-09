#  VSDSquadron Research Internship 2024

The program is based on the RISC-V architecture and uses open-source tools to teach people about VLSI chip design and RISC-V. The instructor for this internship is Kunal Ghosh Sir.

##  Basic Details

**Name:** VISHAL P V  
**College:** RMK ENGINEERING COLLEGE, Chennai

**Email ID:** vishal2020vvk@gmail.com  
**GitHub Profile:** [VISHAL P V](https://github.com/VishalPV2004)  
**LinkedIN Profile:** [VISHAL P V](https://www.linkedin.com/in/vishalpv2004/)


<details>

 <summary><h2>Task 5 : </h2>
 <br>
  <h2>
  Mealy Non-Overlapping Sequence Detector using VSDSquadron Mini Board(1010)
 </h2> </summary>



## Project Overview:
This project implements a **Sequence Detector FSM** using the **VSDSquadron Mini board**, a RISC-V based SoC development kit. The sequence detector FSM will get inputs from two push buttons, one of them is encoded as logic 1, another as logic 0. The current number enterred is displayed using a 7-segment LED display. The inputs obtained are processed by the next state combinational logic block, the outputs corresponding to the states and the inputs are processed by the output logic block and displayed by a LED.
### Components Required:
1. **VSDSquadron Mini RISC-V board**
2. **1 LED** 
3. **Push Buttons** 
4. **Breadboard and jumper wires**
5. **Arduino IDE** for development
6. **Resistors** for current limiting

### Hardware Connections:
- **7 segment:**
  - **VCC** to **5V** pin of VSDSquadron Mini
  - **GND** to **GND** pin of VSDSquadron Mini
  - **COM** to **5V** pin of VSDSquadron Mini
  - **a** to **PC0** of VSDSquadron Mini
  - **b** to **PC1** of VSDSquadron Mini
  - **c** to **PC2** of VSDSquadron Mini
  - **d** to **PC3** of VSDSquadron Mini
  - **e** to **PC4** of VSDSquadron Mini
  - **f** to **PC5** of VSDSquadron Mini
  - **g** to **PC6** of VSDSquadron Mini
**All these connections are provided with a 1K current limiting resistors, which is used to ensure the safety of LEDs inside the segment display.**
- **LED:**
   - **Positive (Anode)** to **PD3**
   - **Negative (Cathode)** to **GND**
- **Push Buttons - logic 1 :**
   - One leg connected to **PD7**
   - One leg connected to **GND** rail.
- **Push Buttons - logic 0 :**
   - One leg connected to **PC0**
   - One leg connected to **GND** rail    



### Project Image:

![VSDSquadron-mini-internship](https://github.com/Prawinkumarjs/VSDSquadron-mini-internship/blob/main/Task%206/Front%20view(working).jpg)

### Truth Table:

For simplicity, this system uses the gas sensor output and a threshold value to determine when to trigger the LED:

   | Gas Sensor Value | LED Status (Alert) |
   |------------------|--------------------|
   | Below Threshold   | Off                |
   | Above Threshold   | On                 |


### Pin Diagram for Gas Detection System Using VSDSquadron Mini RISC-V Development Board:


![Gas Detection System Using VSDSquadron Mini RISC-V Development Board](https://github.com/Prawinkumarjs/VSDSquadron-mini-internship/blob/main/Task%205/Gas%20Detection%20System%20Using%20VSDSquadron%20Mini%20RISC-V%20Development%20Board.png)
   

### Program:

```cpp
#include <Arduino.h> // Using Arduino-style syntax

// Define the pin for the gas sensor and buzzer/LED
#define GAS_SENSOR_PIN PC4   // Analog input pin (adjusted to PC4)
#define ALERT_PIN PD6        // Pin for buzzer or LED

// Threshold for gas detection (adjust based on calibration)
#define GAS_THRESHOLD 300

void setup() {
  // Initialize the serial monitor for debugging
   Serial.begin(9600);

   // Set the ALERT_PIN as output
   pinMode(ALERT_PIN, OUTPUT);

   // Initialize the gas sensor pin (optional since it is analog)
   pinMode(GAS_SENSOR_PIN, INPUT);

   Serial.println("Gas detection system initialized...");
}

void loop() {
   // Read the analog value from the gas sensor
   int gasSensorValue = analogRead(GAS_SENSOR_PIN);

   // Debugging: Print the gas sensor value
   Serial.print("Gas Sensor Value: ");
   Serial.println(gasSensorValue);

   // Check if the gas level exceeds the threshold
   if (gasSensorValue > GAS_THRESHOLD) {
      // If gas is detected, activate the alert (buzzer or LED)
      digitalWrite(ALERT_PIN, HIGH);
      Serial.println("Gas Detected! Activating alert...");
      } 
   else {
         // Otherwise, turn off the alert
         digitalWrite(ALERT_PIN, LOW);
   }

   // Small delay to prevent overwhelming the serial output
   delay(500);
   }

```
### Conclusion:
This project demonstrates the integration of an **MQ gas sensor** with the **VSDSquadron Mini board** to detect gases and alert the user through an LED indicator. This setup showcases how the RISC-V architecture and embedded systems handle real-world sensor data and control outputs in a practical application.

 
 </details>

 
------------------------------------------------------------------------------------------------------------------------------------------------------------


<details>

 <summary><h2>Task 6 : </h2>
 <br>
  <h2>
   Demonstration of Project  
  </h2>
  </summary>


### Gas Detection System Using VSDSquadron Mini RISC-V Development Board

## Project Overview:
This project implements a **gas detection system** using the **VSDSquadron Mini board**, a RISC-V based SoC development kit. The gas detection system will monitor the air for dangerous gases using a gas sensor. When gas levels exceed a set threshold, a **LED indicator** or **buzzer** is activated to alert the user. This project demonstrates reading analog data from a sensor and controlling GPIO pins using digital logic, which is simulated and built using Arduino IDE.

### Hardware Connections:
- **Gas Sensor:**
- **VCC** to **5V** pin of VSDSquadron Mini
- **GND** to **GND** pin of VSDSquadron Mini
- **AO** (Analog Output) to **PC4** (analog input pin)
        
- **LED:**
   - **Positive (Anode)** to **PD6**
   - **Negative (Cathode)** to **GND**

### Circuit Connection:
   ```
   MQ Gas Sensor       VSDSquadron Mini
      VCC  -------->  5V
      GND  -------->  GND
      AO   -------->  PC4 (Analog Input)

   LED               VSDSquadron Mini
      +    -------->  PD6 (GPIO Pin for alert)
      -    -------->  GND
   ```

### Truth Table:

For simplicity, this system uses the gas sensor output and a threshold value to determine when to trigger the LED:

   | Gas Sensor Value | LED Status (Alert) |
   |------------------|--------------------|
   | Below Threshold   | Off                |
   | Above Threshold   | On                 |


### Pin Diagram for Gas Detection System Using VSDSquadron Mini RISC-V Development Board:
![Gas Detection System Using VSDSquadron Mini RISC-V Development Board](https://github.com/Prawinkumarjs/VSDSquadron-mini-internship/blob/main/Task%205/Gas%20Detection%20System%20Using%20VSDSquadron%20Mini%20RISC-V%20Development%20Board.png)



### Project Image:
![VSDSquadron-mini-internship](https://github.com/Prawinkumarjs/VSDSquadron-mini-internship/blob/main/Task%206/Front%20view(working).jpg)


### Project Video:

[Gas Detection System Using VSDSquadron Mini RISC-V Development Board Video](https://drive.google.com/file/d/1HNqd76ONLBzgRXruZAOvVshFZfznvdmb/view?usp=sharing)



</details>

-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
<details>

*<summary><h3>Acknowledgment</h3></summary>*

>
>I would like to express my special thanking to my mentor *Kunal Ghosh*, and sincere gratitude to *Vlsi System Design* for providing me with the opportunity to intern remotely with their team. This internship has been an invaluable experience, allowing me to delve deep into embedded systems, RISC-V architecture, and VLSI design under the guidance of dedicated mentors.
>
>I am thankful for the support and knowledge imparted to me during this journey. It has significantly enhanced my technical skills and prepared me for future challenges in the field of digital design. I look forward to applying the lessons learned here in my continued pursuit of excellence in engineering.
>
</details>
