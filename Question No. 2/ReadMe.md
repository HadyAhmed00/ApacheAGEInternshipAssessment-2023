This is how to run my C code solution on a Windows machine using VS Code, follow these steps:

## Note: there is another .md file for explaining the pros and cons of each approach and there are code comments as well

1. **Install Visual Studio Code:** Download and install Visual Studio Code from the official website.

2. **Install C/C++ Extension:** In VS Code, install the "C/C++" extension by Microsoft. This extension provides C/C++ language support and debugging capabilities.

3. **Install a Compiler:** You'll need a C compiler to compile and run your code. A popular choice is MinGW-w64. Download and install it following the instructions on its website.

4. **Configure Compiler Path:** Once MinGW is installed, you'll need to configure its path in VS Code. you just add the path of the MinGw in the environment vars for use to make sure the c compiler is installed you can run this command 
    ```
    gcc --version
    ``` 
if it runs ok and displayed the version then everything ok else you need to revise the previous steps and redo it carefully

5. **Build and Run:** To compile and run the C code file `Q2_answer.c`, open the terminal in VS Code and use the following commands:

   ```bash
   gcc Q2_answer.c -o q2.exe
   ```
   then after this run this 
   ```bash
   .\q2.exe
   ```


That's it!