#include <iostream>
#include <string>

using namespace std;

struct Marksheet
{
    string name;
    long idnum;
    int *tests;
    float average;
    char grade;
};

int main()
{   
    int stu; int num;
    cout << "Enter the number of students: " ;
    cin >> stu;
    cout << "\nEnter the number of test scores: " ;
    cin >> num;

    Marksheet Student[stu];
    int *test_scores= new int [num];
    
    for (int i=0; i < stu; i++)
    {
    Student[i].tests = &test_scores[i];
    cout << "\nEnter student " << i+1 << " name: ";
    cin >> Student[i].name;
    cout << "Enter ID number of student " << i+1 << " : " ;
    cin >> Student[i].idnum;
    cout << "Enter the test scores of student " << i+1 << " : " ; 
    int total=0;
    for (int i=0; i < num; i++)
    {   
        cin >> test_scores[i] ;
        if ( test_scores[i] <= 0)
        {cout << "Invalid Input" << endl;
        cout << "Enter again" << endl ;
        cin >> test_scores[i] ;}
        else 
        {total += test_scores[i];}
    }
    int average = total / num;
    Student[i].average = average;
    
    if (Student[i].average >= 91 && Student[i].average <= 100)
    {
        Student[i].grade= 'A';    
    }
    if (Student[i].average >= 81 && Student[i].average <= 90)
    {
        Student[i].grade= 'B'; 
    }
    if (Student[i].average >= 71 && Student[i].average <= 80)
    {
        Student[i].grade= 'C'; 
    }
    if (Student[i].average >= 61 && Student[i].average <= 70)
    {
        Student[i].grade= 'D'; 
    }
    if (Student[i].average <=60)
    {
        Student[i].grade= 'F'; 
    }
    }

    for (int i = 0 ; i < stu ; i++ )
    {
        cout << "Student's name: " << Student[i].name << endl;
        cout << "ID number: " << Student[i].idnum << endl;
        cout <<  "Average score: " <<  Student[i].average << endl;
        cout << "Grade: " << Student[i].grade << endl << endl ;
    }

    return 0;
}
