# Traffic Light System (C)

This is a simple terminal-based program that simulates a traffic light system using C.  
It follows the sequence Red → Yellow → Green with a countdown timer for each signal.

The program also allows changing the timing of each light through a menu.

# How to Run

Compile the program:

```bash
gcc traffic.c -o traffic
```

Run the executable:

```bash
./traffic
```

# Sample Input and Output

```
--- TRAFFIC LIGHT SYSTEM ---
1. Start Traffic Light
2. Change Timings
3. Exit
Enter your choice: 2

Enter RED time: 4
Enter YELLOW time: 2
Enter GREEN time: 3

--- TRAFFIC LIGHT SYSTEM ---
1. Start Traffic Light
2. Change Timings
3. Exit
Enter your choice: 1

RED Light ON for 4 seconds
Time left: 4
Time left: 3
Time left: 2
Time left: 1

YELLOW Light ON for 2 seconds
Time left: 2
Time left: 1

GREEN Light ON for 3 seconds
Time left: 3
Time left: 2
Time left: 1
```

# Features

- Menu-driven program  
- Adjustable timing for each signal  
- Real-time countdown display  
- Works on Windows and Linux  

# Concepts Used

- Loops (`while`, `for`)  
- Conditional statements (`if-else`)  
- User input (`scanf`)  
- Delay functions (`sleep`, `Sleep`)  

# Author

Gokul Raj V
