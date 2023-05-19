#  <p style="background-color:DodgerBlue; color:white; padding-left:5px"> class1d - "Passing by Const Reference" function - return an integer array (actually a pointer to an integer array)</p>

An updated version of the <span style="color:lightgreen">**class1**</span> project.
However, this is actually a sequel, based on the previous project: <span style="color:lightblue">**class1c**</span>

We added another free function "getintegersarr" which is an alternative to the previous "getintegers", dealing with the interaction with the user for providing (or not) the 2 (comma separated) integer values. This time we use "pass by const reference", and the "getintegersarr" returns an array of the 2 integers.

Overloading could have been a good option, however the previous "getinteger" function cannot be  overloaded, because it was a void function and moreover, its signature/prototype remains the same, even we use the const modifiers. So, we use the new "getintegersarr" function.
___

### Updates only in the main class: __main.cpp__


  
- The "getintegersarr" function <u>uses arguments passed in "**by const reference**"</u> (C++). Generally, passing an argument by reference, is considered more efficient. However, when we want to ensure that the arguments passed in will not be changed, then we can pass them <u>"by const reference"</u>. The **const** modifier ensures the value of an argument will be remained intact.4

**Some notes about the "getintegersarr" function** 

- We want to use "pass by reference" for efficiency
- We want the parameters passed-in to remain unchanged. Thus, we use the **const** modifier.
 
- We want to return an array. However -generally-, we cannot return an array from a function.
- A first commonly used approach is to return a pointer, pointing to the integer array, that the function returns.
- Here we use a local **static** variable for the array to be returned.
- There are also other approaches for returning an array - actually a pointer to array, e.g. by using dynamically allocated array: int* arr = new int[2]; 
however after calling the function and getting the returned  array, we have to clear it, e.g. by using the delete or free(), in order to avoid memory leaks.
- Using a local static array is a preferable approach. This is because the lifetime of a static variable is throughout the scope it resides, and here the scope is within the function. Thus there is no need to delete or free the array and its memory allocated.

The "getintegersarr" declaration
```
...
int* getintegersarr(const int& a, const int& b);
...
```

The "getintegersarr" function definition
```
...
int* getintegersarr(const int& a, const int& b) { 

	int aa = a;
	int bb = b;

	// Below, we just call the non-const "pass by reference"
	// because that way, we avoid to repeat the same code 
	// to capture the user input.
	getintegers(aa, bb);

	static int arr[2];
	arr[0] = aa;
	arr[1] = bb;

	return arr;

}
...
```

- For our specific needs, we have to return back the 2 integers provided (or not) by the user input. In this example we will return an integer array of size 2. One "trick" we use here, is that we just call the previous "getintegers" non-const "pass by reference" function,  because that way, we avoid to repeat the same code for capturing the user input.


___
#### <span style="color:red">Links related to & and "pass by const reference"</span>

variables - Is it better in C++ to pass by value or pass by reference-to-const? - Stack Overflow
https://stackoverflow.com/questions/270408/is-it-better-in-c-to-pass-by-value-or-pass-by-reference-to-const

c++ - Passing as const and by reference - Worth it? - Stack Overflow
https://stackoverflow.com/questions/5060137/passing-as-const-and-by-reference-worth-it

c++ - Passing const references to functions - Stack Overflow
https://stackoverflow.com/questions/30558077/passing-const-references-to-functions

c++ - What is the difference between a const reference and normal parameter? - Stack Overflow
https://stackoverflow.com/questions/2627166/what-is-the-difference-between-a-const-reference-and-normal-parameter

c++ - Why pass by value and not by const reference? - Stack Overflow
https://stackoverflow.com/questions/28138188/why-pass-by-value-and-not-by-const-reference

c++ - calling the same member function from const and non-const context - Stack Overflow
https://stackoverflow.com/questions/76154760/calling-the-same-member-function-from-const-and-non-const-context

c++ - Is passing arguments as const references premature optimization? - Software Engineering Stack Exchange
https://softwareengineering.stackexchange.com/questions/372105/is-passing-arguments-as-const-references-premature-optimization



