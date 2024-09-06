# 📊 Factorial Calculator in C
---
[In Python](https://github.com/mdriyadkhan585/Factorial-Calculator-in-Python)

[In PYTHON GUI](https://github.com/mdriyadkhan585/Factorial-Calculator-GUI)

![Logo](logo.svg)

---
Welcome to the **Factorial Calculator** project! This program helps you calculate the factorial of any non-negative integer using recursion. It’s a simple yet powerful program written in **C**. 

## ✨ Features
- Recursive implementation of factorial calculation.
- Clear and well-formatted output for better readability.
- Handles both valid and invalid inputs (like negative numbers).
  
## 🛠️ How It Works

### 💡 What is a Factorial?
The factorial of a non-negative integer `n` is the product of all positive integers less than or equal to `n`. It's denoted as `n!`. For example:
- `5! = 5 × 4 × 3 × 2 × 1 = 120`
- Special cases: `0! = 1` and `1! = 1`.

### 📋 Program Overview
The program asks the user to input a number. It then calculates and displays the factorial using a recursive function.

The **recursive function** works by multiplying the number `n` by the factorial of `n-1`, until it reaches the base case (`n = 1` or `n = 0`).

### 🔄 Flow of the Program
1. The program starts with a welcoming message.
2. It prompts the user to enter a number.
3. If the input is valid (i.e., non-negative), the program calculates the factorial and displays the result.
4. If the user inputs a negative number, the program displays an error message saying factorial of a negative number doesn't exist.

## 🚀 How to Run the Program

### 1. **Requirements**
- A C compiler (like `gcc`) installed on your system.

### 2. **Steps to Compile and Run**:
1. **Clone the repository or copy the code** into a file (e.g., `factorial_calculator.c`).
2. **Open the terminal/command prompt** and navigate to the folder where the file is saved.
3. **Compile the program** using the following command:
   ```bash
   git clone https://github.com/mdriyadkhan585/Factorial-Calculator-in-C.git
   cd Factorial-Calculator-in-C
   gcc factorial_calculator.c -o factorial_calculator
   ```
4. **Run the program** with:
   ```bash
   ./factorial_calculator
   ```

### 3. **Example Input and Output**:
#### Example 1: Valid Input
```
=======================================
         FACTORIAL CALCULATOR          
=======================================
Enter a number: 5

---------------------------------------
 Factorial of 5 is: 120
---------------------------------------
          Thank you for using          
     the Factorial Calculator!         
=======================================
```

#### Example 2: Invalid Input (Negative Number)
```
=======================================
         FACTORIAL CALCULATOR          
=======================================
Enter a number: -5

---------------------------------------
 Error: Factorial of a negative number doesn't exist.
---------------------------------------
          Thank you for using          
     the Factorial Calculator!         
=======================================
```

## 🧑‍💻 How to Use the Program
1. **Launch the program**: Follow the steps above to compile and run the program.
2. **Input your number**: When prompted, type the number whose factorial you want to calculate.
3. **View the result**: The program will display the factorial in a neatly formatted way.
4. **Handle negative input**: If you input a negative number, the program will let you know that the factorial for negative numbers doesn’t exist.

## 📂 File Structure
The program consists of a single C file:

- `factorial_calculator.c`: The main file that contains the source code.

## ⚙️ Function Breakdown
- **`long long factorial(int n)`**: A recursive function that computes the factorial of `n`. Returns `1` if `n` is `0` or `1`, otherwise returns `n * factorial(n - 1)`.
- **`main()`**: Handles user input, checks for negative numbers, and calls the `factorial` function to display the result.

## 🎉 Thank You for Using the Factorial Calculator!
Feel free to modify the program or improve it further. If you run into any issues, you can always refer to this guide. Happy coding! 😄

---
