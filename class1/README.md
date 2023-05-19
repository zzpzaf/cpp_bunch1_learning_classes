# <h1 id="toc_0"><p style="background-color:DodgerBlue; color:white; padding-left:5px"> class1</p></h1>


-A very simple example of a basic class declaration and definition.
-Declaration is separated and takes place in a header file, and Definition in a source code file.

### The header file: MathUtils.h
Declaration of the class among its member functions resides inside the header file.

Class name: __MathUtils__

### The source code file: MathUtils.cpp
Usually we use <class-name>::<function-name> syntax for member function definition.

### The main class: main.cpp
- We can use an object of the declared class, and then we use (we call) its functions, separating them from the object  with dot ".".
- If we want to use (to call) a function in a program, we have first to declare it (declare its prototype/"signature"), and then to define it (define its actual body of code). Here, we use a separate "free" function (available only in main.cpp) for outputting the operands and the result to the console using the printf command.  The "free" term here, is being used to show that the function does not belong to any class.



