#include<iostream>

using namespace std;

bool prime(int num)
{  int  i;
   for(i = 2; i <num ; i++)
   {
    if(num%i==0)
    {
        return 0;
    }
   }

   if(i==num)
   {
    return 1;
   }
   
}

int main()
{
  int a,b;

  cin>>a>>b;

  for(int j=a;j<=b;j++)
  {
    if(prime(j))
    {
        cout<<j<<endl;
    }
  }





    return 0;
}