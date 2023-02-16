// This program asks the user to enter 4 integer numbers w, x, y, z and then evaluates the logical conditions.

#include<iostream>
using namespace std;

int main(){

int w; int x; int y; int z;
cout << "Enter 4 integers (w  x  y  z): " ; 
cin >> w; cin >> x; cin >> y; cin >> z ;

if (x<w && x<y && x<z){
cout << "Condition 1 is true."<< endl;}
else{
cout << "Condition 1 is false."<< endl;}

if ((w+x) <= (y+z)){
    cout << "Condition 2 is true." << endl;}
else{
    cout << "Condition 2 is false." << endl;}

if (w%2 ==0 && x%2==0 && y%2==0 && z%2==0){
    cout << "Condition 3 is true." << endl;}
else{
    cout << "Condition 3 is false." << endl;}
}