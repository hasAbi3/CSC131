// This program switches the values stored in three integer variables.
#include <iostream>
using namespace std;


int rotate_left(int arr[3], int *p ,int *q, int *r)
{

*p = arr[0] ;
*q = arr[1];
*r = arr[2];

*p = arr[1];
*q = arr[2];
*r = arr[0];
cout << "After calling the function, the value of three integer variables are:" << *p << " " << *q << " " << *r << endl; 
return 0;
}


int main(){
int i = 1, j = 2, k = 3;
int brr[3];
int *p ;int *q; int *r;
cout << "Before calling the function, the value of three integer variables are:" << i << " " << j << " " << k << endl; 
rotate_left( brr, &i, &j, &k);

return 0;
}