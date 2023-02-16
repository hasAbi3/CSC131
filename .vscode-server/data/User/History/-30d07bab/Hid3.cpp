// This program guess the square root of a number.
#include<iostream>
#include <math.h>
using namespace std;
double main(){

double old_guess;double n;double new_guess;

cout << "Enter a number: ";
cin >> n;
old_guess = 1.00000 ;

do{
    new_guess = (old_guess + (n / old_guess)) / 2.000000;
    cout << new_guess << endl;
    old_guess = new_guess;}
    
    while (abs((new_guess)*(new_guess) - n) >= 1e-5);


}