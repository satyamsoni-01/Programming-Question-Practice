#include<iostream>
using namespace std;

int main()
{
   int row,col;
   cout<<"Enter row and column "<<endl;
   cin>>row>>col;

   for(int i=0;i<row;i++)
   {

    for(int j=0;j<col;j++)
    {
        if( i==row-1 || i==0 || j==0 || j==col-1)
        {cout<<"* ";
           
        }

        else
        {  
             cout<<"  ";
          
        }
        
    }

    cout<<endl;
   }

    return 0;
}