// This program guess the square root of a number.
#include<iostream>
#include <math.h>
//#include <iomanip>
using namespace std;
int main(){

long double old_guess; long double n; long double new_guess;

cout << "Enter a number: ";
cin >> n;
old_guess = 1 ;
new_guess = 1 ;

while (fabs((new_guess)*(new_guess) - n) >= 1e-5){
    cout << new_guess <<  endl;
    new_guess = (old_guess + (n / old_guess)) / 2;
    old_guess = new_guess;}

cout << "Estimated square root of " << n << ": " << old_guess << endl;
    
}