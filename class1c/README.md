 
#  <p style="background-color:DodgerBlue; color:white; padding-left:5px"> class1c - "Passing by Reference" function</p>

An updated version of the <span style="color:lightgreen">**class1**</span> project.
However, this is actually a sequel, based on the previous project: <span style="color:lightblue">**class1b**</span>

___


### Updates only in the main class: __main.cpp__

- We added a "free" function, named "getintegers". It deals with the interaction with the user for providing (or not) the 2 (comma separated) integer values. Thus we avoid having some boilerplate code in the main(). 
- The function <u>uses arguments passed in "**by reference**"</u> (C++). The __&__ (address of) operator denotes values passed by "pass-by-reference" in a function.
- Passing arguments "by reference" in a function, means that inside the function we can change the values of those parameters. The function does not preserve their values. So, the changed values are reflected into the calling scope (e.g. in the main() function in our case). Thus the "getintegers" function can return nothing. It can be just a void function.
- One more note is that in pure C there is no such "pass by reference" functionality. In C, __&__ means "address of" and is a way to formulate a pointer from a variable.

___
#### <span style="color:red">Links related to & and "pass by reference"</span>
Pass by reference (C++ only) - IBM Documentation
https://www.ibm.com/docs/en/zos/2.4.0?topic=calls-pass-by-reference-c-only

C++ Functions - Pass By Reference - GeeksforGeeks
https://www.geeksforgeeks.org/cpp-functions-pass-by-reference/

C++ Functions - Pass By Reference
https://www.w3schools.com/cpp/cpp_function_reference.asp

c++ - Where should I prefer pass-by-reference or pass-by-value? - Stack Overflow
https://stackoverflow.com/questions/4986341/where-should-i-prefer-pass-by-reference-or-pass-by-value

How to pass "literal" integers by reference in C++ - Stack Overflow
https://stackoverflow.com/questions/7701221/how-to-pass-literal-integers-by-reference-in-c

c++ - What does int & mean - Stack Overflow
https://stackoverflow.com/questions/4629317/what-does-int-mean

variables - Is there a difference between int *x and int* x in C++? - Stack Overflow
https://stackoverflow.com/questions/15932925/is-there-a-difference-between-int-x-and-int-x-in-c

c - Pointer/Address difference - Stack Overflow
https://stackoverflow.com/questions/9855482/pointer-address-difference

Difference between passing pointer to pointer and address of pointer to any function - GeeksforGeeks
https://www.geeksforgeeks.org/difference-between-passing-pointer-to-pointer-and-address-of-pointer-to-any-function/

std::addressof - cppreference.com
https://en.cppreference.com/w/cpp/memory/addressof
