// C++ program to illustrate the const_cast
//    The const_cast operator is used to modify the const or volatile qualifier of a variable. 
//    It allows programmers to temporarily remove the constancy of an object and make modifications. 
//    Caution must be exercised when using const_cast, as modifying a const object can lead to undefined behavior.
//

#include <iostream>
using namespace std;

int main() {

	const int number = 5;
	
    // Pointer to a const int
	const int* ptr = &number;

	// int* nonConstPtr = ptr; 
    // If we use this instead of without using const_cast we will get error of invalid conversion
	int* nonConstPtr = const_cast<int*>(ptr);
	
    *nonConstPtr = 10;

	cout << "Modified number: " << *nonConstPtr;

	return 0;
}
