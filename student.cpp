#include "student.h"
#include<iostream>
using namespace std;

student::student()
{
    rno = 0;
    name ="Default";
    marks = 20;
}


student::student(int r, mydate dd1,string nm, mydate dd2, float m):rno(r),dob(dd1),name(nm),doj(dd2),marks(m)
{

}
void student::display()
{
    cout<<"\n Rno = "<<rno;
    cout<<"\n Name = "<<name;
    cout<<"\n Date of Birth :";
    dob.display();
    cout<<"\n Date of joining : ";
    doj.display();
    cout<<"\n Marks = "<<marks;
}

void student::setName(string nm)
{
    name = nm;
}

int student::getRno()
{
    return rno;
}
