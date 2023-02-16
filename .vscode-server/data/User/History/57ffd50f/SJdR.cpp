// This program asks the user to enter an integer number, n, and computes certain mathematical series.
#include <iostream>
using namespace std;

int main(){
    int n;int s; int i;
    cout << "Enter an integer number: " ;
    cin >> n;
    
    
    for ( s = 0 ; i < n ; i++){
        if (i%2 == 0){
            s -= i*i;
        }
        else {
            s += i*i;
        }
    }
     cout << "The value of the series is: " << s << endl;
}