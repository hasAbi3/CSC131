#include<iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
    float guess = 1.0;
    int n;
    cout << "Enter a number: " ;
    cin >> n;
    while ((fabs(guess * guess -n) > 0.000005))
    {
        guess = (guess+(n/guess))/2.0;
        cout << fixed << setprecision(5) << guess <<  endl;
    }
    cout << " square root is :" << guess;
    return 0; 
}