#include<iostream>
using namespace std;

class shape {
    protected:
  int color;

  public:
    virtual float area() = 0;  //pure virtual function

};

class circle : public shape {
  int rad;
  public:
  circle() { rad = 5; }
  circle(int i) { rad = i; }
  float area() {          //function overriding
     return rad*rad*3.14;
  }
};

class square : public shape {
  int side;
  public:
      square() { side = 4;}
      square(int i) { side = i; }
      float area() { return side * side; }
};

int main()
{
    shape obj;

    circle c1(7);
   // cout<<"\nArea = "<<c1.area();

    square s1(9);

//    cout<<"\nArea = "<<s1.area();

    shape *sh1 = &c1;


    cout<<"\n"<<sh1->area();

    sh1 = &s1;
    cout<<"\n"<<sh1->area();
    return 0;
}
