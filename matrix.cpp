//File name :
//Author :Shubham Pokale
//Email address :shubham.pokale2001@gmail.com
//Assignment no. :
//Description :
//Last changed :
#include<iostream>
using namespace std;

class matrix
{
private: 
int row; 
int column;
int **mat;

public: 
matrix(){
    // Default constructor for matrix object 

int i; 
//initialize the data members 
row =3;
column =3;
//int **mat; //double pointer varialbe we can also call this as a pointer to a pointer variable

mat = new  int*[row]; // Integer pointer array of m rows to store the pointers to int arrays and cloumn size n

// Now, Doing this makes our 2d matrix structure ready to use
for(i=0;i<row;i++)
    {
        mat[i]=new int[column];
    }
// Now we populate the matrix with elements
for(int i=0; i<row;i++)
    {
        for(int j=0;j<column;j++)
            {
                mat[i][j]= 0;
            }
    }




}


// Paramaterized construtor

matrix(int r, int c){
    // Default constructor for matrix object 

int i; 
//initialize the data members 
row =r;
column =c;
//int **mat; //double pointer varialbe we can also call this as a pointer to a pointer variable

mat = new  int*[row]; // Integer pointer array of m rows to store the pointers to int arrays and cloumn size n

// Now, Doing this makes our 2d matrix structure ready to use
for(i=0;i<row;i++)
    {
        mat[i]=new int[column];
    }
// Now we populate the matrix with elements
for(int i=0; i<row;i++)
    {
        for(int j=0;j<column;j++)
            {
                mat[i][j]= 0;
            }
    }




}

matrix(matrix const &obj2)
    {
        row = obj2.row;
        column = obj2.column; 
        mat = new int*[row]; 
        for(int i=0;i<row;i++)
            {
                mat[i]= new int[column];

            }


    for(int i=0;i<row;i++)
        {
            for(int j=0;j<column;j++)
                {
                    mat[i][j]=obj2.mat[i][j];                }
        }
        }

// destructor of matrix 

~matrix()
    {
        for(int i=0; i<row;i++)
            {delete []mat[i];}
    }

// displaying the formed matrix 
void display_matrix()
    {
        for(int i=0; i<row;i++)
            {
                for(int j=0;j<column;j++)
                    {
                        cout << mat[i][j] << " ";
                    }
                 cout << endl;
            }
    }


void input_data()
    {
        for(int i=0;i<row;i++)
            {
                for(int j=0;j<column;j++)
                    {
                        cout << "Enter a number: ";
                        cin >> mat[i][j];
                    }

            }
    }


void snake_pattern()
    {
        for(int i=0;i<row;i++)
            {
                if(row%2==1)
                    {
                for(int j=0;j<column;j++)
                    {
                        cout << mat[i][j] << " ";
                    }
                    }
                else
                    {
                        for(int j=column;j>0;j--)
                            {
                                cout << mat[i][j] << " ";
                            }
                    }
                
            }
    }

};

int main()
{
    matrix m1;
    matrix m2;
    matrix m5;
    // m5.input_data();
    m5.input_data();
    m5.snake_pattern();
    //m2.input_data();
    //m2.display_matrix();
    //matrix m4(m5);

    // m4.display_matrix();
    // cout << "\n";
    // m1.display_matrix();
    // cout << "\n";
    // m5.display_matrix();

 return 0;
}