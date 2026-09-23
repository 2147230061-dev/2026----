#include <iostream>
#include <cstring>
using namespace std;
struct Student
{
    char name[50];   
    int id;        
    float score;    
};
void input(Student *p)
{
    cin >> p->name;
    cin >> p->id;
    cin >> p->score;
}

void display(Student *p)
{
    cout << "ÐÕÃû£º" << p->name << endl;
    cout << "Ñ§ºÅ£º" << p->id << endl;
    cout << "³É¼¨£º" << p->score << endl;
}

int main()
{
    Student *stu = new Student;

    input(stu);    
    display(stu);  
    delete stu;     
    stu = NULL;

    return 0;
}

