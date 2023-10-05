#include<iostream>
using namespace std;

class mydate{
  int dd,mm,yy;
  public:
      mydate() { dd=1; mm=1; yy=1900;}
      mydate(int d) {dd=d ; mm=1 ; yy=1900;}
      mydate(int d, int m, int y) {
      dd = d;
      mm = m;
      yy = y;
      }
      void display()
      {
          cout<<"\n"<<dd<<" / "<<mm<<" / "<<yy;
      }
      mydate operator+(int r)
      {
          mydate res;
          res.dd = dd + r;
          res.mm = mm;
          res.yy = yy;
          return res;

      }

      mydate operator++(int d)
      {
          dd = dd+1;
          return *this;
      }

};


int main()
{
    mydate dd1(3,10,2023), dd2;

    dd1 + 3;     // dd1.operator+(3)

    dd1 = dd1 + 3;   // dd1.operator+(3)
    dd1.display();

    dd2 = dd1 + 4;   // dd2.operator+(4)
    dd2.display();

    dd2 = ++dd1;
    dd1.display();
    dd2.display();

    return 0;
}
