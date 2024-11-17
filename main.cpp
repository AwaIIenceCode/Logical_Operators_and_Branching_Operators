#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int num_1, num_2;

	cout << "Enter the first number -> ";
	cin >> num_1;

	cout << "Enter the second number -> ";
	cin >> num_2;

	int result = (num_1 < num_2) ? num_1 : num_2;

	cout << "\nYour lower number is: " << result;

	_getch();
	return 0;
}