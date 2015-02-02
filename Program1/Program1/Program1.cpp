// Program1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string furniture[] = { "Stoves", "Refridgerators", "Dishwashers", "Chairs", "Sofas" };
	double cost[] = { 200.0, 600.0, 300.0, 100.0, 300.0 };
	int quantity[] = { 0, 0, 0, 0, 0 };
	int months[] = { 0, 0, 0, 0, 0 };
	for (int i = 0; i < 5; i++)
	{
		cout << (i+1) << ". " << furniture[i] << ": " << cost[i] << endl;
	}
	string response = "a";
	cout << "Do you want to Calculate, Add new, Exit: ";
	getline(cin, response);
	int item = 0;
	int total = 0;
	int numItems = 0;
	while (response != "Exit")
	{
		system("CLS");
		if (response == "Calculate")
		{
			total = 0;
			numItems = 0;
			for (int i = 0; i < 5; i++)
			{
				if (quantity[i] > 0)
				{
					cout << "Item: " << furniture[i] << " $" << cost[i] << endl;
					cout << "Quantity: " << quantity[i] << endl;
					cout << "Months to pay: " << months[i] << endl;
					cout << "Monthly payment: $" << months[i] / 20.0 << endl;
					numItems += quantity[i];
					total += cost[i] * quantity[i];
				}
			}
			cout << endl << "Number of items: " << numItems << endl;
			cout << "Total pay: " << total << endl;
			cout << endl << "Do you want to Calculate, Add new, Exit: ";
			getline(cin, response);
		}
		else if (response == "Add new")
		{
			for (int i = 0; i < 5; i++)
			{
				cout << (i+1) << ". " << furniture[i] << ": " << cost[i] << endl;
			}
			cout << "What is the product number?(1-5) ";
			cin >> item;
			item--;
			cout << "How many do you want: ";
			cin >> quantity[item];
			cout << "Months to pay: ";
			cin >> months[item];
			cin.sync();
			cout << endl << "Do you want to Calculate, Add new, Exit: ";
			getline(cin, response);
		}
		else if (response != "Exit")
		{
			cout << response << " not recognized" << endl;
			cout << "Do you want to Calculate, Add new, Exit: ";
			getline(cin, response);
		}
	}
}