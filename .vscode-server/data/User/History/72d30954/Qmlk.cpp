#include<iostream>

using namespace std;

int main(){
   
    int N; int M; int p;
    cout << "Enter the size of the array: " ;
    cin >> N;
    cin >> M;

    for (int i =0; i < N; i++)
    {
        cout << " Enter row " << i << " : ";
        for (int i= 0; i < M ; i++)
        {
        cin >> p  ;
        }
    }
    
    return 0; 
}