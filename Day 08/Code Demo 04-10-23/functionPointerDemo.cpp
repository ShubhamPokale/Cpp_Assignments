#include<iostream>
using namespace std;


//int (*fun)(int, int);

int sum(int,int);
int sub(int,int);
int mul(int,int);
int (*fun[3])(int,int);
int main()
{
    int n1 = 10, n2 = 5;
    fun[0] = sum;
    fun[1] = sub;
    fun[2] = mul;


    for(int i =0;i<3;i++)
         cout<<"\n Result = "<<fun[i](n1,n2);

    /*fun = &sum;
    cout<<"\n Sum = "<<fun(n1,n2);
    fun = sub;
    cout<<"\n Sub = "<<fun(n1,n2);
    fun = mul;
    cout<<"\n Mul = "<<fun(n1,n2);*/
    return 0;
}


int sum(int a, int b)
{
    return a+b;
}

int sub(int a, int b)
{
    return a-b;
}

int mul(int a, int b)
{
    return a*b;
}
