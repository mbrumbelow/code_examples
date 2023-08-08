// C++ program to illustrate the static_cast
//    The static_cast operator is the most commonly used casting operator in C++. 
//    It performs compile-time type conversion and is mainly used for explicit conversions that are considered safe by the compiler. 
//

#include <iostream>
#include <typeinfo>
using namespace std;

int main() {
    
	int num = 10;

	// converting int to double
	double numDouble = static_cast<double>(num);

	// printing data type
	cout << typeid(num).name() << endl;

	// typecasting
	cout << typeid(static_cast<double>(num)).name() << endl;

	// printing double type t
	cout << typeid(numDouble).name() << endl;

	return 0;
}
