// MathUtils.h

// Here we declare a class and some member functions (public functions) of it  
class MathUtils {

	// For project: class2
	// New private section added with new private members
	private:
		int a, b;

	public:
		// For project: class2
		// Below we declare a new (non-default/custom) class constructor
		// with initialization using member initializer list  
		// A member initializer list starts with a colon, followed by member names and
		// their initializers, where each initialization expression is separated by a comma. In our
		// previous example, an initialization list is the : x{ xx }, y{ yy } part. This is the
		// preferred way of initializing class data members.
		MathUtils(int aa, int bb) : a{aa}, b{bb}{};
		// MathUtils::MathUtils(int aa, int bb) {
			// 	a = aa;
			// 	b = bb;
		// }



		int addition(int a, int b);
		int substraction(int a, int b);
		int multiplication(int a, int b);
		double division(int a, int b);

	

		// For project: class2
		// Below are the new added functions' declarations
		int getdefa();
		int getdefb();

		int getdefault_addition();
		int getdefault_substraction();
		int getdefault_multiplication();
		double getdefault_division();
};

