#include "../std_lib_facilities.h"
#include <iostream>

using namespace std;

int main()
{
	double val1;
	double val2;
	while (cin >> val1 >> val2) {
		if ((val1 == '|') || (val2 == '|'))
		{
			break;
		}
		else if (val1>val2){
			cout << "Value 2 is smaller than value 1 \n";
		}
		else if (val1 == val2) {
			cout << "Both values are equal \n";
		}
		else {
			cout << "Value 1 is smaller than value 2 \n";
		}
	}
}
