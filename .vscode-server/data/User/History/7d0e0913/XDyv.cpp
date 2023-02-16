#include <iostream> 
#include <iomanip>

using namespace std;
int main()
{
    int arr[5];
    cout << "enter array: ";
    for (int i =0; i < 5;i++){
    cin >> arr[i];}

    cout << arr[2] << endl;
    for (int i =0; i < 5;i++){
    cout << arr[i] << endl;}
    cout << arr[5];
}