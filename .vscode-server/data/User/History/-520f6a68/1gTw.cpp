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
    cout << "Enter the number of test scores: " ;
    cin >> num;

    Marksheet Student[stu];
    int *test_scores= new int [num];//{NOT USING DYNAMIC MEMORY}
    
    for (int i=0; i < stu; i++)
    {
    //float arrayptr[num];
    Student[i].tests = &test_scores[i];
    cout << " Enter student's name: " << endl;
    cin >> Student[i].name;
    cout << "Enter ID number of student " << i+1 << " : " ;
    cin >> Student[i].idnum;
    cout << "Enter the test scores of student " << i+1 << " : " ; 
    int total=0;
    for (int i=0; i < num; i++)
    {   
        cin >> test_scores[i] ;
        total += test_scores[i];
        int average = total / num;
        Student[i].average = average;
    }
    
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
    cout << "Student's name | ID number | Average score | Grade | " << endl;
    for (int i = 0 ; i < stu ; i++ )
    {
    cout << Student[i].name << " | " << Student[i].idnum <<  " | " << Student[i].average << " | " << Student[i].grade << " | " << endl;
    } 
    return 0;
}
