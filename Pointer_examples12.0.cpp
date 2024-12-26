#include <iostream>

using namespace std;

// function prototype with pointes as parameters

void swap(int*, int*);

int main() {
	
	//initalize variables
	
	int a = 1, b = 2;
	
	cout << "Before swapping" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	
	
	// call function by passing variable addresses
	
	swap(&a, &b);
	
	cout << "\n After swapping" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	
	return 0;
}

//function definition to swap numbers


void swap(int* n1, int* n2) {
	int temp;
	temp = *n1;
	*n1 = *n2;
	*n2 = temp;
	
}
