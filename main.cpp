#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int number;

	cout << "Enter two numbers -> ";
	cin >> number;

	string result = (number % 2 == 0) ? "even" : "odd";

	cout << "The number is " << result;

	_getch();
	return 0;
}