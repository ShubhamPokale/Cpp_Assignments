#include"mydate.h"
#include<iostream>
using namespace std;
#ifndef STUDENT_H
#define STUDENT_H
class student{
    int rno;
    mydate doj;
    string name;
    mydate dob;
    float marks;
  public:
      student();
      student(int, mydate,string , mydate, float);
      void display();
      void setName(string );
      int getRno();
};
#endif // STUDENT_H
