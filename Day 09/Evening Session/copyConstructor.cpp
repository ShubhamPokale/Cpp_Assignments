#include<iostream>
using namespace std;

class Integer{
   int *ptr;

  public:

    Integer() { ptr = new int;  *ptr = 0; }

    Integer(int n) {
       cout<<"\n parameter constructor is called...";
       ptr = new int;
       *ptr = n;
    }

    ~Integer() { cout<<"\n Destructor is called..."; delete ptr; ptr = NULL; }

    Integer(Integer const &I)
    {
       cout<<"\n Copy constructor is called...";
       ptr = new int;
      *ptr = *I.ptr;
    }

    void display()
    {
       cout<<"\n Value = "<<*ptr;
    }
};


int main()
{
   Integer obj1(5);
   Integer obj2(obj1);

   obj1.display();
   obj2.display();


   obj2 = obj1;
   return 0;
}
