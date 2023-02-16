#include <iostream>
#include <string>

using namespace std;

struct Marksheet
{
    string name;
    long idnum;
    double *tests;
    float average;
    char grade;
};

int main()
{   Marksheet Student;
    int stu; int num;
    cout << "Enter the number of students: " ;
    cin >> stu;
    cout << "Enter the number of test scores: " ;
    cin >> num;

    double arrayptr [num];
    //arrayptr = new double[num];{NOT USING DYNAMIC MEMORY}
    
    Student.tests = &arrayptr[num];
    for (int i=0; i < stu; i++)
    {
    //float arrayptr[num];
    cout << "Enter ID number of student " << i+1 << " : " ;
    cin >> Student.idnum;
    cout << "Enter the test scores of student " << i+1 << " : " ; 
    for (int i=0; i < num; i++)
    {
        cin >> Student.tests[i] ;
    }
    for (int i=0; i<num; i++) 
        cout << Student.tests[i]; 
        delete [] arrayptr;
    }
    
    return 0;
}
