# C- Programming Basics 
# Lab 1 (22/08/2023)

# Q1) Write a simple Hello World program and its development process

# Theory
The compilation is the process of converting the source code of the C language into machine code. As C is a mid-level language, it needs a compiler to convert it into an executable code so that the program can be run on our machine.
A compiler converts a C program into an executable. There are four phases for a C program to become an executable: 

1. Pre-processing
2. Compilation
3. Assembly
4. Linking

# Output

![Screenshot (14)](https://github.com/saileshkumar16/C-Programming-Basics/assets/144588637/f0cdb4cb-c965-4ffb-81aa-b3fd9186e544)

# C- Programming Basics - Lab 2 (23/08/23)

# Q1) Write  a program to print sizes of different data types

# Theory
The sizeof operator is the most common operator in C. It is a compile-time unary operator and used to compute the size of its operand. It returns the size of a variable. It can be applied to any data type, float type, pointer type variables.

# Explanation
Using the sizeof operator, we are finding out the size of different data types as shown in below output. We can use %lu or %zu as format specifier for sizeof operator.

# Output:
![Screenshot (15)](https://github.com/saileshkumar16/C-Programming-Basics/assets/144588637/b441e4e8-0b6e-4828-a0aa-59e377be60f6)


# Q2) Write a C program to read a number from the user and print a table of multiplication for that number.

# Explanation:
The user will enter a number and the corresponding table to that number will be displayed as table format, this can be achieved by using for loop or while loop as shown in the below output.

# Output
![Screenshot (16)](https://github.com/saileshkumar16/C-Programming-Basics/assets/144588637/7a4ccee7-db0b-40ba-9f58-c2cb125b7eba)

# Q3) Write a program to display different start patterns on screen.

# Explanation:
By using nested for loops, we can print the start patterns on the screen. The outer for loop corresponds to number of rows and the inner for loop corresponds to number of columns. We can see 2 kinds of star pattern outputs as shown below.

# Output 1:
![Screenshot (17)](https://github.com/saileshkumar16/C-Programming-Basics/assets/144588637/59131d64-fd54-4fd6-bd88-230f4be2f92b)

# Output 2:
![Screenshot (18)](https://github.com/saileshkumar16/C-Programming-Basics/assets/144588637/31f0d1ed-8309-461f-8352-4ced432af864)


# C-Programming Basics - Lab 3 (29/08/2023)

# Q1) Write a program to demonstrate pointers. Declare a pointer ptr to integer and equate it to the address of integer i. Print value of i, value of &i, value of ptr and value of *ptr.

# Theory:
In C, a pointer is a variable that stores the memory address of another variable. Pointers are used to work with memory directly, allowing you to manipulate and access data at a low level. 

# Explanation:
With the help of referencing and dereferencing operators the addresses and value of the integers and pointers are printed as shown below.

# Output
![Screenshot (19)](https://github.com/saileshkumar16/C-Programming-Basics/assets/144588637/bb83955a-d08b-43b7-b152-a5ebd67c2848)

# Q2)  Write a program in C to demonstrate function call by value and call by reference by writing a swap function to swap two integers.

# Theory:
In C, when you pass arguments to a function, the method of passing those arguments can be categorized into two main approaches: "call by value" and "call by reference." These approaches determine how changes made to function parameters affect the original values outside the function.

# Explanation
In C, swapping two numbers using call by reference (using pointers) is successful because when you pass the memory addresses of the two variables to the swapping function, the function can directly access and modify the values stored at those addresses. This allows for the values of the two variables to be swapped in memory. In contrast, when you use call by value, you are working with copies of the original values, so swapping is not performed successfully as shown in the below output

# Output
![Screenshot (20)](https://github.com/saileshkumar16/C-Programming-Basics/assets/144588637/0c9aab3e-5b55-428c-aef2-6badb33454cd)

