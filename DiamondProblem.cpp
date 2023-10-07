#include<iostream>
using namespace std;

class base{
public:
    base(){cout<<"\n base default cons is called..";}
    void display()
    {
        cout<<"\n Display is called...";
    }
    ~base(){cout<<"\n base destructor is called...";}
};

class A : public virtual base {
    public:
    void funA() { cout<<"\n funA() is called..."; }
    A(){cout<<"\n A default cons is called..";}
    ~A(){cout<<"\n A destructor is called...";}
};

class B : virtual public base {
    public:
   void funB() { cout<<"\n funB() is called..."; }
   B(){cout<<"\n B default cons is called..";}
   ~B(){cout<<"\n B destructor is called...";}
};

class D : public A, public B {
    public:
   void funD() { cout<<"\n funD() is called..."; }
   D(){cout<<"\n D default cons is called..";}
   ~D(){cout<<"\n D destructor is called...";}
};

int main()
{
    D obj;
    obj.display();
    return 0;

}
