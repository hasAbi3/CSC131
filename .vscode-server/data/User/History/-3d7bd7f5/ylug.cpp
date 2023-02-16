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

int main()
{
// Fill in code to define a rectangle structure variable named box.
Rectangle box;

cout << "Enter the length of a rectangle: ";

// Fill in code to read in the length to the appropriate location
cin >> box.Dimensions.length;
cout << "Enter the width of a rectangle: ";

// Fill in code to read in the width to the appropriate location
cin >> box.Dimensions.width;
cout << endl << endl;

// Fill in code to compute the area and store it in the appropriate location
box.area = box.Dimensions.length * box.Dimensions.width;
// Fill in code to compute the perimeter and store it in the appropriate location
box.perimeter = 2 * (box.length + box.width) ;
cout << fixed << showpoint << setprecision(2);
cout << "The area of the rectangle is " << box.attributes.area << endl; 
cout << "The perimeter of the rectangle is " << box.attributes.perimeter << endl;

return 0;
}
