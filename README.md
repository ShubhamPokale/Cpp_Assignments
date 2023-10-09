# Cpp_Assignments
A repository of all the CDAC Cpp programming module

Object Oriented Programming in C++ Cheatsheat 
https://www.codecademy.com/learn/c-plus-plus-for-programmers/modules/object-oriented-programming-in-cpp/cheatsheet

Command to get the asm file and the compiled code. 
#### >objdump -d flyinghigh.exe > Op.asm
## ________________________________________________________________________________________________________
#include #include<string.h> using namespace std; class emp{ protected: char *name; float bsal;

public: // creating constructor for base class emp(){ name=new char[4]; bsal=1000; } emp(float bs){bsal=bs;} emp(float bs,char*naam){bsal=bs;name=new char[strlen(naam)+1];strcpy(name,naam);} emp(char *naam,float bs){ name=new char[strlen(naam)+1]; strcpy(name,naam); bsal=bs; } virtual float calNetSal()=0; virtual char *empname()=0; //using getter to get sal float getsal(){ return bsal; } //using getter to get name char *getname(){ return name; }

void display(){ cout<<name<<"\n"; cout<<bsal<<"\n"; } virtual ~emp(){ delete []name; }

}; class clerk:public emp{ int overtime; char *dept;

public: clerk(){overtime=0;dept=new char[20];}

clerk(char *naam,float sal,int over,char dep):emp(sal,naam){ overtime=over; dept=new char[strlen(dep)+1]; strcpy(dept,dep); } float calNetSal(){ //cout<<"total salery of clerk : "; return (overtime1200)+getsal(); } char *empname(){ return getname(); } virtual ~clerk(){delete []dept; } };

// class for salesman

class salesman:public emp{ int saleamount; char *mgrname;

public: salesman(){saleamount=0;mgrname=new char[20];} salesman(char *naam,float sal,int amount,char *mgr):emp(sal,naam){ saleamount=amount; mgrname=new char[strlen(mgr)+1]; strcpy(mgrname,mgr); } void display(){ cout<<saleamount<<"\n"; cout<<mgrname<<"\n"; }

float calNetSal(){ //cout<<"salesman salery : "; return getsal()+(0.15*saleamount); }

char *empname(){ return getname(); }

virtual ~salesman(){ delete []mgrname; } };

class manager:public emp{ float bonus; char *dept;

public: manager(){ bonus=0; dept=new char[10]; } manager(char *naam,float sal,float bon,char *dep):emp(sal,naam){ bonus=bon; dept=new char[strlen(dep)+1]; strcpy(dept,dep); } float calNetSal(){ //cout<<"sal of manager : "; return bonus+getsal(); }

char *empname(){ return getname(); }

virtual ~manager(){ delete []dept; } };

int main(){ emp *e[5]; e[0]=new clerk("Ankur",15000,20,"head"); e[1]=new salesman("Deepak",10000,500,"saleel"); e[2]=new manager("Kaushar",50000,1000,"principle"); //e[3]=new clerk(); //e[4]=new clerk();

for(int i=0;i<3;i++){ cout<< e[i]->calNetSal()<<"\n"; } cout<<"printing employee name whoes salary is greater than 15000"<<"\n"; for(int i=0;i<3;i++){ if(e[i]->calNetSal()>15000){ cout<<e[i]->empname()<<"\n"; } } cout<<"enter employee name to get its detail"<<"\n"; string naam; getline(cin,naam); for(int i=0;i<3;i++){ if(e[i]->empname()==naam){ cout<<e[i]->getname()<<"\n"; cout<<e[i]->getsal()<<"\n"; } }

for(int i=0;i<3;i++) delete e[i]; return 0; }
