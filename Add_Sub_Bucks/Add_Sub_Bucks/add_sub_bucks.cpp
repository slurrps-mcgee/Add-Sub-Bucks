/*
Author: Kenneth Lamb
Date: 10/03/2019
Filename: Add_Sub_Bucks
Purpose: To calculate two given values Addition and Subtraction then convert them from a change value into a dollars value and appropriate change.
Error Checking: None Yet!
Assumptions: That the 1st value will never be smaller than the second value as to not cause a negative number.
Input/ Output: Output sent to Screen Only
*/

#include <iostream>


using namespace std;

//These are the two given values for the program.
//Value 1 must be greater than value 2

//Value1 will be entered here
const int DOLLARSV1 = 8; //Dollars
const int QUARTERSV1 = 3; //Quarters
const int DIMESV1 = 4; //Dimes
const int NICKELSV1 = 0; //Nickels
const int PENNIESV1 = 4; // Pennies

//Value2 will be entered here
const int DOLLARSV2 = 3; //Dollars
const int QUARTERSV2 = 7; //Quarters
const int DIMESV2 = 3; //Dimes
const int NICKELSV2 = 2; //Nickels
const int PENNIESV2 = 3; //Pennies

//Default Penny values for each piece of money.
const int PDOLLAR = 100; //1 dollar is 100 pennies
const int PQUARTER = 25; //1 quarter is 25 pennies
const int PDIME = 10; //1 dime is 10 pennies
const int PNICKEL = 5; //1 nickel is 5 pennies
const int PENNY = 1; // 1 penny is equal to itself



int main()
{
	//This converts the values to change format by multiplying it by the penny amount of each piece of change as stated in the constants above.
	int value1 = DOLLARSV1 * PDOLLAR + QUARTERSV1 * PQUARTER + DIMESV1 * PDIME + NICKELSV1 * PNICKEL + PENNIESV1 * PENNY; //This converts value1

	int value2 = DOLLARSV2 * PDOLLAR + QUARTERSV2 * PQUARTER + DIMESV2 * PDIME + NICKELSV2 * PNICKEL + PENNIESV2 * PENNY; //This converts value2


	//This is where the calculations for addition and subtraction of the two variable values are conducted.

	//This is used to calculate the addition of the two values
	int add = value1 + value2;
	//This is used to calculate the subtraction of the two values
	int sub = value1 - value2;


	//Here we calculate the addition and subtraction.

	int change1; //This is the addition Change variable used to store the value of the addition.
	change1 = add; // Here we are equaling change1 to the addition Constant.

	int change2; //This is the subtraction change variable used to store the value of the subtraction.
	change2 = sub; //Here we are equaling change2 to the Subtraction constant.

	//Here we have the formatting of both the addition and subtraction into change formatting.


	//Used to format the change of the addition output
	int dollars1 = change1 / 100; //This will calculate how many dollars go into the change amount.

	change1 = change1 % 100; //This will calculate how much change is left after the dollars are taken out.

	int quarters1 = change1/25; //This will calculate how many quarters can go into the change amount.

	change1 = change1 % 25;  //This will calculate the change remaining after the quarters are taken out.
	int dimes1 = change1/10;  //This will calculate how many Dimes can go into the change amount.

	change1 = change1 % 10; //This will calculate the change remaining after the Dimes are taken out.

	int nickels1 = change1/5;//This will calculate how many nickels can go into the change amount.

	int pennies1 = change1 % 5;// Calucates the remainder of the pennies in the value

	
	//Used to format the change of the subtraction output
	int dollars2 = change2 / 100; //This will calculate how many dollars go into the change amount.

	change2 = change2 % 100; //This will calculate how much change is left after the dollars are taken out.

	int quarters2 = change2 / 25; //This will calculate how many quarters can go into the change amount.

	change2 = change2 % 25; //This will calculate the change remaining after the quarters are taken out.

	int dimes2 = change2 / 10; //This will calculate how many Dimes can go into the change amount.

	change2 = change2 % 10; //This will calculate the change remaining after the Dimes are taken out.

	int nickels2 = change2 / 5; //This will calculate how many nickels can go into the change amount.

	int pennies2 = change2 % 5; // Calucates the remainder of the pennies in the value

	

	//This will be what is outputted into the window when the program is ran.
	cout << "The two monetary values are:" << endl;

	cout << endl;

	cout << DOLLARSV1 << " dollars " << QUARTERSV1 << " quarters " << DIMESV1 << " dimes " << NICKELSV1<< " nickles " << PENNIESV1 << " pennies" << endl;

	cout << endl;

	cout << DOLLARSV2 << " dollars " << QUARTERSV2 << " quarters " << DIMESV2 << " dimes " << NICKELSV2 << " nickles " << PENNIESV2 << " pennies" << endl;

	cout << endl;

	cout << "The addition resultant: " << endl;

	cout << endl;

	cout << dollars1 << " dollars " << quarters1 << " quarters " << dimes1 << " dimes " << nickels1 << " nickles " << pennies1 << " pennies" << endl;

	cout << endl;

	cout << "The subtraction resultant: " << endl;

	cout << endl;

	cout << dollars2 << " dollars " << quarters2 << " quarters " << dimes2 << " dimes " << nickels2 << " nickles " << pennies2 << " pennies" << endl;

	cout << endl;


	system("pause");

	return 0;
}


//The two monetary values are :
//
//8 dollars 3 quarters 4 dimes 0 nickles 4 pennies
//
//3 dollars 7 quarters 3 dimes 2 nickles 3 pennies
//
//The addition resultant :
//
//14 dollars 1 quarters 1 dimes 0 nickles 2 pennies
//
//The subtraction resultant :
//
//4 dollars 0 quarters 0 dimes 0 nickles 1 pennies
//
//Press any key to continue . . .