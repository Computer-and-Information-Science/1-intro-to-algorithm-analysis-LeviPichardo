// Factorial function, recursive
#include <iostream>
using namespace std;

unsigned int factorial (unsigned int n);

int main() {
	unsigned int num;
	cout << "Enter number: ";
	cin >> num;
	cout << num << "! = " << factorial(num) << endl;
}

unsigned int factorial (unsigned int n) {
	return n > 0 ? n * factorial(n - 1) : 1;
}

//What input or parameter value impacts the number of times the recursive function will be called?
// The value of n, which is the codes input

//3 examples
//n = 0 is 1 call
//n = 2 is 3 calls
//n = 4 is 5 calls

//Formula:
//# of calls = n + 1 