#include<iostream>

using namespace std;

int main(){
   
    int n;
    cout << "Enter a number: " ;
    cin >> n;
    for (int i =1 ; i <= n ; i++)
    {
        int sum= 0;
        if (i % 2 != 0)
        sum = i *i + sum;
        else
        sum = sum - i*i;
        cout << sum; 
    }
    return 0; 
}