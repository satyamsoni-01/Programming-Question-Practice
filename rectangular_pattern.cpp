#include<iostream>
using namespace std;

int main()
{
  
  char a='*';

  int row , col;
  cout<<" ENTER ROW AND COLUMN "<<endl;
  cin>>row>>col;

   for(int i=0; i<row;i++)
   {  
       for(int j=0;j<col;j++)
       {
       cout<<a<<"\t";
       }
       cout<<endl;
   }


    return 0;
}