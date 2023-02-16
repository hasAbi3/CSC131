//This is an interactive program that implements a simple calcultor.
#include <iostream>
#include <iomanip>

using namespace std;

int option; 
bool mode = 0;
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
    int n3; int n4;
        switch(option){
            case 1 : {
                if (mode == 0){
                cout << "Enter first term: ";
                cin >> n1;
                cout << "Enter second term: ";
                cin >> n2;
                cout << "The sum is: " << fixed << setprecision(15) << n1 + n2 << endl << endl; break;}
                else{
                cout << "Enter first term: ";
                cin >> n3;
                cout << "Enter second term: ";
                cin >> n4;
                cout << "The sum is: " << n3 + n4 << endl << endl; break;}
            }
            case 2 : {
                if (mode == 0){
                cout << "Enter first term: ";
                cin >> n1;
                cout << "Enter second term: ";
                cin >> n2;
                cout << "The difference is: " << fixed<< setprecision(15) << n1 - n2 << endl << endl; break;}
                else{
                cout << "Enter first term: ";
                cin >> n3;
                cout << "Enter second term: ";
                cin >> n4;
                cout << "The difference is: " << n3 - n4 << endl << endl; break;}    
            }
            case 3 : {
                if (mode == 0){
                cout << "Enter first term: ";
                cin >> n1;
                cout << "Enter second term: ";
                cin >> n2;
                cout << "The product is: " << fixed<< setprecision(15) << n1 * n2 << endl << endl; break;}
                else{
                cout << "Enter first term: ";
                cin >> n3;
                cout << "Enter second term: ";
                cin >> n4;
                cout << "The product is: " << n3 * n4 << endl << endl; break;}    
            }
            case 4 : {
                if (mode == 0){
                cout << "Enter first term: ";
                cin >> n1;
                cout << "Enter second term: ";
                cin >> n2;
                if ( n2 == 0){
                    cout << "Cannot divide by zero!" << endl; break;
                }
                else{
                cout << "The quotient is: " << fixed<< setprecision(15) << n1 / n2 << endl << endl; } break;}
                else{
                cout << "Enter first term: ";
                cin >> n3;
                cout << "Enter second term: ";
                cin >> n4;
                if ( n4 == 0){
                    cout << "Cannot divide by zero!" << endl; break;
                }
                else{
                cout << "The quotient is: " << n3 / n4 << endl << endl; break;}    }
            }
            case 5 : {
                mode =! mode ;
                cout << "Calculator now works with integers." << endl; break;
            }
            case 6 : return 0; break;
            default :
            cout << "Invalid Option." << endl;
        }
    }
    while (option != 6);
}