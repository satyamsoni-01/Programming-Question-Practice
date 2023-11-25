#include<iostream>

using namespace std;

int main()
{
  int n;

  cout<<"Enter value of N "<<endl;
  cin>>n;;

  for( int i =1;i<=n;i++)
 { 

    //  for(int k=0; k<i;k++)  // for  pyramid
    //  {
    //     cout<<" ";
    //  }  

   //   for(int l=n-i;l>0;l--)
   //   {
   //        cout<<"  ";
   //   }


 
   //   for (int j=0;j<=i;j++)   // star pyramid
   //   {
   //      cout<<"*"<<" ";
   //   }

        for (int j=n-i;j<n;j++)   // number pyramid
     {
        cout<<i<<" ";
     }

     cout<<endl;
  }


    return 0;
}