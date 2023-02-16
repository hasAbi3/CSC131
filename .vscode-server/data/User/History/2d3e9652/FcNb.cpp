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
    int count[10]={0};

    int brr[b];
    int x;
    for (int i= 0; i < a ; i++){
        cout << "Enter row " << i << " : " ;
        for (int j= 0; j < b ; j ++){
        cin >> x ;
        arr[i][j] =x;
        count[x]++;

        }
    }
    cout<<"Total counts for each digits"<<endl;

    for(int i=0; i<10;i++){
        cout<<"Digit "<<i<<" appears "<<count[i]<<" times."<<endl;
    }
    cout<<"Printed digits directly from 1d array."<<endl;
    for(int i=0; i<10;i++){
        cout<<count[i]<<" ";

    }

    
    
    
    

}