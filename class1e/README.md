#  <p style="background-color:DodgerBlue; color:white; padding-left:5px"> class1e - "Passing by Const Reference" function - Using a struct wrapper to return an integer array</p>

An updated version of the <span style="color:lightgreen">**class1**</span> project.
However, this is actually a sequel, based on the previous project: <span style="color:lightblue">**class1d**</span>

Here, we use a very very simple struct, as a wrapper of an integer array of (fixed) size 2. This is the array actually holding the user input. In the main, we use a new free function of type of the struct, that it returns the array of the user input, wrapped in the struct.

##Short intro to C++ structures - <span style="color:red;"> struct </span>
In this version we use a  <span style="color:red;"> **struct**</span>.
**structs** in C++ are classes that by default use public access modifier for all of their members (variables, functions, etc). A **struct** is a user-defined data type that combines logically related data items of different data types like float, char, int, etc., together. Moreover, it cannot have null values.
A commonly used approach ****is to use structs as **POD**s (C **Plain-Old-Data** structures).  A struct with no modifiers or methods is a C POD struct. This gives C++ a backwards compatible interface with C libraries. <i>"A POD-struct is an aggregate class that has no non-static data members of type non-POD-struct, non-POD-union (or array of such types) or reference, and has no user-defined copy assignment operator and no user-defined destructor."</i>
A struct instance is considered as a “struct variable”

___

## Updates 
####struct declaration in "wrpaArrStruct.h" header file
```
struct WrapArrStruct{
    int warr[2];
};
```
####Updates in the main class: __main.cpp__

A new 'free' function "getintegersstruct" added (it is also an alternative to the previous "getintegersarr" and "getinteger"). The "getintegersstruct" is of type "WrapArrStruct" and returnes the 2 integer values for the math calculations. The 2 integer values are put as araay elements in the array of the struct "WrapArrStruct".  

The "getintegersstruct" function declaration:
```
...
#include "wrpaArrStruct.h"
...

WrapArrStruct getintegersstruct(const int& a, const int& b);
...
```
The code of the "getintegersstruct" (function deifinition):
```
WrapArrStruct getintegersstruct(const int& a, const int& b){

    int aa = a;
    int bb = b;

    // Again, below, we just call the non-const "pass by reference"
    // avoiding to repeat the same code. 
    getintegers(aa, bb);

    WrapArrStruct arWrap;
    arWrap.warr[0] = aa;
    arWrap.warr[1] = bb;

    return arWrap;
 } 

```
The "trick" here is again, that we just call the previous "getintegers" non-const "pass by reference" function,  because that way, we avoid to repeat the same code for capturing the user input.


We can call the function either by instantiating the struct:
```
        WrapArrStruct arrwraper = getintegersstruct(x,y);
        std::cout << "x,y After call: " << x << ", " << y << '\n'; 
        x = arrwraper.warr[0];
        y = arrwraper.warr[1];

```
or directly:
```
        x = getintegersstruct(x,y).warr[0];
        y = getintegersstruct(x,y).warr[1];

```
####Drawback(s)
**fixed array size**
We have to use a predefined (fixed) size of the array wrapped in the struct. This is because in C++, the size of an object uses  stack-based memory and thus, it must be static (i.e. cannot be changed), and therefore it must be known at compile time. 
___
#### <span style="color:red">Links related to structs and struct wrappers returning an integer array</span>
c++ - Return array in a function - Stack Overflow
https://stackoverflow.com/questions/3473438/return-array-in-a-function

c++ - How to return an array from a function? - Stack Overflow
https://stackoverflow.com/questions/4264304/how-to-return-an-array-from-a-function

How to Return a Local Array From a C++ Function? - GeeksforGeeks
https://www.geeksforgeeks.org/how-to-return-a-local-array-from-a-cpp-function/

<br>

C/C++ Struct vs Class - Stack Overflow
https://stackoverflow.com/questions/2750270/c-c-struct-vs-class

oop - When should you use a class vs a struct in C++? - Stack Overflow
https://stackoverflow.com/questions/54585/when-should-you-use-a-class-vs-a-struct-in-c

What are POD types in C++? - Stack Overflow
https://stackoverflow.com/questions/146452/what-are-pod-types-in-c

Difference between Structure and Class in C++
https://www.guru99.com/structure-vs-class.html

Difference Between Structure and Class in C++ - GeeksforGeeks
https://www.geeksforgeeks.org/structure-vs-class-in-cpp/



