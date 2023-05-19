//main.cpp

#include <stdio.h>
#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>

#include "MathUtils.h"

// Definition of printout ("free" function - does not belong to any class neither 
// is declared elsewhere, e.g. in a header file). Definition should be in advance 
// - before using/calling it. Otherwise: error: 'printout' was not declared in this scope; 
void printout(std::string action, int x, int y, double r);

// Another "free" function declaration (outputs parameters passed in)
void argspassed(int n, char *args[]);

// One more "free" function declaration. It deals with the interaction with the user 
// for providing the 2 integer values (or not)). 
// Thus we avoid having some boilrplate code in the main(). 
//
// The function uses arguments passed in by reference (C++).
// The & (address of) operator denotes values passed by "pass-by-reference" in a function.
//
// C however has no such "pass by reference" functionality.
// In c, & means "addressof" and is a way to formulate a pointer from a variable.
void getintegers(int& a, int& b);

//Notes for the function declaration below:
//- The function cannot be an oveloded function (because we don't use different parameters type 
//  in its signature/prototype (even we use the const modifiers) 
//- We use by reference for efficiency (class1d project)
//- We use the const modifier bwcause we want to keep parameters passed in, unchanged
//- We want to return an array. However -generally-, we cannot return an array from a function.
//- A first approach is to return a pointer, pointing to the integer array thet the function returns,
int* getintegersarr(const int& a, const int& b);









int main(int argc, char *argv[]) { 

	// Command-line parameters are space separared values - not comma separated
	argspassed(argc, argv);


	int x, y; 
	x=4;
	y=2;


	int n = 2;
	if (argc >= n) {
		//std::cout << argv[1] << ", " <<  argv[2] << '\n' <<  '\n';
		x = atoi(argv[1]);
		y = atoi(argv[2]);		
	} else {

		std::cout << "x,y Before call: " << x << ", " << y << '\n';  
		//getintegers(x,y);
		int * ptr = getintegersarr(x,y);
		std::cout << "x,y After call: " << x << ", " << y << '\n';  
		x = ptr[0];
		y = ptr[1];
		std::cout << "x,y After assignmetn: " << x << ", " << y << '\n';  

	}
	


	MathUtils mutils;

	double r;

	r = mutils.addition(x, y);
	// printf("The addition of %d and %d is: %.2f\n", x, y, r);
	printout("addition", x,y,r);

	r = mutils.substraction(x, y);
	// printf("The substraction of %d and %d is: %.2f\n", x, y, r);
	printout("substraction", x,y,r);

	r = mutils.multiplication(x, y);
	// printf("The multiplication of %d and %d is: %.2f\n", x, y, r);
	printout("multiplication", x,y,r);
	
	r = mutils.division(x, y);
	// printf("The division of %d and %d is: %.2f\n", x, y, r);
	printout("division", x,y,r);


	return 0; 


}


void printout(std::string action, int x, int y, double r) { 

	printf("The %s of %d and %d is: %.2f\n", action.c_str(), x, y, r);  

}


void argspassed(int c, char *args[]) {

	std::cout << "The name used to start the program: " << args[0];
    
	if (c > 1 ) {
		std::cout << "\nParameters/Arguments passed in are:\n";
  		for (int n = 1; n < c; n++)
    		std::cout << args[n] << ",";
			std::cout << '\n';
	} else {
		std::cout << "\nNo Arguments passed in!\n";
	}
}



void getintegers(int& x, int& y) {

	// x += 5;
	// y += 5; 
		char yesno = 'N';
		std::cout << "Default integers are " << x << " and " << y << ". Would you like to give me 2 integers? N/y: \n";
		std::cin.get(yesno);
		if (yesno != '\n' && (yesno == 'y' || yesno == 'Y')) {
			std::cout << "Give me 2 integers (comma separated): ";
			std::string instr = "";
			std::cin >> instr;
			//std::cout << instr << '\n';

			char sep = ',';
			x = atoi(instr.substr(0, instr.find(sep)).c_str());
			int p = instr.find(sep)+1;
			if ( p==0 ) p =  instr.length()-1;
			// y = atoi(instr.substr(instr.find(',')+1, instr.length()-1).c_str());
			y = atoi(instr.substr(instr.find(sep)+1, p).c_str());

			std::cout << "You gave me: " << x << " and " << y  << '\n';

		}

}

// Here we are going to use a static variable for the array to be returned.
// There are also other approaches for returning an array - actualle a pointer to array
// e.g. Using Dynamically Allocated Array 
// int* arr = new int[2]; - however after calling our function to return the array, we have to clear it
// e.g. using the delete or free()
// However, since he lifetime of a static variable is throughout the scope it resides, (here the scope is 
// within the function, using a static array is a preferable approach (no need to delete or free).
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


