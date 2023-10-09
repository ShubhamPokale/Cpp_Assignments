#include<iostream>
using namespace std;

class matrix {

   int row, col;
   int **mat;

   public :
   matrix()
   {
     int i;
     row =2;
     col =2;
     mat = new int*[row];
     for(i=0 ; i<row; i++)
      mat[i] = new int[col];

     for(i=0;i<row;i++)
     {
        for(int j = 0;j<col;j++)
           mat[i][j] = 0;

     }
   }

   matrix(int r, int c)
   {
     int i;
     row = r;
     col = c;
     mat = new int*[row];
     for(i=0 ; i<row; i++)
      mat[i] = new int[col];

     for(i=0;i<row;i++)
     {
        for(int j = 0;j<col;j++)
           mat[i][j] = 0;

     }
   }

   ~matrix()
   {
        int i;
       for(i=0; i<row ; i++)
        delete []mat[i];

      delete mat;
   }

   void input_data()
   {
     int i,j;
     for(i=0 ; i<row ; i++)
     {
       for(j=0 ; j<col ; j++)
       {
         cout<<"\n Enter number..";
         cin>>mat[i][j];
       }
     }
   }

   void display()
   {
      int i,j;
      cout<<"\n   Matrix : \n";
      for(i=0 ; i<row ; i++)
      {
         for(j=0 ;j<col ;j++)
            cout<<mat[i][j]<<"   ";

         cout<<"\n";
      }
   }

   matrix(matrix const &m)
   {
     row = m.row;
     col = m.col;

     int i;
     mat = new int*[row];
     for(i=0 ; i<row ; i++)
        mat[i] = new int[col];


    for(i=0 ; i<row; i++)
    {
        for(int j=0 ; j<col ; j++)
           mat[i][j] = m.mat[i][j];

    }
  }

  const matrix &operator = (const matrix &m)
  {
      int i;
     for(i=0; i<row ; i++)
        delete []mat[i];

     delete mat;

     row = m.row;
     col = m.col;


     mat = new int*[row];
     for(i=0 ; i<row; i++)
      mat[i] = new int[col];

     for(i=0;i<row;i++)
     {
        for(int j = 0;j<col;j++)
           mat[i][j] = m.mat[i][j];

     }
     return *this;
  }
};



int main()
{
   matrix obj, obj3;
   obj.input_data();
   obj.display();

   matrix obj2(obj);

   obj2.display();

   obj3 = obj2;
   obj3.display();
   return 0;
}
