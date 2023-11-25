#include<iostream>

using namespace std;

int main()
{

   int n,m;
   cin>>n>>m;
   int matrix[n][m];

   for(int i=0;i<n;i++)
   {
    for(int  j=0;j<m;j++)
          cin>>matrix[i][j];

   }
   

   int row_start=0,row_end=n-1,col_start=0,col_end=m-1;

   while(row_start<=row_end && col_start<=col_end)
   {  
       for(int col=col_start;col<=col_end;col++)
       {
         cout<< matrix[row_start][col]<<endl;
       }

       row_start++;

     for(int row=row_start;row<=row_end;row++)
       {
       cout<<  matrix[row][col_end]<<endl;
       }

       col_end--;

       for(int col=col_end;col>=col_start;col--)
       {
        cout<< matrix[row_end][col]<<endl;
       }

       row_end--;

       for(int row=row_end;row>=row_start;row--)
       {
        cout<< matrix[row][col_start]<<endl;
       }

       col_start++;

  

   }







    return 0;
}