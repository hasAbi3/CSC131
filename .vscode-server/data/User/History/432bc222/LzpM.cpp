// This program switches the values stored in three integer variables.
#include <iostream>
using namespace std;


int rotate_left(int arr[3]= {1, 2 ,3}, int *p ,int *q, int *r)
{
*p = a[0] ;
*q = a[1];
*r = a[2];

p = a[1];
q = a[2];
r = a[0];
cout << "After calling the function, the value of three integer variables are:" << *p << " " << *q << " " << *r << endl; 
return 0;
}


int main(){
int i = 1, j = 2, k = 3;
cout << "Before calling the function, the value of three integer variables are:" << i << " " << j << " " << k << endl; 
rotate_left(&p, &q, &r);

return 0;
}