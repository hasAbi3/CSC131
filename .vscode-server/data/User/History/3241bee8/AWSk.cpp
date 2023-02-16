///This program will ask the user for the radius of a circle that has been inscribed in a
///square. Then it will calculate and print out: the diameter,circumference and area of the circle,
///perimeter and area of the square, and the difference between the area of the square and the area of the circle. 
#include<iostream>
using namespace std;

int main()
{
  float r; 

  cout << "This program computes values related to an inscribed circle. " << endl;
  cout << "Enter the value of the radius: " ;
  cin >> r ;
  cout << "The diameter of the circle is: " << 2*r << endl;
  cout << "The circumference of the circle is: " << 2*r*3.14f <<endl;
  cout << "The area of the circle is: " << 3.14f* r*r << endl;
  cout << "The perimeter of the square is: " << 4*r*2 << endl;
  cout << "The area of the square is: " << 2*r*2*r << endl;
  cout << "The difference between the area of the square and the circle is: " << (2*r*2*r) - (3.14f* r*r) << endl;

  return 0;


}
