#include<iostream>
using namespace std;

int sum(int, int);      //#1
float sum(float, float);  //#2
float sum(int, float);    //#3
int sum(int, int, int);   //#4
float sum(int, float, float);  //#5
float sum(float, int);

int main()
{
   cout<<"\n  int sum(int, int) = "<<sum(10,12);
   cout<<"\n float sum(float, float) = "<<sum(10.0f,12.0f);
   cout<<"\n float sum(int, float) = "<<sum(10,12.75f);
   cout<<"\n int sum(int, int, int) = "<<sum(10,12,15);
   cout<<"\n float sum(int, float, float) = "<<sum(10,12.0f,15.0f);
   cout<<"\n float sum(float, int) = "<<sum(10.0f, 12);
   return 0;
}

int sum(int a, int b)
{
   return a + b;
}

float sum(float a, float b)
{
   return a + b;
}

float sum(int a, float b)
{
    return (float)a + b;
}
int sum(int a, int b, int c)
{
    return a + b + c;
}

float sum(int a, float b, float c)
{
    return a + b + c;
}

float sum(float a, int b)
{
    return a + b;
}

