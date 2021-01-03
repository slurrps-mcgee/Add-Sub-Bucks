/*



*/

#include <iostream>
#include <string>

using namespace std;

//These are the two given values for the program.
//Value 1 must be greater than value 2
const float VALUE1 = 9.19f;

const float VALUE2 = 5.45f;



int main()
{

	//These two variables are used to calculate the provided constant values from floats to integers for the change formatting below.
	int value1 = VALUE1 * 100;
	int value2 = VALUE2 * 100;

	//This is where the calculations for addition and subtraction of the two Constant values are conducted.
	//This is used to calculate the addition of the two values
	float add = VALUE1 + VALUE2;
	//This is used to calculate the subtraction of the two values
	float sub = VALUE1 - VALUE2;
	
	//Here we calculate the addition and subtraction into a integer number instead of a float.
	//This is used to generate the change value of the addition
	int change1;
	change1 = add * 100;
	//This is used to generate the change value of the subtraction
	int change2;
	change2 = sub * 100;

	//Here we have the formatting of both the addition and subtraction into change formatting.
	//Used to calculate the change of the addition output
	int dollars1 = change1 / 100;
	change1 = change1 % 100;
	int quarters1 = change1/25;
	change1 = change1 % 25;
	int dimes1 = change1/10;
	change1 = change1 % 10;
	int nickles1 = change1/5;
	int pennies1 = change1 % 5;
	
	//Used to calculate the change of the subtraction output
	int dollars2 = change2 / 100;
	change2 = change2 % 100;
	int quarters2 = change2 / 25;
	change2 = change2 % 25;
	int dimes2 = change2 / 10;
	change2 = change2 % 10;
	int nickles2 = change2 / 5;
	int pennies2 = change2 % 5;

	//This area is used to display the two values given in the Constants on top of the program in change formatting.
	//Used to display VALUE1 in change format
	int value1Dollar = value1 / 100;
	value1 = value1 % 100;
	int value1Quarter = value1 / 25;
	value1 = value1 % 100;
	int value1Dime = value1 / 10;
	value1 = value1 % 100;
	int value1Nickel = value1 / 5;
	int value1Penny = value1 % 5;

	//Used to display VALUE2 in change format
	int value2Dollar = value2 / 100;
	value2 = value2 % 100;
	int value2Quarter = value2 / 25;
	value2 = value2 % 100;
	int value2Dime = value2 / 10;
	value2 = value2 % 100;
	int value2Nickel = value2 / 5;
	int value2Penny = value2 % 5;


	//This will be what is outputted into the window when the program is ran.
	cout << "The two monetary values are:" << endl;

	cout << endl;

	cout << value1Dollar << " dollars " << value1Quarter << " quarters " << value1Dime<< " dimes " << value1Nickel << " nickles " << value1Penny << " pennies" << endl;

	cout << endl;

	cout << value2Dollar << " dollars " << value2Quarter << " quarters " << value2Dime << " dimes " << value2Nickel << " nickles " << value2Penny << " pennies" << endl;

	cout << endl;

	cout << "The addition resultant: " << endl;

	cout << endl;

	cout << dollars1 << " dollars " << quarters1 << " quarters " << dimes1 << " dimes " << nickles1 << " nickles " << pennies1 << " pennies" << endl;

	cout << endl;

	cout << "The subtraction resultant: " << endl;

	cout << endl;

	cout << dollars2 << " dollars " << quarters2 << " quarters " << dimes2 << " dimes " << nickles2 << " nickles " << pennies2 << " pennies" << endl;


	system("pause");
	return 0;
}