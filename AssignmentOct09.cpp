//File name :
//Author :Shubham Pokale
//Email address :shubham.pokale2001@gmail.com
//Assignment no. :
//Description :
//Last changed :
#include<iostream>
#include<string.h>
using namespace std;
class Employee
    {
        public: 
        char *name;
        float bSal;
        public : 
        Employee():bSal(50000)
            {     //default constructor
                name = new char[2];
                strcpy(name,"\0");

            }

        Employee(char *c)
            {
                //Paramaterized Constructor
                // How would the character array containing the name be passed to this C Paramaterized constructor 
                name = new char[strlen(c)+1];
                strcpy(name,c);
            }

        Employee(char *name, float bSal): name(name),bSal(bSal){}
        
        virtual ~Employee()
            {   // destructor   // think on this why virtual ?, how is this working 
                delete []name;
            }
        
        void display()
            {
                cout << name<< endl;
                cout << bSal << endl;
            }


        virtual float calNetSal() =0; // A pure virtual function. Now the class Employee has become Abstract. ITs Objects cannot be created. 


        void set_bSal(int bSal)
            {   // setter function 
                this -> bSal = bSal;
                cout << "\nBase Salary Updated\n"; 
            }

        void get_employee_detail()
            {   // getter fucntion 
                cout << name << endl;
                cout <<bSal; 
                
            }
        

    };

class Clerk : public Employee
    {
        int overTime; 
        char *dept;
        public:
        Clerk():overTime(0)
            {       // Default constructor 
                    dept = new char[2];
                    strcpy(dept,"\0");

            }

        Clerk(char *name,char *d)
            {   this -> name = name; 
                dept = new char[strlen(d)+1];
                strcpy(dept, d);

            }

        Clerk(char *name, char *dept ,int overTime, float bSal ):Employee(name,bSal){
            // this -> name = name;
            this -> dept = dept;
            this -> overTime = overTime;

        }

        ~Clerk()
            {   // Clerk destructor to destroy dynamically allocated memory 
                delete []dept; 
            }

        void set_overTime(int overTime)
            {
                this -> overTime = overTime;
                cout << "overTime is updated";
            }


        float calNetSal()
           {
                return bSal + (overTime*1200);
            
            }
        

    };

        class Salesman : public Employee
            {
                float salAmt;
                char *managerName;
                public :
                Salesman():salAmt(75000)
                    {   // Default Constructor
                        managerName = new char[2];
                        strcpy(managerName,"\0");

                    }
                
                Salesman(char *name,char *m, float salAmt)
                    {   this -> name = name;
                        this -> salAmt = salAmt;
                        managerName= new char[strlen(m)+1];
                        strcpy(managerName,m);

                    }

                ~Salesman()
                    {   // Salesman destructor 
                        delete []managerName; 
                    }

                float calNetSal()
                    {
                        return bSal + (salAmt*15/100);

                    }



            };


            class Manager : public Employee
                {
                        float bonus;
                        char *mgrdept; 
                        public :
                        Manager():bonus(0)
                        {   mgrdept = new char[2];
                                strcpy(mgrdept,"\0");
                                
                                // Default Constructor
                        }
                        Manager(char *name, char *md, int bSal,float bonus)
                            {       // Pararmaterized constructor of Manager class
                                    mgrdept = new char[strlen(md)+1]; 
                                    strcpy(mgrdept,md);
                                    this -> name = name ;
                                    this -> bSal = bSal;
                                    this -> bonus = bonus; 
                                
                            }
                        
                        ~Manager()
                            {   // Manager
                                delete []mgrdept;
                            };

                        void getter()
                            {   //gertter functuon
                                cout << bonus << endl ;
                                cout <<mgrdept << endl;
                            }

                        void setter(int bonus)
                            {
                                this -> bonus = bonus ;
                                cout << "Bonus value updated ";
                            }

                        float calNetSal()
                            {
                                return bSal + bonus;
                            }

                };




int main()
{

    Employee *m[3];
    m[0]= new Manager("Micheal Scott", "Dunder Mifflin", 129,50);
    m[1]= new Manager("Jim Halpert", "Dunder Mifflin Phili", 120,50);
    m[2]= new Manager("Dwight Schrtuz", "Dunder Mifflin Scranton", 125,50);

// Calling calNetSal function and Manager class Object 
// cout << "Salaries of Managers are : ";
//     for(int i=0;i<3;i++)
//         {
//             cout << m[i] -> calNetSal() << endl;
//         }


    Employee *c[3];
    m[0] = new Clerk("Pam Beasly","Human Resource",48,60000);
    m[1] = new Clerk("Jared Dunn","MBA",107,135000);
    m[2] = new Clerk("John Joseph","Accounting",56,750000);
    // for(int i=0;i<3;i++)
    //     {
    //     m[i] ->display();
    //     }

    // for(int i=0;i<3;i++)
    //     {
    //     c[i] ->display();
    //     }
    cout << "_____________________________";
    char naam[100];
    cout << "Enter the employee name to get details : "; 
     gets(naam);

    for(int i=0;i<3;i++)
        {
            if(m[i] -> name == naam)
                {
                         m[i] -> display();
                        // cout << m[i] -> calNetSal();
                        cout << "\n";
                }
        }
     
    for(int i=0;i<3;i++)
        delete m[i];
    return 0;
}