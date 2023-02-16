// This program finds the average time spent programming by a student each day over a three day period.
// Abisha Ghimire

#include <iostream>
using namespace std;

int main(){
int numStudents; int n;
float numHours_b, float numHours_p, float total_b , float total_p, float average_b, float average_p ;
int student,day = 0;	// these are the counters for the loops

cout << "This program will find the average number of hours a day that a student studies biology and programming over a long weekend\n\n";
cout << "How many students are there ?" << endl << endl;
cin >> numStudents;
cout << "Enter the number of days in the long weekend" << endl << endl;
cin >> n;
// For programming:
for(student = 1; student <= numStudents; student++){
total_p = 0;
for(day = 1; day <= n; day++)
{
cout << "Please enter the number of hours spent on programming by student "<< student <<" on day " << day << "." << endl; 
cin >> numHours_p;
total_p = total_p + numHours_p;
}
average_p = total_p / n;
cout << endl;
cout <<	"The average number of hours per day spent programming by "<<"student " << student << " is " << average_p<<	endl << endl << endl;}
// for biology:
for(student = 1; student <= numStudents; student++){
total_b = 0;
for(day = 1; day <= n; day++)
{
cout << "Please enter the number of hours spent on studying biology by student "<< student <<" on day " << day << "." << endl; 
cin >> numHours_b;
total_b = total_b + numHours_b;
}
average_b = total_b / n;
cout << endl;
cout <<	"The average number of hours per day spent on biology by "<<"student " << student << " is " << average_b << endl << endl << endl;
}
if (average_p > average_b)
    cout << "On average, the student spent most of the time on programming " << endl;
    else 
    cout << "On average, the student spent most of the time on biology " << endl;
return 0;
}
