//This is an interactive program that implements a simple calcultor.
#include <iostream>
#include <iomanip>

using namespace std;

int option; int n1; int n2;

int main(){
    cout << "This program implements a calculator." << endl;
    cout << "Options: " << endl;
    cout << "1 - addition" << endl;
    cout << "2 - subtraction" << endl;
    cout << "3 - multiplication" << endl;
    cout << "4 - division" << endl;
    cout << "5 - toggle calculator type" << endl;
    cout << "6 - exit program" << endl;
    cout << "Please enter your option:" << endl;
    cin >> option ;

    switch(option){
        case 1 : {
            cout << "Enter first term: ";
            cin >> n1;
            cout << "Enter second term: ";
            cin >> n2;
            cout << "The sum is: ";
            cout << fixed << setprecision(15) << n1 + n2 ; 
            cout << endl;
        }
    }


}