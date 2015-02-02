// Prep1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	bool clear = true;
	while (clear)
	{

		string productName[5] = { "refrigerators", "dishwashers", "chairs", "sofas", "bed" };
		double price[5] = { 145.00, 200.00, 45.00, 115.00, 350.00 };
		int productNum[5];
		int quantity[5];
		double months[5];
		double totalCost = 0;
		int itemTotal = 0;
		char choice = 'y';

		for (int i = 0; i < 5; i++)
		{
			cout << endl << "1 - " << productName[0] << ": " << "$" << price[0];
			cout << endl << "2 - " << productName[1] << ": " << "$" << price[1];
			cout << endl << "3 - " << productName[2] << ": " << "$" << price[2];
			cout << endl << "4 - " << productName[3] << ": " << "$" << price[3];
			cout << endl << "5 - " << productName[4] << ": " << "$" << price[4];

			cout << endl << "What is the products number(1-5)?: ";
			cin >> productNum[i];
			cout << endl << "What is the quantity of the order?: ";
			cin >> quantity[i];
			cout << endl << "How many months will it take to pay off?: ";
			cin >> months[i];
		}

		for (int i = 0; i < 5; i++)
		{
			cout << "Item: " << productName[(productNum[i] - 1)] << endl;
			cout << "Quantity: " << quantity[i] << endl;
			cout << "Length of payment in months: " << months[i] << endl;
			cout << "Monthly payment: $" << ((price[(productNum[i] - 1)] * quantity[i]) / months[i]) << endl;
			totalCost += (price[(productNum[i] - 1)] * quantity[i]);
			itemTotal += quantity[i];
			cout << endl;
		}
		cout << "press <Enter> to continue";
		cin.ignore();
		cin.ignore();

		cout << endl << endl;
		cout << "Total items count :" << itemTotal << endl;
		cout << "Total cost: " << totalCost << endl << endl;

		cout << "press <Enter> to continue";
		cin.ignore();
		cin.ignore();

		cout << "would you like to clear and calculate again?(y/n) :";
		cin >> choice;
		if (tolower(choice) != 'y')
		{
			clear = false;
		}
	}
	cout << "press <Enter> to continue";
	cin.ignore();
	cin.ignore();

	return 0;
}

