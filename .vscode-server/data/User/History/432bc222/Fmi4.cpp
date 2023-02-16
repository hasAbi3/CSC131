// This program switches the values stored in three integer variables.
#include <iostream>
using namespace std;

int *p , *q, *r;
int rotate_left(*p , *q, *r)
{
r = *p;
q = *r;
p = *q;
cout << "After calling the function, the value of three integer variables are:" << *q << " " << *r << " " << *p << endl; 
return 0;
}


int main(){
int i = 1, j = 2, k = 3;
cout << "Before calling the function, the value of three integer variables are:" << i << " " << j << " " << k << endl; 
rotate_left(*i,*j,*k);

return 0;
}