#include<iostream>
using namespace std;

class A{

   public:
       void fun1();
       void fun2();

};

class B{

 public :
     void fun1();
     void fun3();
};

void A::fun1(){
   cout<<"\n fun1 of A is called..";
}

void A::fun2() {
   cout<<"\n fun2 of A is called..";
}

void B::fun1() {
   cout<<"\n fun1 of B is called..";
}

void B::fun3() {
   cout<<"\n fun3 of B is called..";
}
int main()
{
   A aobj;
   B bobj;

   aobj.fun1();
   aobj.fun2();

   bobj.fun1();
   bobj.fun3();

   return 0;

}
