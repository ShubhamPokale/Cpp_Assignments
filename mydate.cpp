
#include "mydate.h"
#include<iostream>
using namespace std;

mydate::mydate() { dd=1 ; mm= 1; yy=1900;}
mydate::mydate(int a, int b, int c)
{
    dd = a;
    mm = b;
    yy = c;
}
   mydate::mydate(mydate &m)
   {
      dd = m.dd;
      yy = m.yy;
      mm = m.mm;
    }
void mydate::display()
{
    cout<<"\n"<<dd<<" / "<<mm<<" / "<<yy;
}


