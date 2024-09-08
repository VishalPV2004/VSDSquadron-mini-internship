# Task - 3

## RISC-V Instruction Formats and Examples

## Base Instruction Formats
In RISC-V, instructions are grouped into various types based on their encoding and use case. The five primary instruction types are:
- **R-Type (Register)**
- **I-Type (Immediate)**
- **S-Type (Store)**
- **B-Type (Branch)**
- **U-Type (Upper Immediate)**
- **J-Type (Jump)**

The general structure of each instruction type and its bit field allocation is shown below:

![Screenshot (515)](https://github.com/user-attachments/assets/335e110f-2033-4ba3-8a87-b59fb32d3014)

## Immediate Encoding Variants
RISC-V utilizes various encoding schemes for immediate values, with each instruction type handling immediates differently depending on the operation.

![Screenshot (517)](https://github.com/user-attachments/assets/a5300d42-19ac-4318-8c49-9418ed9853ce)

## Instruction Types Overview

### 1. I-Type (Immediate Instructions)
I-Type instructions operate on an immediate value and a register. These instructions are used for arithmetic operations, logical operations, and loads.

![Screenshot (526)](https://github.com/user-attachments/assets/76929f2a-0091-417d-afa8-a4cc7ff95fc8)


### Examples of I-Type Instructions:

### i. ADDI (Add Immediate)
- **Operation**: rd = rs1 + immediate
- **funct3**: 000
- **opcode**: 0010011

**Encoding Example:**


**Operation:** rd = rs1 + immediate

**Encoding:**

- **Immediate:** 000000000010
- **rs1:** 00001
- **funct3:** 000
- **rd:** 00101
- **opcode:** 0010011

**32-bit Encoding:** 000000000010 00001 000 00101 0010011

### ii. SLTI (Set Less than Immediate)

- **Operation**: rd = (rs1 < immediate) ? 1 : 0
- **funct3**: 010
- **opcode**: 0010011

**Encoding Example:**

**Operation:** rd = (rs1 < immediate) ? 1 : 0

**Encoding:**

- **Immediate:** 000000000010
- **rs1:** 00001
- **funct3:** 010
- **rd:** 00101
- **opcode:** 0010011

**32-bit Encoding:** 000000000010 00001 010 00101 0010011


### iii. ANDI (AND Immediate)
- **Operation**: rd = rs1 & immediate
- **funct3**: 111
- **opcode**: 0010011

**Encoding Example:**

**Operation:** rd = rs1 & immediate

**Encoding:**

- **Immediate:** 0000000001111
- **rs1:** 00001
- **funct3:** 111
- **rd:** 00101
- **opcode:** 0010011

**32-bit Encoding:** 0000000001111 00001 111 00101 0010011



### iv. ORI (OR Immediate)
- **Operation**: rd = rs1 | immediate
- **funct3**: 110
- **opcode**: 0010011

**Encoding Example:**
**Operation:** rd = rs1 | immediate

**Encoding:**

- **Immediate:** 0000000001111
- **rs1:** 00001
- **funct3:** 110
- **rd:** 00101
- **opcode:** 0010011

**32-bit Encoding:** 0000000001111 00001 110 00101 0010011


### v. XORI (XOR Immediate)
- **Operation**: rd = rs1 ^ immediate
- **funct3**: 100
- **opcode**: 0010011

**Encoding Example:**

**Operation:** rd = rs1 ^ immediate

**Encoding:**

- **Immediate:** 0000000001111
- **rs1:** 00001
- **funct3:** 100
- **rd:** 00101
- **opcode:** 0010011

**32-bit Encoding:** 0000000001111 00001 100 00101 0010011


### 2. R-Type (Register Instructions)
R-Type instructions operate on two registers and store the result in a destination register. These instructions are used for arithmetic and logical operations.

![Screenshot (525)](https://github.com/user-attachments/assets/85622523-42ea-4555-b426-493ec008ddcf)

### Examples of R-Type Instructions:

#### **ADD** (Add)
- **Operation**: rd = rs1 + rs2
- **funct3**: 000
- **funct7**: 0000000
- **opcode**: 0110011

**Encoding Example:**

**Operation:** rd = rs1 + rs2

**Encoding:**

- **funct7:** 0000000
- **rs2:** 00010
- **rs1:** 00001
- **funct3:** 000
- **rd:** 00101
- **opcode:** 0110011

**32-bit Encoding:** 0000000 00010 00001 000 00101 0110011


#### **SUB** (Subtract)
- **Operation**: rd = rs1 - rs2
- **funct3**: 000
- **funct7**: 0100000
- **opcode**: 0110011

**Encoding Example:**

**Operation:** rd = rs1 - rs2

**Encoding:**

- **funct7:** 0100000
- **rs2:** 00010
- **rs1:** 00001
- **funct3:** 000
- **rd:** 00101
- **opcode:** 0110011

**32-bit Encoding:** 0100000 00010 00001 000 00101 0110011


#### **AND** (Logical AND)
- **Operation**: rd = rs1 & rs2
- **funct3**: 111
- **funct7**: 0000000
- **opcode**: 0110011

**Encoding Example:**

**Operation:** rd = rs1 & rs2

**Encoding:**

- **funct7:** 0000000
- **rs2:** 00010
- **rs1:** 00001
- **funct3:** 111
- **rd:** 00101
- **opcode:** 0110011

**32-bit Encoding:** 0000000 00010 00001 111 00101 0110011

### 3. S-Type (Store Instructions)
S-Type instructions store data from a register into memory at an address computed from a base register and an immediate.

![Screenshot (527)](https://github.com/user-attachments/assets/38bfe64a-23cd-470c-83c4-cf07543ecf47)

### Examples of S-Type Instructions:

#### **SW** (Store Word)
- **Operation**: mem[rs1 + immediate] = rs2
- **funct3**: 010
- **opcode**: 0100011

**Encoding Example:**

**Operation:** mem[rs1 + immediate] = rs2

**Encoding:**

- **Immediate:** 0000000 00010
- **rs2:** 00101
- **rs1:** 00001
- **funct3:** 010
- **opcode:** 0100011

**32-bit Encoding:** 0000000 00101 00001 010 00100 0100011


#### **SB** (Store Byte)
- **Operation**: mem[rs1 + immediate] = rs2
- **funct3**: 000
- **opcode**: 0100011

**Encoding Example:**

**Operation:** mem[rs1 + immediate] = rs2

**Encoding:**

- **Immediate:** 0000000 00010
- **rs2:** 00101
- **rs1:** 00001
- **funct3:** 000
- **opcode:** 0100011

**32-bit Encoding:** 0000000 00101 00001 000 00100 0100011


#### **SH** (Store Halfword)
- **Operation**: mem[rs1 + immediate] = rs2
- **funct3**: 001
- **opcode**: 0100011

**Encoding Example:**
**Operation:** mem[rs1 + immediate] = rs2

**Encoding:**

- **Immediate:** 0000000 00010
- **rs2:** 00101
- **rs1:** 00001
- **funct3:** 001
- **opcode:** 0100011

**32-bit Encoding:** 0000000 00101 00001 001 00100 0100011

### 4. **B-Type (Branch Instructions)**
B-Type instructions are used for conditional branching. They compare two registers and, based on the result, either take a branch to a new instruction or continue execution.

![Screenshot (528)](https://github.com/user-attachments/assets/42a88bda-ff17-4d2d-8f5a-dfccf3be3a65)

#### Examples of B-Type Instructions:

#### **BEQ** (Branch if Equal)
- **Operation**: if (rs1 == rs2) pc = pc + immediate
- **funct3**: 000
- **opcode**: 1100011

**Encoding Example:**

**Operation:** if (rs1 == rs2) pc = pc + immediate

**Encoding:**

- **Immediate:** 0000000
- **rs2:** 00010
- **rs1:** 00001
- **funct3:** 000
- **opcode:** 1100011

**32-bit Encoding:** 0000000 00010 00001 000 offset 1100011


#### **BNE** (Branch if Not Equal)
- **Operation**: if (rs1 != rs2) pc = pc + immediate
- **funct3**: 001
- **opcode**: 1100011

**Encoding Example:**

**Operation:** if (rs1 != rs2) pc = pc + immediate

**Encoding:**

- **Immediate:** 0000000
- **rs2:** 00010
- **rs1:** 00001
- **funct3:** 001
- **opcode:** 1100011

**32-bit Encoding:** 0000000 00010 00001 001 offset 1100011


### 5. **U-Type (Upper Immediate Instructions)**
U-Type instructions embed a 20-bit immediate into the upper bits of the instruction and are used for operations like loading upper immediates.

![Screenshot (530)](https://github.com/user-attachments/assets/8820265a-bf48-4dbe-9fa8-fb5bf12ee235)


#### Examples of U-Type Instructions:

#### **LUI** (Load Upper Immediate)
- **Operation**: rd = immediate << 12
- **opcode**: 0110111

**Encoding Example:**


**Operation:** rd = immediate << 12

**Encoding:**

- **Immediate:** 00010010001101000101
- **rd:** 00101
- **opcode:** 0110111

**32-bit Encoding:** 00010010001101000101 00101 0110111


#### **AUIPC (Add Upper Immediate to PC)**
- **Operation**: rd = pc + (immediate << 12)
- **opcode**: 0010111

**Encoding Example:**


**Operation:** rd = pc + (immediate << 12)

**Encoding:**

- **Immediate:** 00010010001101000101
- **rd:** 00101
- **opcode:** 0010111

**32-bit Encoding:** 00010010001101000101 00101 0010111


### 6. **J-Type (Jump Instructions)**
J-Type instructions are used for jumps to an immediate address relative to the current program counter (PC).

![Screenshot (529)](https://github.com/user-attachments/assets/1285ab5f-7755-4319-a98b-d24109b21ea6)


#### Examples of J-Type Instructions:

#### **JAL** (Jump and Link)
- **Operation**: rd = pc + 4; pc = pc + immediate
- **opcode**: 1101111

**Encoding Example:**

**Operation:** rd = pc + 4; pc = pc + immediate

**Encoding:**

- **Immediate:** 00000000000000000000
- **rd:** 00101
- **opcode:** 1101111

**32-bit Encoding:** 00000000000000000000 00101 1101111
