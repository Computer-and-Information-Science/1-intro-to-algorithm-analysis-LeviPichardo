// Print non-negative integer digits reversed, recursive
#include <iostream>
using namespace std;

void reverse (unsigned int n);

int main() {
	unsigned int num;
	cout << "Enter number: ";
	cin >> num;
	reverse(num);
	cout << endl;
}

void reverse (unsigned int n) {
	if (n) {
		cout << n % 10;
		reverse(n / 10);
	}
}

//What input or parameter value impacts the number of times the recursive function will be called?
//the amount of digits in the value n

//3 examples
//n = 0 is 0 calls
//n = 5 is 1 call
//n = 1004 is 4 calls 

//Formula:
//