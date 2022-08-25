/*
#include <iostream>
#include <string>

using namespace std;

int main()
{*/
	//POINTERS
	/*
	int a = 5;
	int* pointerA = &a; //The address of a = 5 -- Where it is located.
	//int* pointer_A = a; // DOES NOT WORK.  A value of type int can't be converted to type int* 
	//void* somePointer = &a; //Example of a void pointer -- A pointer of an unknown type.  

	cout << "The value of a is " << a << endl;
	//cout << "The memory address of a is " << &a << endl; //How to access a pointer value directly.  
	cout << "The memory address of a is = " << pointerA << endl;

	cout << endl;

	*pointerA = 10; //Directly changing the value of the variable at this memory location.  
	cout << "The value of a is " << a << endl;
	cout << "The memory address of a is =  " << pointerA << endl;

	cout << endl;

	cout << "The value of pointerA is = " << *pointerA << endl; //Known as dereferencing.  
	cout << "The memory address  of pointerA is = " << pointerA << endl;
	//cout << "Another way of getting the memory address of a pointer = " << &pointerA << endl;
	*/

	//REFERENCES
/*
	int a = 5; 
	int& referenceA = a; 
	int* pointerA = &a; 
	int b = 10; 

	cout << "referenceA Value:" << endl;
	cout << "The value of a " << a << endl; 
	cout << "The value of referenceA is " << referenceA << endl; 
	cout << endl; 

	cout << "referenceA Memory:" << endl;
	cout << "The memory address of a " << &a << endl;
	cout << "The memory address of referenceA is " << &referenceA << endl; 
	cout << endl;

	cout << "pointerA Value:" << endl;
	cout << "The value of a " << a << endl;
	cout << "The value of pointerA " << pointerA << endl;
	cout << endl;

	cout << "pointerA = &b;" << endl;
	pointerA = &b;
	cout << "The value of a " << a << endl;
	cout << "The value of pointerA " << *pointerA << endl;
	cout << endl;

	cout << "referenceA = b;" << endl;
	referenceA = b;
	cout << "The value of a " << a << endl;
	cout << "The value of referenceA " << referenceA << endl;
	cout << endl;
}
*/


//NOTES
/*
- Writing to memory 
- CPU gets execute commands from memory (strings, ints, etc.)
- Memory locations 
  - int a = 5; <-- a reference to a location in memory.  

- Cannot make a void reference.  We can with a pointer.  
- A reference cannot be changed, a pointer can be changed.  

- Reference, value, pointer, address.
- & = Reference 
- * = Pointer 
- Value located at an address. 
- Address of a value.  
*/


