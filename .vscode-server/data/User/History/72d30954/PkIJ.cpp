#include<iostream>
#include <math.h>
using namespace std;

int main(){
    float guess = 1.0;
    int n;
    cout << "Enter a number: " ;
    cin >> n;
    while (fabs(guess * guess -n) >= 1e-5)
    {
        guess = (guess+(n/guess))/2.0;
        cout << guess<<  endl;
    }
    return 0; 
}