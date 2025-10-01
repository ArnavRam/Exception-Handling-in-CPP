# Experiment 16 - Exception Handling

---

## Aim
- To study and implement **exception handling** in C++, using `try`, `catch`, and `throw` to manage runtime errors gracefully.

---

## Tools Used
- Visual Studio Code
- MinGW-w64 with g++ Compiler

---

## Theory
An **Exception** is an unexpected event or error that occurs during a program's execution, such as division by zero, invalid input, or a file not found. **Exception Handling** is a mechanism in C++ to detect and manage these runtime errors without abruptly terminating the program.

- **`try` block:** Contains code that may potentially throw an exception. The code within this block is monitored for errors.
- **`throw` statement:** Used to signal or raise an exception when an error is detected. It transfers control to an exception handler.
- **`catch` block:** This block handles the exception thrown by the `try` block. It is placed immediately after the `try` block. If the type of exception thrown matches the `catch` block's parameter, the code inside it is executed.

The flow is as follows: The `try` block is executed. If an error occurs, `throw` raises an exception. The program immediately looks for a matching `catch` block to handle it. If one is found, the program continues; otherwise, it terminates.

---

## Algorithm / Logic

### Program 1: Division by Zero
1.  **Start**
2.  Prompt the user to enter a numerator and a denominator.
3.  Place the division operation inside a `try` block.
4.  Use an `if` statement to check if the denominator is `0`.
5.  If it is, `throw` an exception (e.g., the denominator itself).
6.  If it is not `0`, perform the division and display the result.
7.  Create a `catch` block that catches the thrown exception type.
8.  Inside the `catch` block, display an error message like "Division by zero is not allowed."
9.  **End**

### Program 2: Age Validation
1.  **Start**
2.  Prompt the user to enter their age.
3.  Place the age validation logic inside a `try` block.
4.  Use an `if` statement to check if the `age < 18`.
5.  If the condition is true, `throw` the age as an exception.
6.  If the age is 18 or over, display an "Accepted" or "Welcome" message.
7.  Create a `catch` block that catches an integer.
8.  Inside the `catch` block, display an error message indicating that the user is underage.
9.  **End**

---

## Conclusion
Exception handling in C++ provides a structured and robust way to manage runtime errors. By using the `try`, `throw`, and `catch` keywords, it is possible to separate error-handling logic from the main program flow. This ensures that the program can handle unexpected situations gracefully without crashing, leading to more reliable and user-friendly applications. This mechanism is essential for building resilient software that can manage issues like invalid input or resource failures.
