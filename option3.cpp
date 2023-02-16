#include <iostream>
using namespace std;

int main(){
    int n;
    int days; int total=0 ;
    cout << "How many tellers worked at Nation's Bank during each of the last three years?" << endl;
    cin >> n;

    for (int i=1 ; i <= n; i++){
        for (int year=1 ; year <= 3 ; year++){
        cout << "How many days was teller " << i << " out sick during year " << year << " ?" << endl;
        cin >> days ;
        total = days + total ;
    }}
    cout << "The " << n << " tellers were out sick for a total of " << total << " days during the last 3 years." << endl;

}