#include <iostream>

using namespace std;
#include"mydate.h"
#include"student.h"

int main()
{
    mydate dt(1,1,1998);
    dt.display();
    student s(10,dt,"Pooja",dt,85.5f);

    //assignment -
    student s1(10,1,1,1998,"Pooja",3,9,2023,80.75f);

    s.display();
    return 0;
}
