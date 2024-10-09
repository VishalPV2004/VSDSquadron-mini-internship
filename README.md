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



### State Diagram:

![image](https://github.com/user-attachments/assets/da1366c4-ad3b-41ee-ab0c-876778b53e78)

### Project Diagram:


### State Table:
![image](https://github.com/user-attachments/assets/e759662f-50cb-438c-9df5-88cf32353c82)



### Pin Diagram for Sequence Detector FSM Using VSDSquadron Mini RISC-V Development Board:


![image](https://github.com/user-attachments/assets/65bcf7f5-149b-4fb6-9829-0886909a0b81)

   

### Program:

```cpp
// Pin definitions for the 7-segment display segments
const int segA = 0; // PC0 for segment A
const int segB = 1; // PC1 for segment B
const int segC = 2; // PC2 for segment C
const int segD = 3; // PC3 for segment D
const int segE = 4; // PC4 for segment E
const int segF = 5; // PC5 for segment F
const int segG = 6; // PC6 for segment G

// Button input pins
const int btnOne = 7;  // PC7 for logic 1 button
const int btnZero = 8; // PD1 for logic 0 button

// LED output pin
const int led = 3; // PD3 for the LED

// States for the FSM
enum States {START, S1, S10, S101, S1010};
States currentState = START; // Initialize the state machine at START

void setup() {
  // Set all 7-segment display pins as output
  pinMode(segA, OUTPUT);
  pinMode(segB, OUTPUT);
  pinMode(segC, OUTPUT);
  pinMode(segD, OUTPUT);
  pinMode(segE, OUTPUT);
  pinMode(segF, OUTPUT);
  pinMode(segG, OUTPUT);
  
  // Configure the buttons as input, with internal pull-ups activated
  pinMode(btnOne, INPUT_PULLUP); // Logic 1 button (PC7)
  pinMode(btnZero, INPUT_PULLUP); // Logic 0 button (PD1)
  
  // Set the LED pin as output
  pinMode(led, OUTPUT);
  
  // Turn off the LED initially
  digitalWrite(led, LOW);
}

// Function to display a number (0 or 1) on the 7-segment display
void displayDigit(int digit) {
  switch(digit) {
    case 0:
      // To display '0', we light up segments A, B, C, D, E, F
      digitalWrite(segA, HIGH);
      digitalWrite(segB, HIGH);
      digitalWrite(segC, HIGH);
      digitalWrite(segD, HIGH);
      digitalWrite(segE, HIGH);
      digitalWrite(segF, HIGH);
      digitalWrite(segG, LOW); // G remains off for '0'
      break;
    case 1:
      // To display '1', we only light up segments B and C
      digitalWrite(segA, LOW);
      digitalWrite(segB, HIGH);
      digitalWrite(segC, HIGH);
      digitalWrite(segD, LOW);
      digitalWrite(segE, LOW);
      digitalWrite(segF, LOW);
      digitalWrite(segG, LOW); // G remains off for '1'
      break;
  }
}

// Function to check button input and return 1 for logic 1 button, 0 for logic 0 button
int readInput() {
  if (digitalRead(btnOne) == LOW) { // Button for logic 1 pressed
    return 1;
  } else if (digitalRead(btnZero) == LOW) { // Button for logic 0 pressed
    return 0;
  }
  return -1; // No button pressed
}

void loop() {
  int input = readInput(); // Read the input from the buttons
  
  if (input != -1) { // If a valid input (0 or 1) is read
    displayDigit(input); // Display the input on the 7-segment display
    
    // FSM state transitions based on the input
    switch (currentState) {
      case START:
        if (input == 1) {
          currentState = S1; // Move to S1 if '1' is detected
        }
        break;
      case S1:
        if (input == 0) {
          currentState = S10; // Move to S10 if '0' follows '1'
        } else {
          currentState = S1; // Stay in S1 if another '1' is detected
        }
        break;
      case S10:
        if (input == 1) {
          currentState = S101; // Move to S101 if '1' follows '10'
        } else {
          currentState = S1; // Reset to S1 if the sequence is broken
        }
        break;
      case S101:
        if (input == 0) {
          currentState = S1010; // Move to S1010 if '0' follows '101'
        } else {
          currentState = S1; // Reset to S1 if the sequence is broken
        }
        break;
      case S1010:
        // Sequence "1010" detected, turn on the LED
        digitalWrite(led, HIGH);
        currentState = START; // Reset FSM for non-overlapping sequence detection
        break;
    }
  } else {
    // No valid input or sequence detected, turn off the LED
    digitalWrite(led, LOW);
  }
}

```
### Conclusion:
This project demonstrates the implementation of a 1010 sequence detector using an Arduino-based FSM to detect a specific sequence of binary inputs provided via push buttons. The sequence is displayed on a 7-segment LED display, and an LED indicator alerts the user upon successful detection. This setup showcases how embedded systems can be used to process real-time inputs and provide immediate feedback in practical applications.

 
 </details>

 
------------------------------------------------------------------------------------------------------------------------------------------------------------


<details>

 <summary><h2>Task 6 : </h2>
 <br>
  <h2>
   Demonstration of Project  
  </h2>
  </summary>

### 1010 Sequence Detector Using Arduino

## Project Overview:
This project implements a **1010 sequence detector** using an **Arduino-based FSM (Finite State Machine)**. The system takes binary inputs from two push buttons representing logic 0 and logic 1. These inputs are displayed on a **7-segment display**, and an **LED** is used as an indicator when the 1010 sequence is successfully detected. This project demonstrates how to process real-time binary inputs and control outputs using embedded systems.

### Hardware Connections:
- **7-Segment Display:**
   - **A** (segment a) to **PC0**
   - **B** (segment b) to **PC1**
   - **C** (segment c) to **PC2**
   - **D** (segment d) to **PC3**
   - **E** (segment e) to **PC4**
   - **F** (segment f) to **PC5**
   - **G** (segment g) to **PC6**

- **Push Buttons:**
   - **Logic 1 Button** to **PC7**
   - **Logic 0 Button** to **PD1**
        
- **LED:**
   - **Positive (Anode)** to **PD3**
   - **Negative (Cathode)** to **GND**



### Circuit Connections

#### 7-Segment Display to Arduino (PC Pins)
```
| 7-Segment Pin     | Arduino Pin                |
| ----------------- | -------------------------- |
| A (segment a)     | PC0                        |
| B (segment b)     | PC1                        |
| C (segment c)     | PC2                        |
| D (segment d)     | PC3                        |
| E (segment e)     | PC4                        |
| F (segment f)     | PC5                        |
| G (segment g)     | PC6                        |

#### Push Buttons for Logic Input
| Push Button Pin   | Arduino Pin                |
| ----------------- | -------------------------- |
| Logic 1 Button    | PC7                        |
| Logic 0 Button    | PD1                        |

#### LED Indicator
| LED Pin           | Arduino Pin                |
| ----------------- | -------------------------- |
| + (Anode)         | PD3 (GPIO Pin for alert)   |
| - (Cathode)       | GND                        |
```


### Pin Diagram for 1010 Sequence Detector Using Arduino:
![image](https://github.com/user-attachments/assets/65bcf7f5-149b-4fb6-9829-0886909a0b81)

### Project Image:
![1010 Sequence Detector](https://github.com/Prawinkumarjs/VSDSquadron-mini-internship/blob/main/Task%206/Front%20view(working).jpg)

### Project Video:

[1010 Sequence Detector Using Arduino Video](https://drive.google.com/file/d/1HNqd76ONLBzgRXruZAOvVshFZfznvdmb/view?usp=sharing)

</details>



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
