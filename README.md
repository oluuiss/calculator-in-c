# Summary
1. [Project Explanation](#project-explanation)
2. [Detailed Explanation of Functions](#detailed-explanation-of-functions)
   1. [Factorial Function (`n!`)](#1-factorial-function-n)
   2. [Binomial Coefficient Function](#2-binomial-coefficient-function)
   3. [Permutation Function](#3-permutation-function)
   4. [Arrangement Function](#4-arrangement-function)
3. [Code Explanation](#code-explanation)
   1. [Main Loop with `while`](#main-loop-with-while)
   2. [Menu Function and Input Handling](#menu-function-and-input-handling)
   3. [`switch-case` for Menu Options](#switch-case-for-menu-options)
   4. [Matrix Operations](#matrix-operations)
      1. [Addition and Subtraction](#addition-and-subtraction)
      2. [Multiplication](#multiplication)
   5. [Exit Condition](#exit-condition)
4. [Conclusion](#conclusion)

# Project Explanation
<div align="justify">
Initially, I started the project by importing essential libraries required for the functionality of the code and defining the dimensions of a matrix as 2x2, consisting of two rows and two columns. This choice was made to meet the specific needs of the project, simplifying the handling and manipulation of data.  

Subsequently, to ensure the code remained organized and avoid unnecessary complexity, I structured the program using functions. Although, ideally, functions can be separated into different files for greater modularity, in this specific project, I decided to implement all functions within the same file. This approach was chosen because it seemed more practical and efficient for the current scope of the project.  

In total, five main functions were implemented, each with a specific purpose. The first is a `void` function responsible for displaying a menu to the user, facilitating interaction with the program. Following this, I developed functions for calculating factorials, binomial coefficients, permutations, and arrangements. These functions perform fundamental mathematical operations, allowing the user to execute combinatorial calculations with ease and precision.  

To ensure the code could handle larger numbers effectively, I used the `long long` data type for certain variables and calculations. This decision was crucial as it allows for storing numbers with greater range, reducing the likelihood of errors such as memory overflows when working with extensive values.  

These choices reflect the effort to create an efficient, organized, and purpose-driven code. Although I adopted practical and specific solutions for this implementation, the code structure retains the potential for future improvements and adaptations, should there be a need to expand or enhance its functionalities.  

</div>

# Detailed Explanation of Functions

This section provides a formal explanation of the functions implemented in the project, which are based on factorial and combinatorial calculations.

---

## **1. Factorial Function (`n!`)**
The factorial of a number (`n!`) is defined as the product of all positive integers from the number `n` down to 1. Mathematically, it is represented as:  
> [ n! = n(n-1) * n(n-2) * n(n-3)...]  

### **Example**  
For `n = 5`:  
[ 5! = 5 * 4 * 3 * 2 * 1 = 120 ]  

This function forms the foundation for the other combinatorial functions implemented in the project.

---

## **2. Binomial Coefficient Function**
The binomial coefficient is used to calculate combinations, where the order of elements does not matter. It is defined by the formula:  
> [ C(n, k) = n! / k! - (n-k)! ]  

This function leverages the factorial function and introduces an additional parameter, `k`, which represents the number of elements chosen from a set of size `n`.  

### **Example**  
For `n = 5` and `k = 2`:  
[ C(5, 2) = 5! / 2 - (5-2)! = 10 ]  

---

## **3. Permutation Function**
The permutation function calculates the number of possible arrangements of a set of items, considering both cases with and without repetition.  

### **Without Repetition**  
If the elements are unique, the formula simplifies to the factorial of `n`:  
> [ P(n) = n! / n1! * n2! * n3! ... ]  

### **With Repetition**  
If some elements repeat, the formula accounts for the repetition by dividing the total factorial by the factorial of each group of repeated elements:  
[ P(n) = n! ]  


#### **Example**  
For the word "ELEPHANT", which has 8 letters where the letter `E` repeats 3 times:  
[ P(8) = 8! / 2! = 20.160 ]  

---

## **4. Arrangement Function**
The arrangement function calculates the number of ordered subsets (arrangements) that can be created by selecting `p` elements from a set of size `n`. The formula is:  
> [ A(n, p) = n! / (n-p)!]  

This function also uses the factorial function to determine the result.  

### **Example**  
For `n = 5` and `p = 3`:  
[ A(5, 3) = 5! / (5-3) = 60]  

---

These functions are essential for performing factorial-based calculations and solving problems related to combinatorics, making them versatile tools for a wide range of applications.  


# Code Explanation

The following is a detailed explanation of the code's structure and logic, highlighting key implementation decisions and their functionalities.

---

## **Main Loop with `while`**
The program begins with a `while` loop to ensure the code runs continuously until the user explicitly chooses to exit. This allows the user to interact with the menu multiple times without restarting the program.  

---

## **Menu Function and Input Handling**
After initializing the loop, the menu function is called, displaying the available options to the user. The user's response is captured using `scanf`, storing the input for further processing.  

---

## **`switch-case` for Menu Options**
The user's input is handled using a `switch-case` structure. Each case corresponds to a specific menu option, ensuring that the code executes the appropriate functionality based on the user's choice.  

### **Summary of Cases**
Each case in the `switch` statement calls the respective function associated with the menu option. This modular approach keeps the code organized and ensures that each functionality is isolated for better readability and maintainability.

---

## **Matrix Operations**
### **Addition and Subtraction**
For the matrix addition and subtraction operations, no additional functions were implemented as the logic is straightforward. The difference between these operations lies only in the operator (`+` or `-`), which is adjusted accordingly within the code.  

### **Multiplication**
The multiplication operation is slightly more complex. A variable `k` is introduced to facilitate the calculation. The logic involves iterating through the rows and columns of two matrices (`a[i]` and `b[j]`), multiplying the corresponding elements, and adding the result to the appropriate position in the resulting matrix `c[i][j]`. This ensures accurate computation of the matrix product.

---

## **Exit Condition**
To exit the program, the user simply needs to input `0` as their menu selection. This input is captured within the loop, breaking it and terminating the program. This provides a clear and intuitive way for the user to end their interaction.

---

### **Conclusion**
The code effectively combines modularity through functions and clarity in operations, such as matrix handling. The use of a continuous loop and a menu system ensures a user-friendly experience, while the inclusion of structured operations like addition, subtraction, and multiplication demonstrates the program's versatility.


