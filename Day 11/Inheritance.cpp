#include<iostream>
using namespace std;

class Base {
  int i;

  protected :
     int pr;
  public :

  Base() { cout<<"\n base default constructor";  i = 0;   }
  Base(int a) { cout<<"\n base param constructor"; i = a; }
  void display() { cout<<"\n i = "<<i ; }
  int get_i() { return i;}

  ~Base() { cout<<"\n base destructor";}
};


class derived : private Base
{
  int j;
  public:
    derived(){ cout<<"\n derived default constructor"; j = 0; }
    derived(int b){cout<<"\n derived param constructor"; j = b ;}
    derived(int a, int b) : Base(a)
    {
        cout<<"\n derived 2 param constructor"; j = b ;
    }
    void display(int k){
        cout<<"\n pr = "<<pr;
        cout<<"\n i = "<<get_i()<<" j = "<<j; }

    ~derived() {cout<<"\n derived destructor";}
};

class derived2: public derived{
   public:
       void fun()
       {
          cout<<"\n pr = "<<pr;
       }



};
int main()
{
   derived2 obj;
   obj.display();

   obj.display_j();
   obj.fun();
   return 0;
}
