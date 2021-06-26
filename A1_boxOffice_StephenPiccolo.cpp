/*
Stephen Piccolo
CSC 205-52
Assignment 1 - Box Office
Purpose of Program: Calculate a theater's gross ticket sale amount, net profit,
and distributer charge based on the number of tickets sold
*/

// Must use iomanip and iostream headers to use cout, cin, left, right,
// setw, etc.
# include <iomanip>
# include <iostream>
using namespace std;

int main()
{
	// Define constants
	const double ADULT_TKTPRICE = 14.50;
	const double CHILD_TKTPRICE = 10.00;
	const double PERCENTAGE = 0.2;

	// Define AND initialize variables with blank value
	int ticketsAdult{};
	int ticketsChild{};
	double grossSales{};
	double netProfit{};
	double distributorCharge{};

	// Introduce user to the program and ask for confirmation to begin
	cout << "\nWelcome to the Box Office program. You will be asked to input\n"
		 << "the number of adult and child tickets sold, then the program \n"
		 << "will calculate the gross ticket sale amount, net profit, and\n"
		 << "the distributor charge.\n\n"
		 << "When you are ready, press enter to begin...\n\n";

	// Use cin to have the program wait for the user to hit enter
	char beginStroke1{};
	cin.get(beginStroke1);

	// Use cout to display the prompts, then use cin to assign the input data
	// to the correct variable.
	cout << "Number of Adult tickets:\n";
	cin >> ticketsAdult;
	cout << "\n\nNumber of Child tickets:\n";
	cin >> ticketsChild;

	// Display information in the same style as assignment instructions
	cout << "\n\nYou entered the following information:\n\n"
		 << setw(30) << left << "Number of Adult Tickets" << setw(7) <<
		 right << ":"
		 << ticketsAdult << "\n"
		 << setw(30) << left << "Number of Child Tickets" << setw(7) <<
		 right << ":"
		 << ticketsChild << "\n\n";

	// Wait for the user to hit enter again before calculating (must ignore
	// the newline character currently in keyboard buffer first)
	cout << "Press enter to show calculations...\n\n";
	cin.ignore();
    char beginStroke2{};
	cin.get(beginStroke2);

	// Calculate gross amount, net profit, and distributor charge with
	// basic math operators and assign values to correct variables
	grossSales = (ticketsAdult * ADULT_TKTPRICE) + (ticketsChild *
		CHILD_TKTPRICE);
	netProfit = grossSales * PERCENTAGE;
	distributorCharge = grossSales - netProfit;

	//Display information according to instructions on assignment
	system("cls");
	cout << "\n"
		<< "BOX OFFICE FINANCIAL INFORMATION\n\n"

		<< setw(25) << left << "Adult Tickets Sold:"
		<< setw(15) << left << ticketsAdult << "\n"
		<< setw(25) << left << "Child Tickets Sold:"
		<< setw(15) << left << ticketsChild << "\n\n"

		<< setw(25) << left << "Gross Sales Amount:"
		<< setw(15) << left << setprecision(2) << fixed << showpoint <<
		grossSales << "\n"
		<< setw(25) << left << "Net Profit:"
		<< setw(15) << left << setprecision(2) << fixed << showpoint <<
		netProfit << "\n"
		<< setw(25) << left << "Distributor Charges:"
		<< setw(15) << left << setprecision(2) << fixed << showpoint <<
		distributorCharge << "\n\n\n";

	cout << "Programmer Name: Stephen Piccolo\n" << endl;
	system("pause");

		return 0;
}
