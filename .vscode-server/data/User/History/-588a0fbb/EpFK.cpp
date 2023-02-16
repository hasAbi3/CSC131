// This program will input American money and convert it to foreign currency
// ABISHA GHIMIRE
#include <iostream> 
#include <iomanip> 
using namespace std;

float dollars; float euros; float pesos; float yen;
const double One_dollar= 1.06pesos;


// Prototypes of the functions
void convertMulti(float dollars, float& euros, float& pesos);
void convertMulti(float dollars, float& euros, float& pesos, float& yen); 
float convertToYen(float dollars);
float convertToEuros(float dollars); 
float convertToPesos(float dollars);

int main (){

cout << fixed << showpoint << setprecision(2);

cout << "Please input the amount of American Dollars you want converted to euros and pesos" << endl; 
cin >> dollars;

// Fill in the code to call convertMulti with parameters dollars, euros, and pesos
convertMulti( dollars, euros, pesos);

// Fill in the code to output the value of those dollars converted to both euros and pesos
cout << "$ " << dollars << " is converted to " << euros << " euros and " << pesos << " pesos.";

cout << "Please input the amount of American Dollars you want converted to euros, pesos and yen" << endl;
cin >> dollars;

// Fill in the code to call convertMulti with parameters dollars, euros, pesos and yen
convertMulti( dollars, euros, pesos, yen);

// Fill in the code to output the value of those dollars converted to euros, pesos and yen
cout << "$ " << dollars << " is converted to " << euros << " euros, " << pesos << " pesos and " << yen << " yen." << endl  ;
 

cout << "Please input the amount of American Dollars you want converted to yen" <<endl;
cin >> dollars;

// Fill in the code to call convertToYen
convertToYen(dollars);

// Fill in the code to output the value of those dollars converted to yen
cout << "$ " << dollars << " is converted to " << yen << " yen. ";

cout << "Please input the amount of American Dollars you want converted to euros" << endl;
cin >> dollars;

// Fill in the code to call convert ToEuros
convertToEuros(dollars);

// Fill in the code to output the value of those dollars converted to euros
cout << "$ " << dollars << " is converted to " << euros << " euros. ";


cout << "Please input the amount of American Dollars you want converted to pesos " << endl;
cin >> dollars;

// Fill in the code to call convertToPesos
convertToPesos(dollars);

// Fill in the code to output the value of those dollars converted to pesos
cout << "$ " << dollars << " is converted to " << pesos << " pesos. ";

return 0;
}


// All of the functions are stubs that just serve to test the functions
// Replace with code that will cause the functions to execute properly



// **************************************************************************
//	convertMulti
//
//	task:	This function takes a dollar value and converts it to euros
//	and pesos
//	data in:	dollars
//	data out: euros and pesos
//
//	************************************************************************* 
void convertMulti(float dollars, float& euros, float& pesos)
{
cout << "The function convertMulti with dollars, euros and pesos "<< endl <<" was called with " << dollars << "dollars" << endl << endl; }

// ************************************************************************
//	convertMulti
//
//	task:	This function takes a dollar value and converts it to euros
//	pesos and yen
//	data in: dollars
//	data out: euros pesos yen
//
//	*********************************************************************** 
void convertMulti(float dollars, float& euros, float& pesos, float& yen)
{
cout << "The function convertMulti with dollars, euros, pesos and yen"<< endl << " was called with " << dollars << " dollars" << endl << endl;
}


// ****************************************************************************
//	convertToYen
//
//	task:	This function takes a dollar value and converts it to yen
//	data in:	dollars
//	data returned: yen
//
//	*************************************************************************** 
float convertToYen(float dollars)
{
cout << "The function convertToYen was called with " << dollars <<" dollars" << endl << endl;

return 0;
}

// ****************************************************************************
//	convertToEuros
//
//	task:	This function takes a dollar value and converts it to euros
//	data in:	dollars
//	data returned: euros
//
//	***************************************************************************
 

float convertToEuros(float dollars)
{
cout << "The function convertToEuros was called with " << dollars << " dollars" << endl << endl;

return 0;
}

// *****************************************************************************
//	convertToPesos
//
//	task:	This function takes a dollar value and converts it to pesos
//	data in:	dollars
//	data returned: pesos
//
//	**************************************************************************** 
float convertToPesos(float dollars)
{
cout << "The function convertToPesos was called with " << dollars << " dollars" << endl;

return 0;
}
