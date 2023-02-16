#include <iostream>
using namespace std;

int main(){
    int n;

    cout << "How many tellers worked at Nation's Bank during each of the last three years?"
    cin >> n;

    for (int i=1 ; i <= n, i++){
        for (int year=1 ; year <= 3 ; year ++){
        cout << "How many days was teller " << i << " out sick during year " << year << " ?" << endl;
        cin >> days ;
        days += days ;
    }
    cout << "The " << n << " tellers were out sick for a total of " << days << " days during the last 3 years." << endl;

}