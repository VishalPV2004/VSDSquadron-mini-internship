#  VSDSquadron Research Internship 2024

The program is based on the RISC-V architecture and uses open-source tools to teach people about VLSI chip design and RISC-V. The instructor for this internship is Kunal Ghosh Sir.

##  Basic Details

**Name:** VISHAL P V  
**College:** RMK ENGINEERING COLLEGE, Chennai

**Email ID:** vishal2020vvk@gmail.com  
**GitHub Profile:** [VISHAL P V](https://github.com/VishalPV2004)  
**LinkedIN Profile:** [VISHAL P V](https://www.linkedin.com/in/vishalpv2004/)

----------------------------------------------------------------------------------------------------------------

<details>

<summary><h3>Task 1: </h3> 
<h2>Installation of RISC-V toolchain using VDI. Uploading the snapshot of compiled C code and RISC-V Objdmp on the GitHub repo</h2>
</summary>

The task 1 of the internship includes the following
- Installation of RISC-V toolchain using VDI.
- C Program for sum from one to n.
- Checking the result of C code
- RISC-V Simulator for compiling and running the code
- Assembly language

Overall, it is about writing the C code for sum from one to n followed by compiling and running by RISC-V Simulator.

 The steps to be followed are:
 
#### Step 1: Installation of Oracle VirtualBox.

The VirtualBox is an open source software and an operating system which runs as a physical computer inside the pc/laptop. 

![Screenshot (567)](https://github.com/EkthaReddy/vsdsquadron-mini-internship/assets/152515939/48ae5d97-0ce1-40bd-9403-e60d255d4758)

#### Step 2: Open the terminal inside the VirtualBox

![Terminal inside the VM](https://github.com/EkthaReddy/vsdsquadron-mini-internship/assets/152515939/5e831292-ae27-4409-b6d4-dc98b50fb88a)

#### Step 3: To open the editor named leafpad for writing C code.

![Screenshot (568)](https://github.com/EkthaReddy/vsdsquadron-mini-internship/assets/152515939/baf5e27b-ee8b-42a9-b2c7-e40bb88c33d8)
 Note for the above command explanation:
 - command line cd is to check for home directory.
 - leafpad to open editor.
 - sum_one_to_one is the file name for C code to be written in editor.


#### Step 4: Write the C program for sum of one to n in the terminal 

The leafpad editor opened, write the simple c code for sum of 1 to n,

![Screenshot (570)](https://github.com/EkthaReddy/vsdsquadron-mini-internship/assets/152515939/6e565127-674e-47c4-8c48-f142e319ebce)

Save the file in the editor


![C Code for sum from one to n](https://github.com/EkthaReddy/vsdsquadron-mini-internship/assets/152515939/37e5d37e-7b55-49ce-8aef-70d3d9f57d0e)


#### Step 5: To check the result of C code

- Type the below command line to ensure the file is saved.
  
![WhatsApp Image 2024-06-23 at 11 39 36 PM](https://github.com/EkthaReddy/vsdsquadron-mini-internship/assets/152515939/c70488ff-78d7-4c14-910c-28feea698aca)

- This ./a.out command will generate the output 

![WhatsApp Image 2024-06-23 at 11 39 36 PM (1)](https://github.com/EkthaReddy/vsdsquadron-mini-internship/assets/152515939/093bd684-20dc-4a5d-bdbf-57e5aa9de063)



- The sum for 1 to 5 is 15 which is also verified using calculator


![with cc](https://github.com/EkthaReddy/vsdsquadron-mini-internship/assets/152515939/42492408-96b8-4275-95ae-c7966b65854a)

#### Step 6: Compile and run the C code using RISC-V Simulator 

- Compile the code with RISC-V compiler by using the command line
  
![Screenshot (572)](https://github.com/EkthaReddy/vsdsquadron-mini-internship/assets/152515939/db9d65fc-a0bd-4104-9d12-d77d19614d07)

- Run the C code by RISC-V Simulator using below

![Screenshot (573)](https://github.com/EkthaReddy/vsdsquadron-mini-internship/assets/152515939/cd4c2428-a270-4d1e-a75c-0b09c212ecd2)



![compile riscv with gcc![Uploading Screenshot (572).png…]()
 ](https://github.com/EkthaReddy/vsdsquadron-mini-internship/assets/152515939/dbf0af7d-fe05-4547-a280-7b710e39f924)


#### Step 7: Assembly code 
- Command line for generating the assembly code is:

![WhatsApp Image 2024-06-24 at 12 08 16 AM](https://github.com/EkthaReddy/vsdsquadron-mini-internship/assets/152515939/0850193a-d680-4772-a4b8-52e08c05c943)

- The Assembly codes:

![assembly code of C code](https://github.com/EkthaReddy/vsdsquadron-mini-internship/assets/152515939/0ce26ef8-3b1e-41dd-8830-217cddd2d7fc)


- After that type out this line;

![WhatsApp Image 2024-06-24 at 12 08 16 AM (1)](https://github.com/EkthaReddy/vsdsquadron-mini-internship/assets/152515939/2cc69a0e-c167-4320-bf89-a7910f76ac37)

#### Step 8: Search the main() 

![main section of assembly code](https://github.com/EkthaReddy/vsdsquadron-mini-internship/assets/152515939/053a0a17-79c8-48af-8227-f59f7dd6786e)

</details>

--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

<details>
<summary>
 <h3>Task2:</h3>
</b> <h2>Performing SPIKE Simulation and Debugging a simple C code with Interactive Debugging Mode using Spike</h2></summary> 
  
### What is SPIKE in RISCV?
> * A RISC-V ISA is a simulator, enabling the testing and analysis of RISC-V programs without the need for actual hardware.  
> * Spike is a free, open-source C++ simulator for the RISC-V ISA that models a RISC-V core and cache system. It can be used to run programs and a Linux kernel, and can be a starting point for running software on a RISC-V target.  
  
### What is pk (Proxy Kernel)?  
> * The RISC-V Proxy Kernel, pk , is a lightweight application execution environment that can host statically-linked RISC-V ELF binaries.  
> * A Proxy Kernel in the RISC-V ecosystem simplifies the interaction between complex hardware and the software running on it, making it easier to manage, test, and develop software and hardware projects.  
 

### Testing the SPIKE Simulator  
The target is to run the ```sum1ton.c``` code using both ```gcc compiler``` and ```riscv compiler```, and both of the compiler must display the same output on the terminal. So to compile the code using **gcc compiler**, use the following command:  
```
gcc sum1ton.c  
./a.out
```
And to compile the code using **riscv compiler**, use the following command:  
```
spike pk sum1ton.o
```  
![Spike Simulation](https://github.com/Prawinkumarjs/VSDSquadron-mini-internship/blob/main/Task%202/1.png)

#### Following are the snapshots of RISCV Objdump with **-O1** and **-Ofast** options  
RISCV Objdump with -O1 option  

![Objdump in -O1](https://github.com/chanduputta/vsdsquadronmini-Research-internship/blob/main/Task2/Objdump%20in%20-O1.png)

RISCV Objdump with -Ofast option  

![Objdump in -Ofast](https://github.com/Prawinkumarjs/VSDSquadron-mini-internship/blob/main/Task%202/3.png)

### Debugging the Assembly Language Program of  ```sum1ton.c```  
* Open the **Objdump** of code by using the following command  
```
$ riscv64-unknown-elf-objdump -d sum1ton.o | less  
```
* Open the debugger in another terminal by using the following command  
```
$ spike -d pk sum1ton.o
```
* The debugger will be opened in the terminal. Now, debugging operations can be performed as shown in the following snapshot.

![Debugging](https://github.com/Prawinkumarjs/VSDSquadron-mini-internship/blob/main/Task%202/2.png) 


================================================================================================================


<details>
 <summary> 
  <h2>
   Digital Design Application - RISC-V Simple Counter Program
 </h2> 
 </summary>

This repository contains a simple RISC-V counter program written in C. Follow the instructions below to set up, build, and run the program using the RISC-V toolchain, Spike simulator, and proxy kernel (pk).

## Prerequisites

- **RISC-V Toolchain**: For compiling RISC-V code.
- **Spike Simulator**: To run RISC-V binaries.
- **Proxy Kernel (pk)**: Provides a runtime environment for running RISC-V binaries.

## Step-by-Step Instructions

### 1. Clone the Repository

Clone this repository to your local machine:

```sh
git clone https://github.com/Prawinkumarjs/VSDSquadron-mini-internship.git
cd VSDSquadron-mini-internship
```

### 2. Install the RISC-V Toolchain

Follow the [installation instructions](https://github.com/riscv/riscv-gnu-toolchain) for your platform. For example, on Ubuntu:

```sh
sudo apt-get update
sudo apt-get install gcc-riscv64-linux-gnu
```

### 3. Install Spike and pk

Follow the installation instructions for Spike and pk. Example installation for Spike:

```sh
# Clone Spike repository
git clone https://github.com/riscv/riscv-isa-sim.git
cd riscv-isa-sim
mkdir build
cd build
../configure --prefix=/opt/riscv
make
make install
```

For pk:

```sh
# Clone pk repository
git clone https://github.com/riscv/riscv-pk.git
cd riscv-pk
mkdir build
cd build
../configure --prefix=/opt/riscv
make
make install
```

Ensure `/opt/riscv/bin` is in your `PATH`.

### 4. Create the Source File

Create the `simplecounter.c` source file using Leafpad:

```sh
leafpad simplecounter.c
```

In Leafpad, enter the following code:

```c
#include <stdio.h>
#include <unistd.h>  // For usleep() in POSIX systems

int main() {
    int counter = 0;
    int end_value = 10;  // Set the end value

    printf("Simple Digital Counter\n");

    while (counter <= end_value) {  // Loop until counter reaches end value
        printf("Counter: %d\n", counter);
        counter++;  // Increment the counter
        usleep(1000000);  // Wait for 1 second (1,000,000 microseconds)
    }

    printf("Counter reached the end value of %d. Stopping.\n", end_value);

    return 0;
}
```
![1](https://github.com/Prawinkumarjs/VSDSquadron-mini-internship/blob/main/Task%202/Digital%20Design%20Application%20-%20Simple%20Counter%20using%20C%20programming/1.png)

Save and close Leafpad.

### 5. Compile the Program

Compile and link the source code into an executable:

```sh
    riscv64-unknown-elf-gcc -O1 -mabi=lp64 -march=rv64i -o simplecounter simplecounter.c
```
![3](https://github.com/Prawinkumarjs/VSDSquadron-mini-internship/blob/main/Task%202/Digital%20Design%20Application%20-%20Simple%20Counter%20using%20C%20programming/3.png)

### 6. View the Object File (Optional)

If you need to view the object file, first compile to object file:

```sh
    riscv64-unknown-elf-gcc -O1 -mabi=lp64 -march=rv64i -c simplecounter.c -o simplecounter.o
```
![3](https://github.com/Prawinkumarjs/VSDSquadron-mini-internship/blob/main/Task%202/Digital%20Design%20Application%20-%20Simple%20Counter%20using%20C%20programming/3.png)
To view the object file, use:

 ```sh
    riscv64-unknown-elf-objdump -d simplecounter.o
```
![4](https://github.com/Prawinkumarjs/VSDSquadron-mini-internship/blob/main/Task%202/Digital%20Design%20Application%20-%20Simple%20Counter%20using%20C%20programming/4.png)
### 7. Run the Program

To execute the compiled program with Spike and pk, use:

 ```sh
    spike pk simplecounter
```
![5](https://github.com/Prawinkumarjs/VSDSquadron-mini-internship/blob/main/Task%202/Digital%20Design%20Application%20-%20Simple%20Counter%20using%20C%20programming/5.png)

### 8. Debug the Program (Optional)

For detailed debugging output, run:

```sh
    spike -d pk simplecounter
```
![6](https://github.com/Prawinkumarjs/VSDSquadron-mini-internship/blob/main/Task%202/Digital%20Design%20Application%20-%20Simple%20Counter%20using%20C%20programming/6.png)

### 9. View the File Content (Optional)

To view the content of the source file or object file, use `cat`:

 ```sh
    cat simplecounter.c
 ```

```sh
    cat simplecounter.o
```
![2](https://github.com/Prawinkumarjs/VSDSquadron-mini-internship/blob/main/Task%202/Digital%20Design%20Application%20-%20Simple%20Counter%20using%20C%20programming/2.png)

### Example Output
When running the program, you should see:

```
Simple Digital Counter
Counter: 0
Counter: 1
Counter: 2
Counter: 3
Counter: 4
Counter: 5
Counter: 6
Counter: 7
Counter: 8
Counter: 9
Counter: 10
Counter reached the end value of 10. Stopping.
```
![Example](https://github.com/Prawinkumarjs/VSDSquadron-mini-internship/blob/main/Task%202/Digital%20Design%20Application%20-%20Simple%20Counter%20using%20C%20programming/1.png)

 ### Troubleshooting

- **Compilation Issues**: Ensure the RISC-V toolchain is properly installed and configured.
- **Execution Issues**: Verify that `spike` and `pk` are correctly                                                    installed and accessible in your `PATH`.                                                
- **Path Problems**: Ensure that all necessary binaries (e.g., `spike`, `pk`) are in your system’s `PATH`, or provide full paths to these executables.
</details>

</details>

----------------------------------------

<details><summary>
 <h2>
  Task 3: 
 </h2><br>
 
<h2> RISC-V Instruction Types & 32-Bit Instruction Code </h2>
</summary>

The RISC-V instruction set architecture (ISA) defines several types of instructions, each with a specific format. Below is a summary of the main instruction types:


![RISC-V](https://github.com/Prawinkumarjs/VSDSquadron-mini-internship/blob/main/Task%203/RISC-V%20Instruction.png)

## R-Type (Register-Register)

- **Purpose**: Used for operations that involve two source registers and one destination register.
- **Fields**:
  - `opcode`: Operation code
  - `rd`: Destination register
  - `func3`: Function modifier
  - `rs1`: Source register 1
  - `rs2`: Source register 2
  - `func7`: Function modifier (additional)

- **Example**: `add x1, x2, x3`

## I-Type (Immediate)

- **Purpose**: Used for operations with one source register and an immediate value, including loads.
- **Fields**:
  - `opcode`: Operation code
  - `rd`: Destination register
  - `func3`: Function modifier
  - `rs1`: Source register
  - `imm[11:0]`: Immediate value

- **Example**: `addi x1, x2, 10`

## S-Type (Store)

- **Purpose**: Used for store instructions, which write a register's value to memory.
- **Fields**:
  - `opcode`: Operation code
  - `imm[11:5]`: Immediate value (upper 7 bits)
  - `func3`: Function modifier
  - `rs1`: Source register (base address)
  - `rs2`: Source register (data to store)
  - `imm[4:0]`: Immediate value (lower 5 bits)

- **Example**: `sw x2, 0(x1)`

## B-Type (Branch)

- **Purpose**: Used for conditional branch instructions.
- **Fields**:
  - `opcode`: Operation code
  - `imm[12]`: Immediate value (bit 12)
  - `imm[10:5]`: Immediate value (bits 10 to 5)
  - `func3`: Function modifier
  - `rs1`: Source register 1
  - `rs2`: Source register 2
  - `imm[4:1]`: Immediate value (bits 4 to 1)
  - `imm[11]`: Immediate value (bit 11)

- **Example**: `beq x1, x2, label`

## U-Type (Upper Immediate)

- **Purpose**: Used for instructions that operate with a large immediate value.
- **Fields**:
  - `opcode`: Operation code
  - `rd`: Destination register
  - `imm[31:12]`: Immediate value

- **Example**: `lui x1, 0x10000`

## J-Type (Jump)

- **Purpose**: Used for jump instructions with a large immediate value.
- **Fields**:
  - `opcode`: Operation code
  - `rd`: Destination register
  - `imm[20]`: Immediate value (bit 20)
  - `imm[10:1]`: Immediate value (bits 10 to 1)
  - `imm[11]`: Immediate value (bit 11)
  - `imm[19:12]`: Immediate value (bits 19 to 12)

- **Example**: `jal x1, label`

# 32-bit Instruction Codes in RISC-V Instruction Type Format

1. **`addi x1, x2, 10`**  
   - **Instruction Format**: I-type  
   - **Binary Encoding**: `000000000010 00010 000 00001 0010011`  
   - **32-bit Instruction Code**: `0x00210093`

2. **`li x5, 0x0`**  
   - **Instruction Format**: I-type (using `addi x5, x0, 0x0`)  
   - **Binary Encoding**: `000000000000 00000 000 00101 0010011`  
   - **32-bit Instruction Code**: `0x00000293`

3. **`lui x10, 0x20000`**  
   - **Instruction Format**: U-type  
   - **Binary Encoding**: `00100000000000000000 01010 0110111`  
   - **32-bit Instruction Code**: `0x20000537`

4. **`mv x1, x2`**  
   - **Instruction Format**: I-type (using `addi x1, x2, 0`)  
   - **Binary Encoding**: `000000000000 00010 000 00001 0010011`  
   - **32-bit Instruction Code**: `0x00010093`

5. **`sw x5, 0(x10)`**  
   - **Instruction Format**: S-type  
   - **Binary Encoding**: `0000000 00101 01010 010 00000 0100011`  
   - **32-bit Instruction Code**: `0x0050a023`

6. **`lw x5, 0(x10)`**  
   - **Instruction Format**: I-type  
   - **Binary Encoding**: `000000000000 01010 010 00101 0000011`  
   - **32-bit Instruction Code**: `0x0000a283`

7. **`jal x0, 0x100`**  
   - **Instruction Format**: J-type  
   - **Binary Encoding**: `00000000000100000000 00000 1101111`  
   - **32-bit Instruction Code**: `0x0000086f`

8. **`beq x1, x2, label`**  
   - **Instruction Format**: B-type (assuming offset is `0x4`)  
   - **Binary Encoding**: `000000 00010 00001 000 00010 1100011`  
   - **32-bit Instruction Code**: `0x00210063`

9. **`bne x1, x3, label`**  
   - **Instruction Format**: B-type (assuming offset is `0x4`)  
   - **Binary Encoding**: `000000 00011 00001 001 00010 1100011`  
   - **32-bit Instruction Code**: `0x00310063`

10. **`slli x5, x1, 1`**  
    - **Instruction Format**: I-type  
    - **Binary Encoding**: `0000000 00001 00101 001 00001 0010011`  
    - **32-bit Instruction Code**: `0x00109093`

11. **`srli x6, x2, 2`**  
    - **Instruction Format**: I-type  
    - **Binary Encoding**: `0000000 00010 00110 101 00010 0010011`  
    - **32-bit Instruction Code**: `0x0022b093`

12. **`and x3, x4, x5`**  
    - **Instruction Format**: R-type  
    - **Binary Encoding**: `0000000 00101 00100 111 00011 0110011`  
    - **32-bit Instruction Code**: `0x005201b3`

13. **`or x2, x3, x4`**  
    - **Instruction Format**: R-type  
    - **Binary Encoding**: `0000000 00100 00011 110 00010 0110011`  
    - **32-bit Instruction Code**: `0x004181b3`

14. **`sub x3, x5, x2`**  
    - **Instruction Format**: R-type  
    - **Binary Encoding**: `0100000 00010 00101 000 00011 0110011`  
    - **32-bit Instruction Code**: `0x402282b3`

15. **`xor x1, x2, x3`**  
    - **Instruction Format**: R-type  
    - **Binary Encoding**: `0000000 00011 00010 100 00001 0110011`  
    - **32-bit Instruction Code**: `0x003100b3`



</details>

-------------------------------------------------------------------------


<details>
<summary><h2>Task 4:</h2> 
 <br>
 <h2>
 By making use of RISC-V Core: Verilog Netlist and Testbench, perform an experiment of Functional Simulation and observe the waveforms  
 </h2>
  <br>
  </summary>

>***NOTE:** Since the designing of RISCV Architecture and writing it's testbench is not the part of this Research Internship, so we will use the Verilog Code and Testbench of RISCV that has already been designed. The reference GitHub repository is : [iiitb_rv32i](https://github.com/vinayrayapati/rv32i/)*    
  
### Steps to perform functional simulation of RISCV  

## GTKWAVE Generation Process

Follow the steps below to generate the waveform using Verilog code and GTKWAVE.

### Step 1: Clone the Repository

Clone the RISC-V Verilog repository using the `git clone` command.

```bash
git clone https://github.com/vinayrayapati/rv321
```

### Step 2: Navigate to the Cloned Directory
Change the directory to the cloned repository.

```bash
cd rv321
```

### Step 3: Compile the Verilog Code and Testbench
Run the following `iverilog` command to compile the Verilog code and testbench.

```bash
iverilog -o iiitb_rv32i iiitb_rv32i.v iiitb_rv32i_tb.v
```
### Step 4: Simulate the Verilog Code
After compiling, simulate the Verilog code by running the compiled file:
```bash
./iiitb_rv321
```

![Main](https://github.com/Prawinkumarjs/VSDSquadron-mini-internship/blob/main/Task%204/Main.png)

### Step 5: Open the Waveform in GTKWAVE
Once the simulation generates the .vcd (Value Change Dump) file, you can visualize the waveform in GTKWAVE.
```bash
gtkwave iiitb_rv321.vcd
```

It will open the new window of GTKWAVE 

![1](https://github.com/Prawinkumarjs/VSDSquadron-mini-internship/blob/main/Task%204/gtkwave%201.png)

Tap the `iiitb_rv32i_tb` in the `SST` section

![2](https://github.com/Prawinkumarjs/VSDSquadron-mini-internship/blob/main/Task%204/gtkwave%202.png)

Now, drag the command in the same way presented under `time` section.

![4](https://github.com/Prawinkumarjs/VSDSquadron-mini-internship/blob/main/Task%204/gtkwave%204.png)

Select the instructions from EX_MEM_IR[31:0] to present the instructions used in Task 3 and Analysing the Output Waveform of various instructions that we have covered in TASK-3.

 ***Instruction ADD r1, r2, r3 :***
 
![Instruction ADD r1, r2, r3 :](https://github.com/Prawinkumarjs/VSDSquadron-mini-internship/blob/main/Task%204/ADD%20r1%2Cr2%2Cr3.png)

**Instruction SUB r3, r1, r2 :**

![Instruction SUB r3, r1, r2 :](https://github.com/Prawinkumarjs/VSDSquadron-mini-internship/blob/main/Task%204/SUB%20r3%2C%20r1%2C%20r2.png)

**Instruction AND r2, r1, r3 :**

![Instruction AND r2, r1, r3 :](https://github.com/Prawinkumarjs/VSDSquadron-mini-internship/blob/main/Task%204/AND%20r2%2C%20r1%2C%20r3.png)

**Instruction OR r8, r2, r5 :**

![Instruction OR r8, r2, r5 :](https://github.com/Prawinkumarjs/VSDSquadron-mini-internship/blob/main/Task%204/OR%20r8%2C%20r2%2C%20r5.png)

**Instruction XOR r8, r1, r4 :**

![Instruction XOR r8, r1, r4 :](https://github.com/Prawinkumarjs/VSDSquadron-mini-internship/blob/main/Task%204/XOR%20r8%2C%20r1%2C%20r4.png)

**Instruction SLL r15, r11, r2 :**

![Instruction SLL r15, r11, r2 :](https://github.com/Prawinkumarjs/VSDSquadron-mini-internship/blob/main/Task%204/SLL%20r15%2C%20r11%2C%20r2.png)

**Instruction SLT r10, r2, r4 :**
![Instruction SLT r10, r2, r4 :](https://github.com/Prawinkumarjs/VSDSquadron-mini-internship/blob/main/Task%204/SLT%20r10%2C%20r2%2C%20r4.png)


To conclude : The output waveform for the list of instructions are obtained in GTKWAVE.

</details>


-----------------------------------------------------------------------------------------------------

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
![1010 Sequence Detector](https://github.com/user-attachments/assets/aa0b57c2-caa5-4713-96f1-46e712e53a12)

### Project Video:

[1010 Sequence Detector](https://drive.google.com/file/d/1nImKBqoWEgGRDYQV5DstElSmUVdOE7vy/view?usp=drive_link)

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
