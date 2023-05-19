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



int main(int argc, char *argv[]) { 

	// Parameters are space separared values - not comma separated
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


