//This is an interactive program that implements a simple calcultor.
#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int option; 

int main(){
    cout << "This program implements a calculator." << endl;
    do{
        cout << "Options: " << endl;
        cout << "1 - addition" << endl;
        cout << "2 - subtraction" << endl;
        cout << "3 - multiplication" << endl;
        cout << "4 - division" << endl;
        cout << "5 - toggle calculator type" << endl;
        cout << "6 - exit program" << endl;
        cout << "Please enter your option:" << endl;
        cin >> option ;

    double n1; double n2;
        switch(option){
            case 1 : {
                cout << "Enter first term: ";
                cin >> n1;
                cout << "Enter second term: ";
                cin >> n2;
                cout << "The sum is: " << fixed << setprecision(15) << n1 + n2 << endl << endl; break;
            }
            case 2 : {
                cout << "Enter first term: ";
                cin >> n1;
                cout << "Enter second term: ";
                cin >> n2;
                cout << "The difference is: " << fixed<< setprecision(15) << n1 - n2 << endl << endl; break;
            }  
            case 3 : {
                cout << "Enter first term: ";
                cin >> n1;
                cout << "Enter second term: ";
                cin >> n2;
                cout << "The product is: " << fixed<< setprecision(15) << n1 * n2 << endl << endl; break;
            }
            case 4 : {
                cout << "Enter first term: ";
                cin >> n1;
                cout << "Enter second term: ";
                cin >> n2;
                if ( n2 == 0){
                    cout << "Cannot divide by zero!" << endl; break;
                }
                else{
                cout << "The quotient is: " << fixed<< setprecision(15) << n1 / n2 << endl << endl}; break ;
            }
            case 5 : {
                cout << "Calculator now works with integers." << endl;
            
            }
            case 6 : return 0; break;
            default :
            cout << "Invalid Option." << endl;
        }
    }
    while (option != 6);
        

}