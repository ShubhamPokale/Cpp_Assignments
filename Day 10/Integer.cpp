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

    int get_value()
    {
        return *ptr;
    }

    void set_value(int n)
    {
        *ptr = n;
    }


    void display()
    {
       cout<<"\n Value = "<<*ptr;
    }

    const Integer & operator =(Integer const &I)
    {
        delete ptr;
        ptr = new int;
        *ptr = *I.ptr;
        return *this;
    }

    Integer operator +(Integer const & I)
    {
        return Integer(*ptr + *I.ptr);
        //Integer res;
        //*res.ptr  =*ptr + *I.ptr;
        //return res;
    }


};


int main()
{
   Integer obj1(5);
   Integer obj2(obj1);
   Integer obj3;

   obj1.display();
   obj2.display();

   obj2 = obj1;

   obj3 = obj2 + obj1;  // obj2.operator +(obj1)

   obj1.display();
   obj2.display();
   obj3.display();

   return 0;
}
