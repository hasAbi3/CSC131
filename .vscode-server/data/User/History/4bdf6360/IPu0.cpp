// This program asks the value of the length of the sides of a right triangle 
/// and computes and displays the area and the perimeter of the triangle.
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  float leg_a;
  float leg_b;
  float leg_c;
  float area;
  
  cout << "This program computes the area and perimeter of a right triangle." << endl;
  cout << "Enter the value of leg a:" << endl;
  cin >> leg_a;

  cout << "Enter the value of leg b:" << endl;
  cin >> leg_b;

  area = (leg_a * leg_b)/2 ;
  cout << "The area of the triangle is " << area << endl;

  






  return 0;
}