#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int number;

	cout << "Enter a four digit number -> ";
	cin >> number;

	if (number < 1000 && number > 9999)
	{
		cout << "\n\aTry again... You need enter four digit number!" << endl;
	}

	else
	{
		int first_two_number = number / 100;
		int last_two_number = number % 100;

		int first_number = first_two_number / 10;
		int second_number = first_two_number % 10;
		int third_number = last_two_number / 10;
		int fourth_number = last_two_number % 10;

		cout << "Your reverse number is: " << second_number << first_number << fourth_number << third_number << endl;
	}

	_getch();
	return 0;
}
