//This program asks the user to enter an NxM dimensional array with single digit values and counts the number of times a digit appears in the array
#include <iostream>
using namespace std;
int main(){

    int a;
    int b; 
     
    int n; int m;
    cout << "This program counts occurrences of digits 0 through 9 in an NxM array." << endl;
    cout << "Enter the size of the array (Row Column): " ;
    cin >> a;
    cin >> b;
    int arr[a][b] ;

    for (int i= 0; i < a ; i++){
        cout << "Enter row " << i << " : " ;
        for ( int i= 0; i < b-1 ; i++){
            int brr[m] ;
            cin >> brr[m] ;
        }
        cin >> n ;
    }
    cout << "Total counts for each digit:" << endl;
    

}