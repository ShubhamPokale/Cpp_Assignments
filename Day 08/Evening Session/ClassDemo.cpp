#include<iostream>
using namespace std;

class date {         //developer user
    private :           // can be accessed from with-in the class
    int dd, mm, yy;

    public:         // can be accessed from outside the class

      //setter and getter

      // setter are to set the values of data members
      void setDate(int dd)
      {
         this->dd = dd;
      }

      void setMonth(int d)
      {
          this->mm = d;
      }

      void setYear(int d)
      {
          this->yy = d;
      }

      int getDate()
      {
          return dd;
      }
      int getMonth()
      {
          return mm;
      }
      int getYear()
      {
          return yy;
      }
      //constructor
      //destructor
      //functions like add_day
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

int main()      // user of class  (programmer user)
{
    date obj, obj2;

    obj.read_date();
    obj.display_date();
    obj2.setDate(15);
    obj2.setMonth(10);
    obj2.setYear(2023);


    obj2.display_date();
    return 0;
}


