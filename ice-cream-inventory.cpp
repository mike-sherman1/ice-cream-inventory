// midtermproject.cpp : Ice Cream Inventory Midterm Project
// Author: Mike Sherman and Paula Lindley
// Warren County Community College
// Date Modified: Thursday November 20, 2014 at 5:45 PM
// Midterm Project

//TO DO: format

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const float NJ_TAX_RATE = 0.07;
	int menuChoice, amountTendered, exitChoice, vanillaCount, chocolateCount, strawberryCount, vanillaSubtotal, chocolateSubtotal, strawberrySubtotal, orderSubtotal, salesTax, grandTotal, changeDue;
	menuChoice = amountTendered = exitChoice = vanillaCount = chocolateCount = strawberryCount = vanillaSubtotal = chocolateSubtotal = strawberrySubtotal = orderSubtotal = salesTax = grandTotal = changeDue = 0;
	while (menuChoice != -1) {
		system("cls");
		cout << "Please select the ice cream flavor you wish to order by inputting 1, 2, or 3:" << endl << endl << "1: Vanilla" << endl << "2: Chocolate" << endl << "3: Strawberry" << endl << endl;
		cin >> menuChoice;
		switch (menuChoice)
		{
		case 1:
			vanillaCount += 1;
			cout << endl << "Vanilla cone ordered!" << endl << endl;
			break;
		case 2:
			chocolateCount += 1;
			cout << endl << "Chocolate cone ordered!" << endl << endl;
			break;
		case 3:
			strawberryCount += 1;
			cout << endl << "Strawberry cone ordered!" << endl << endl;
			break;
		default:
			cout << endl << "Invalid selection! Please try again." << endl << endl;
		}   //end switch

		cout << "Enter 1 to order another cone, or enter -1 to continue to payment." << endl << endl;
		cin >> menuChoice;
	}    //end while


	vanillaSubtotal = vanillaCount * 2;
	chocolateSubtotal = chocolateCount * 2;
	strawberrySubtotal = strawberryCount * 2;
	system("cls");
	cout << setfill('*') << setw(60) << "*" << endl;
	cout << "*" << setfill(' ') << setw(58) << "Welcome to the Ice Cream Inventory v. 1.0        " << "*" << endl;
	cout << "*" << setfill(' ') << setw(58) << "Created by Mike Sherman and Paula Lindley         " << "*" << endl;
	cout << "*" << setfill(' ') << setw(58) << "at Warren County Community College            " << "*" << endl;
	cout << "*" << setfill(' ') << setw(58) << "Date Created: Thurs. Nov. 20th, 2014           " << "*" << endl;
	cout << setfill('*') << setw(60) << "*" << endl << endl;

	cout << setfill(' ') << setw(58) << "Your order                         " << endl;
	cout << setfill('-') << setw(60) << "-" << endl << endl;
	cout << "Vanilla cones ordered: " << vanillaCount << ", $" << vanillaSubtotal << endl;
	cout << "Chocolate cones ordered: " << chocolateCount << ", $" << chocolateSubtotal << endl;
	cout << "Strawberry cones ordered: " << strawberryCount << ", $" << strawberrySubtotal << endl << endl;
	cout << setfill('-') << setw(60) << "-" << endl << endl;
	
	orderSubtotal = vanillaSubtotal + chocolateSubtotal + strawberrySubtotal;
	cout << "Order subtotal: $" << orderSubtotal << endl;
	
	salesTax = orderSubtotal * NJ_TAX_RATE;
	cout << "Sales tax: $" << salesTax << endl;

	grandTotal = orderSubtotal + salesTax;
	cout << "Grand total: $" << grandTotal << endl << endl;

	do 
	{
	cout << "Enter amount tendered:" << endl;
	cin >> amountTendered;
	changeDue = amountTendered - grandTotal; 
	
	} while (changeDue < 0)
	
	return 0;
}

void header() {
	cout << setfill('*') << setw(60) << "*" << endl;
	cout << "*" << setfill(' ') << setw(58) << "Welcome to the Ice Cream Inventory v. 1.0        " << "*" << endl;
	cout << "*" << setfill(' ') << setw(58) << "Created by Mike Sherman and Paula Lindley         " << "*" << endl;
	cout << "*" << setfill(' ') << setw(58) << "at Warren County Community College            " << "*" << endl;
	cout << "*" << setfill(' ') << setw(58) << "Date Created: Thurs. Nov. 20th, 2014           " << "*" << endl;
	cout << setfill('*') << setw(60) << "*" << endl << endl;
}

