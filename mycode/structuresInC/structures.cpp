#include <iostream>
#include<string>
using namespace std;
struct student;

struct student
{
    string name;
    int uid;
    int Class;
    char section;
} student1, student2;

int main()
{
    
    struct student student3;

    student1.name = "Prabhjot Singh";
    student1.uid = 10293;
    student1.Class = 413;
    student1.section = 'A';

    student2.name = "Jaideep";
    student2.uid = 10897;
    student2.Class = 413;
    student2.section = 'B';

    student3.name = "Tarun Garg";
    student3.uid = 10893;
    student3.Class = 410;
    student3.section = 'A';

    cout << student1.name << endl
         << student1.uid << endl
         << student1.Class << endl
         << student1.section << endl
         << endl;

    cout << student2.name << endl
         << student2.uid << endl
         << student2.Class << endl
         << student2.section << endl
         << endl;

    cout << student3.name << endl
         << student3.Class << endl
         << student3.section << endl
         << student3.uid << endl
         << endl;


struct student student4;
    student4.name.compare("Sukhdev Singh");

    cout << student4.name;

    return 0;
}