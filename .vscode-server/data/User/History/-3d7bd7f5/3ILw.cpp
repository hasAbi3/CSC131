#include <iostream> 
#include <iomanip>

using namespace std;
 
// This program uses a structure to hold data about a rectangle
// It calculates the area and perimeter of a box

// ABISHA GHIMIRE

// Fill in code to declare a structure named dimensions that contains 2 float members, length and width
struct Dimensions
{
    float length;
    float width;
};

// Fill in code to declare a structure named rectangle that contains 3 members, area, perimeter, and sizes. 
// area and perimeter should be floats, whereas sizes should be a dimensions structure variable
struct Rectangle
{
    float area;
    float perimeter;
    Dimensions sizes;
};
Rectangle box;

//Function to compute the area
float computeArea (Dimensions p)
{
   float A =p.length* p.width ;
   return A;
}
//Function to compute the perimeter
float computePerimeter(Dimensions p)
{
    float P = 2 * (p.length + q.width);
    return P;
}

int main()
{
// Fill in code to define a rectangle structure variable named box.
Rectangle box;

cout << "Enter the length of a rectangle: ";

// Fill in code to read in the length to the appropriate location
cin >> box.sizes.length;
cout << "Enter the width of a rectangle: ";

// Fill in code to read in the width to the appropriate location
cin >> box.sizes.width;
cout << endl << endl;

cout << fixed << showpoint << setprecision(2);
cout << "The area of the rectangle is " << computeArea(box.sizes) << endl; 
cout << "The perimeter of the rectangle is " << computePerimeter(box.sizes) << endl;

return 0;
}
