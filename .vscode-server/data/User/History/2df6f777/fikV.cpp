#include<iostream>
using namespace std;

int threshold_elements (int n, int a[])
{
    int count=0;
    for (int i=0; i< n ; i++)
    {
        if (a[i] >= 5)
        count ++;
    }
    return count;
}
int main()
{
    int arr[]= {4, 6,3,8,5};
    cout << "The number of elements greater than or equal to 5: " << threshold_elements(5, arr ) ;
}