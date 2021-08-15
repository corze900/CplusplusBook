#include "../../std_lib_facilities.h"
#include <iostream>
using namespace std;

int main()
{
	//name and age(months)
	string name;
	double age;
	cout << "Please enter your first name and age\n";
	cin >> name;
	cin >> age; 
	cout << "Hello, " << name << " (age " << age*12 << " in months)\n";
}
