#include<iostream>
using namespace std;
#include<string.h>
class shape {
    protected:
  char *color;

  public:
  char *getColor()
  {
      return color;
  }
    shape()
    {
        cout<<"\n deft. constructor shape..";
        color = new char[2];
        strcpy(color,"\0");
    }
    shape(char *c)
    {
        cout<<"\n param. constructor shape..";
        color = new char[strlen(c) + 1];
        strcpy(color,c);
    }
    virtual ~shape()
    {
        cout<<"\n shape destructor..";
        delete []color;
    }
     virtual float area() = 0;  //pure virtual function

};

class circle : public shape {
  char *name;
  int rad;
  public:


  char *getName()
  {
      return name;
  }
  circle() {
      cout<<"\n deft. constructor circle..";name = new char[2]; strcpy(name,"\0");rad = 5; }
  circle(char *c, int i, char *nm) : shape(c)
  {
      cout<<"\n para constructor circle..";
      rad = i;
      name = new char[strlen(nm) + 1];
      strcpy(name,nm);
  }
  ~circle()
  {
      cout<<"\n circle destructor..";
      delete []name;
  }

  float area() {          //function overriding
      cout<<" \nArea of Circle  ";
     return rad*rad*3.14;
  }
};

class square : public shape {
  int side;
  char *name;
  public:
     char *getName()
     {
      return name;
     }
      square() {
          cout<<"\n deft. constructor square..";
          side = 4; name = new char[2];
      strcpy(name,"\0");}

      square(char *c,int i,char *nm) : shape(c)
      {
          cout<<"\n param. constructor square..";
          color = new char[strlen(c) + 1];
          strcpy(color,c);
          side = i;
          name = new char[strlen(nm) + 1];
          strcpy(name,nm);
      }
      ~square(){
          cout<<"\n square destructor..";
          delete []name;
      }
      float area() {
          cout<<"\n Area of Square  ";
          return side * side; }
};

class triangle : public shape {
  int b, ht;

  public:
      triangle() {
          cout<<"\n deft. constructor traingle..";
          b = 4; ht = 2;
      }

      triangle(char *c,int ba,int h)
      {
          cout<<"\n param. constructor traingle..";
          color = new char[strlen(c) + 1];
          strcpy(color,c);
          b = ba;
          ht = h;
      }
      ~triangle(){
          cout<<"\n triangle destructor..";
      }
      float area() {
          cout<<"\n Area of Traingle  ";
          return (b * ht) / 2; }
};


int main()
{
    shape *sp[5];
    sp[0] = new circle("Red",5,"Toy");
    sp[1] = new triangle("White",4,6);
    sp[2] = new square("Green",9,"Plot");
    sp[3] = new triangle("Blue",3,4);
    sp[4] = new circle("Pink",6,"Toy");
    int i;
    for(i = 0 ; i<5; i++)
    {
        cout<<"  "<<sp[i]->area();
    }

    for(i = 0;i<5; i++)
        delete sp[i];
    return 0;
}
