// This program guess the square root of a number.
#include<iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main(){

double old_guess;double n; double new_guess;

cout << "Enter a number: ";
cin >> n;
old_guess = 1 ;
new_guess =1;

do{
    new_guess = (old_guess + (n / old_guess)) / 2.;
    cout << fixed<< setprecision(5)<< new_guess <<  endl;
    old_guess = new_guess;}
    
    while (fabs((new_guess)*(new_guess) - n) > 1e-5);
}