#include<iostream>

using namespace std;

int main()
{
  
   int n;
   cin>>n;

   for(int i=1;i<=n;i++)
   {
      if(i<=n/2)
      {
          for(int j=1;j<=n;j++)
          {
            if(j>(n/2)-i+1 && j<=2*i-1+((n/2)-i+1))
            {
                cout<<"* ";
            }

            else{
                cout<<"  ";
            }
          }
      }

      else
      {
           for(int j=1;j<=n;j++)
          {
            if(j>=(n/2)-(n-i)+1 && j<=2*(n-i)-1+((n/2)-(n-i)+1)+1)
            {
                cout<<"* ";
            }

            else{
                cout<<"  ";
            }
          }
      }
      cout<<endl;

    

   }

    return 0;
}