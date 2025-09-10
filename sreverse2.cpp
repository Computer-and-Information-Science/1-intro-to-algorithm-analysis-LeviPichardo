// Function to reverse the characters of a string, recursive
#include <iostream>
#include <string>
using namespace std;

string reverse (const string& s);

int main() {
	string str;
	cout << "Enter a string: ";
	getline(cin, str);
	cout << reverse(str) << endl;
}

string reverse (const string& s) {
	if (s.size() > 1)
		return reverse(s.substr(1)) + s.substr(0, 1);
	return s;
}

//What input or parameter value impacts the number of times the recursive function will be called?
// The value of s, which is the legnth of the input string

//3 examples
//A = 0 calls
//Go = 1 call
//Hello! = 5 calls

//Formula:
//