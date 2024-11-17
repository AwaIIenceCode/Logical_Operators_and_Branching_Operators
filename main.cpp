#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int number;

	cout << "Enter the number -> ";
	cin >> number;

	if (number > 0)
	{
		cout << "\nNumber is pozitive" << endl;
	}

	else if (number < 0)
	{
		cout << "\nNumber is negative" << endl;
	}


	else
	{
		cout << "\nNumber equal zero" << endl;
	}

	_getch();
	return 0;
}