// MathUtils.h


class MathUtils {

	private:
		int a, b;

	public:

		MathUtils(int aa, int bb) : a{aa}, b{bb}{};

		// For project: class2a: This ia a shallow copy constructor
		MathUtils( const MathUtils& rhs) : a{rhs.a}, b{rhs.b}{};

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

