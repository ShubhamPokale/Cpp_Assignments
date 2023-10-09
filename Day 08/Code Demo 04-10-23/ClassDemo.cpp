#include<iostream>
using namespace std;

class date {
    private :
    int dd, mm, yy;

    public:
      void read_date()
      {
          cout<<"\n Enter date dd mm yy";
          cin>>dd;
          cin>>mm;
          cin>>yy;
      }
      void display_date()
      {
          cout<<"\n"<<dd<<" / "<<mm<<" / "<<yy;
      }

};

int main()
{
    date obj, obj2;
    obj.read_date();
    obj.display_date();

    obj2.display_date();
    return 0;
}


