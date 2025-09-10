// Tower of Hanoi puzzle for an arbitrary number of disks, recursive
#include <iostream>
using namespace std;

void tower (int n_disks, char from, char to, char interim);

int main () {
	int n;
	cout << "Number of disks: ";
	cin >> n;
	tower(n, 'A', 'C', 'B');
}

void tower (int n_disks, char from, char to, char interim) {
	if (n_disks > 0) {
		tower(n_disks - 1, from, interim, to);
		cout << "Move disk " << n_disks << " from " << from << " to " << to << endl;
		tower(n_disks - 1, interim, to, from);
	}
}

//n_disks

//n = 1 is 1 call
//n = 2 is 3 calls 
//n = 3 is 7 calls

//# of recursive calls = 2^n -1