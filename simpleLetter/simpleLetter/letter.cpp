#include "../../std_lib_facilities.h"
#include <stdio.h>

int main()
{
	cout << "Please enter the name of the person you want to write to? (followed by 'enter'):\n";
	string first_name;
	cin >> first_name;
	cout << "Dear " << first_name << ",\n";
	cout << "How are you? I hope everything is alright where you are. I feel like we've lost touch and I wanted to write to you so we can catch up!\n";
	cout << "What is the name of another freind of yours? (followed by 'enter'):\n";
	cin >> first_name;
	cout << "Is he/her male or female? (followed by 'm' or 'f')\n";
	char gender = 0;
	cin >> gender;
	if (gender == 'm')
	{
		cout << "Hello, sir " << first_name << "\n";
	}
	else 
	{
		cout << "Hello, madam " << first_name <<"\n";
	}
	cout << "How old are you? \n";
	int age = 0;
	cin >> age;
	if (age < 0 || age > 110)
	{
		simple_error("Are you Kidding??");
	}
	else 
	{
		cout << "You're pretty young!!";
	}
	return 0;
	
}