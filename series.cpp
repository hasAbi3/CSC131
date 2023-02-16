// This program asks the user to enter an integer number, n, and computes certain mathematical series.
#include <iostream>
using namespace std;

int main(){
    int n;int s; int i;
    cout << "Enter an integer number: Enter an integer number: " ;
    cin >> n;
    i = 0;
    s = 0;
    
    for ( i=0 ; i < n+1 ; ++i){
        if (i%2 == 0){
            s -= i*i;
        }
        else {
            s += i*i;
        }
    }
     cout << "The value of the series is: " << s << endl;
}