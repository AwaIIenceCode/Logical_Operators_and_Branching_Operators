#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	const int tank_capacity = 300;

	double first_distance, second_distance;
	double cargo_weight;

	cout << "Enter the weight of the load -> ";
	cin >> cargo_weight;

	cout << "Enter the distance between point A and B -> ";
	cin >> first_distance;

	cout << "Enter the distance between point B and C -> ";
	cin >> second_distance;

	if (cargo_weight < 500)
	{
		const int fuel_consumption = 1;

		double first_distance_fuel_consumption = first_distance * fuel_consumption;  //fuel consumption between A and B weighing up to 500kg
		double second_distance_fuel_consumption = second_distance * fuel_consumption; //fuel consumption between B and C weighing up to 500kg

		double fuel_remaining_after_first_flight = tank_capacity - first_distance_fuel_consumption; //residual after the first distance A and B

		if (first_distance_fuel_consumption > tank_capacity || second_distance_fuel_consumption > tank_capacity)
		{
			cout << "\a\nFlight is not possible!" << endl;
			return 0;
		}

		if (fuel_remaining_after_first_flight < second_distance_fuel_consumption)
		{
			double necessary_refueling = second_distance_fuel_consumption - fuel_remaining_after_first_flight; //required refueling to point C from point B

			cout << "\nThe airplane must be fueled to a minimum of: " << necessary_refueling << " liters!" << endl;
		}

		else if (fuel_remaining_after_first_flight > second_distance_fuel_consumption)
		{
			cout << "\nThe plane doesn't need to refuel!" << endl;
		}

		else
		{
			cout << "\nFuel is ample to spare, no refueling required, but no reserves!" << endl;
		}
	}

	else if (cargo_weight >= 500 && cargo_weight < 1000)
	{
		const int fuel_consumption = 4;

		double first_distance_fuel_consumption = first_distance * fuel_consumption;
		double second_distance_fuel_consumption = second_distance * fuel_consumption;

		double fuel_remaining_after_first_flight = tank_capacity - first_distance_fuel_consumption;

		if (first_distance_fuel_consumption > tank_capacity || second_distance_fuel_consumption > tank_capacity)
		{
			cout << "\a\nFlight is not possible!" << endl;
			_getch();
			return 0;
		}

		if (fuel_remaining_after_first_flight < second_distance_fuel_consumption)
		{
			double necessary_refueling = second_distance_fuel_consumption - fuel_remaining_after_first_flight;

			cout << "\nThe airplane must be fueled to a minimum of: " << necessary_refueling << " liters!" << endl;
		}

		else if (fuel_remaining_after_first_flight > second_distance_fuel_consumption)
		{
			cout << "\nAn airplane doesn't need to refuel!" << endl;
		}

		else
		{
			cout << "\nThere is enough fuel to spare, no refueling required, but no reserves!" << endl;
		}
	}

	else if (cargo_weight >= 1000 && cargo_weight < 1500)
	{
		const int fuel_consumption = 7;

		double first_distance_fuel_consumption = first_distance * fuel_consumption;
		double second_distance_fuel_consumption = second_distance * fuel_consumption;

		double fuel_remaining_after_first_flight = tank_capacity - first_distance_fuel_consumption;

		if (first_distance_fuel_consumption > tank_capacity || second_distance_fuel_consumption > tank_capacity)
		{
			cout << "\a\nFlight is not possible!" << endl;
			_getch();
			return 0;
		}

		if (fuel_remaining_after_first_flight < second_distance_fuel_consumption)
		{
			double necessary_refueling = second_distance_fuel_consumption - fuel_remaining_after_first_flight;

			cout << "\nThe airplane must be fueled to a minimum of: " << necessary_refueling << " liters!" << endl;
		}

		else if (fuel_remaining_after_first_flight > second_distance_fuel_consumption)
		{
			cout << "\nThe plane doesn't need to refuel!" << endl;
		}

		else
		{
			cout << "\nThere is enough fuel to spare, no refueling required, but no reserves!" << endl;
		}
	}

	else if (cargo_weight >= 1500 && cargo_weight < 2000)
	{
		const int fuel_consumption = 9;

		double first_distance_fuel_consumption = first_distance * fuel_consumption;
		double second_distance_fuel_consumption = second_distance * fuel_consumption;

		double fuel_remaining_after_first_flight = tank_capacity - first_distance_fuel_consumption;

		if (first_distance_fuel_consumption > tank_capacity || second_distance_fuel_consumption > tank_capacity)
		{
			cout << "\a\nFlight is not possible!" << endl;
			_getch();
			return 0;
		}

		if (fuel_remaining_after_first_flight < second_distance_fuel_consumption)
		{
			double necessary_refueling = second_distance_fuel_consumption - fuel_remaining_after_first_flight;

			cout << "\nThe airplane must be fueled to a minimum of: " << necessary_refueling << " liters!" << endl;
		}

		else if (fuel_remaining_after_first_flight > second_distance_fuel_consumption)
		{
			cout << "\nThe plane doesn't need to refuel!" << endl;
		}

		else
		{
			cout << "\nFuel is ample to spare, no refueling required, but no reserves!" << endl;
		}
	}

	else
	{
		cout << "\a\nThe weight of the cargo may not exceed 2t." << endl;
	}

	_getch();
	return 0;
}

//After some thought I came to the second option, which is much shorter and easier!

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "en");

	const int tank_capacity = 300;
	double first_distance, second_distance;
	double cargo_weight;

	cout << "Enter cargo weight -> ";
	cin >> cargo_weight;

	cout << "Enter distance between points A and B -> ";
	cin >> first_distance;

	cout << "Enter distance between points B and C -> ";
	cin >> second_distance;

	int fuel_consumption;

	if (cargo_weight < 500)
	{
		fuel_consumption = 1;
	}

	else if (cargo_weight >= 500 && cargo_weight < 1000)
	{
		fuel_consumption = 4;
	}

	else if (cargo_weight >= 1000 && cargo_weight < 1500)
	{
		fuel_consumption = 7;
	}

	else if (cargo_weight >= 1500 && cargo_weight < 2000)
	{
		fuel_consumption = 9;
	}

	else
	{
		cout << "\a\nCargo weight cannot exceed 2 tons." << endl;
		_getch();
		return 0;
	}

	double first_distance_fuel_consumption = first_distance * fuel_consumption;
	double second_distance_fuel_consumption = second_distance * fuel_consumption;

	if (first_distance_fuel_consumption > tank_capacity || second_distance_fuel_consumption > tank_capacity)
	{
		cout << "\a\nFlight is not possible!" << endl;
		_getch();
		return 0;
	}

	double fuel_remaining_after_first_flight = tank_capacity - first_distance_fuel_consumption;

	if (fuel_remaining_after_first_flight < second_distance_fuel_consumption)
	{
		double necessary_refueling = second_distance_fuel_consumption - fuel_remaining_after_first_flight;
		cout << "\nThe aircraft needs refueling of at least: " << necessary_refueling << " liters!" << endl;
	}

	else if (fuel_remaining_after_first_flight > second_distance_fuel_consumption)
	{
		cout << "\nRefueling is not needed for the aircraft!" << endl;
	}

	else
	{
		cout << "\nFuel is just enough, no refueling is needed, but there are no reserves!" << endl;
	}

	_getch();
	return 0;
}