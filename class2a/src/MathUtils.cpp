//MathUtils.cpp

// The MathUtils class is declared in the header file: MathUtils.h
#include "MathUtils.h"



// Here we define the member functions of the MathUtils class.

int MathUtils::addition(int a, int b) {
	return(a+b);
} 

int MathUtils::substraction(int a, int b) {
	return(a-b);
} 

int MathUtils::multiplication(int a, int b) {
	return(a*b);
} 

double MathUtils::division(int a, int b) {
	return(a/b);
}



// For project: class2
// Below are the new added functions' definitions

int  MathUtils::getdefa() {
	return a;
}

int  MathUtils::getdefb() {
	return b;
}



int  MathUtils::getdefault_addition() {
	return MathUtils::addition(a,b);
}

int MathUtils::getdefault_substraction() {
	return MathUtils::substraction(a,b);
} 

int MathUtils::getdefault_multiplication(){
	return MathUtils::multiplication(a, b);
}

double MathUtils::getdefault_division(){
	return MathUtils::division(a,b);
}

