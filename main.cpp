#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int num_1, num_2, num_3, num_4, num_5, num_6, num_7;
	int num_max;

	cout << "Enter the first number -> ";
	cin >> num_1;

	cout << "Enter the second number -> ";
	cin >> num_2;

	cout << "Enter the third number -> ";
	cin >> num_3;

	cout << "Enter the fourth number -> ";
	cin >> num_4;

	cout << "Enter the fifth number -> ";
	cin >> num_5;

	cout << "Enter the sixth number -> ";
	cin >> num_6;

	cout << "Enter the seventh number -> ";
	cin >> num_7;

	if (num_1 >= num_2 && num_1 >= num_3 && num_1 >= num_4 && num_1 >= num_5 && num_1 >= num_6 && num_1 >= num_7)
	{
		num_max = num_1;
	}

	else if (num_2 >= num_1 && num_2 >= num_3 && num_2 >= num_4 && num_2 >= num_5 && num_2 >= num_6 && num_2 >= num_7)
	{
		num_max = num_2;
	}

	else if (num_3 >= num_1 && num_3 >= num_2 && num_3 >= num_4 && num_3 >= num_5 && num_3 >= num_6 && num_3 >= num_7)
	{
		num_max = num_3;
	}

	else if (num_4 >= num_1 && num_4 >= num_2 && num_4 >= num_3 && num_4 >= num_5 && num_4 >= num_6 && num_4 >= num_7)
	{
		num_max = num_4;
	}

	else if (num_5 >= num_1 && num_5 >= num_2 && num_5 >= num_3 && num_5 >= num_4 && num_5 >= num_6 && num_5 >= num_7)
	{
		num_max = num_5;
	}

	else if (num_6 >= num_1 && num_6 >= num_2 && num_6 >= num_3 && num_6 >= num_4 && num_6 >= num_5 && num_6 >= num_7)
	{
		num_max = num_6;
	}

	else
	{
		num_max = num_7;
	}

	cout << "\nLargest number entered is: " << num_max << endl;

	_getch();
	return 0;
}