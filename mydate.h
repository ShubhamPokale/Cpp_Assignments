#ifndef MYDATE_H
#define MYDATE_H

class mydate {
    int dd,mm,yy;
public:
    mydate();
    mydate(int,int,int);
    mydate(mydate &);
    void display();
};
#endif // MYDATE_H
