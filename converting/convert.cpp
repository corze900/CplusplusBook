#include "../std_lib_facilities.h"
#include <stdio.h>

using namespace std;

int main()
{
	int val1;
	int val2;
	cout << "Please enter 2 numbers (followed by 'enter' after each number)\n";
	cin >> val1;
	cin >> val2;
	if (val1 > val2) {
		cout << "val1 is bigger than val2 \n";
	} else {
		cout << "val1 is smaller than val2 \n";
	}
	cout << "the sum of val1 and val2 is " << (val1 + val2) << "\n";
	cout << "the difference of val1 and val2 is " << (val1 - val2) << "\n";
	cout << "the product of val1 and val2 is " << (val1 * val2) << "\n";
	cout << "the ratio of val1 and val2 is " << (val1 / val2) << "\n";
}
