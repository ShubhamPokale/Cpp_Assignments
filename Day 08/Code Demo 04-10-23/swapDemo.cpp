#include<iostream>
using namespace std;

void swap_val(int , int);

void swap_add(int *, int *);

void swap_ref(int &, int &);

int main()
{
    int t, n1, n2;
    n1 = 10, n2 = 15;

    swap_val(n1, n2);


    cout<<"\n After swap_val n1 = "<<n1<<"  n2 = "<<n2;

    swap_add(&n1, &n2);

    cout<<"\n After swap_add n1 = "<<n1<<"  n2 = "<<n2;

    swap_ref(n1, n2);

    cout<<"\n After swap_ref n1 = "<<n1<<"  n2 = "<<n2;

    return 0;
}

void swap_ref(int &r1, int &r2)   // int &r1 = n1   int &r2 = n2
{
    int t;
    t = r1;
    r1 = r2;
    r2 = t;
}

void swap_val(int a, int b)  //int a = n1  int b = n2
{
    int t;
    t=a, a=b, b=t;
}

void swap_add(int *a, int *b)  //int *a = &n1   int *b = &n2
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}




