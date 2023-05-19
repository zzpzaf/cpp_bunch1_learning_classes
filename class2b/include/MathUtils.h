// MathUtils.h

#include <iostream>
#include <string>

class MathUtils {

	private:
		int a;
		int * b;

		// Note:
		// If the pointer int * b was a char * b pointer, then we will have issues. 
		// This is because even a char * pointer points to an array of characters at the memory location, 
		// then, if we had used new char, it would only allocated memory for just 1 char!,

	public:

		// This is the class 'normal' or 'regular' constructor with initializer list
		MathUtils(int aa, int bb) : a{aa}, b{new int{bb}} {
			std::cout << "User-defined class constructor invoked. - " << bb << '\n';
		}

		 


		// For project: class2b:
		// Whwen we use pointers as class properties/members then we have to use
		// the propper deep copy constructor, other wise pointers cannot be copied correctly
		// This ia a Deep copy constructor
		MathUtils( const MathUtils& rhs) : a{rhs.a}, b{new int{*rhs.b}} {
			std::cout << "User-defined class deep copy constructor invoked. - " << *b << '\n';
		}

		int addition(int a, int b);
		int substraction(int a, int b);
		int multiplication(int a, int b);
		double division(int a, int b);

			

		int getdefa();
		int getdefb();


		int getdefault_addition();
		int getdefault_substraction();
		int getdefault_multiplication();
		double getdefault_division();


};

