//var1
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int number;

	cout << "Enter a six digit number to determine your lucky number -> ";
	cin >> number;

	int digital_count = (number == 0 ? 1 : int(log10(number) + 1));

	if (digital_count != 6)
	{
		cout << "\a\nTry again. You need to enter 6 digits..." << endl;
	}

	else
	{
		int first_three = number / 1000;
		int last_three = number % 1000;

		int num_first_1 = first_three / 100;
		int num_first_2 = (first_three / 10) % 10;
		int num_first_3 = first_three % 10;

		int num_last_1 = last_three / 100;
		int num_last_2 = (last_three / 10) % 10;
		int num_last_3 = last_three % 10;


		int sum_first_num = num_first_1 + num_first_2 + num_first_3;
		int sum_last_num = num_last_1 + num_last_2 + num_last_3;

		if (sum_first_num == sum_last_num)
		{
			cout << "\nYour number is lucky!" << endl;
		}

		else
		{
			cout << "\nYour number is not lucky!" << endl;
		}
	}

	_getch();
	return 0;
}

//var2
#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

int main()
{
    int number;

    cout << "Enter a six digit number to determine your lucky number -> ";
    cin >> number;

    if (number < 100000 || number > 999999)
    {
        cout << "\a\nTry again. You need to enter 6 digits..." << endl;
    }

    else
    {
        int first_three = number / 1000;
        int last_three = number % 1000;

        int sum_first = (first_three / 100) + ((first_three / 10) % 10) + (first_three % 10);
        int sum_last = (last_three / 100) + ((last_three / 10) % 10) + (last_three % 10);

        if (sum_first == sum_last)
        {
            cout << "\nYour number is lucky!" << endl;
        }

        else
        {
            cout << "\nYour number is not lucky!" << endl;
        }
    }

    _getch();
    return 0;
}