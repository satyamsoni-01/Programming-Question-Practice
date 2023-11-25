#include<iostream>

using namespace std;

int factorial(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact*=i;
    }

    return fact;
}


int Binomail_combination(int n ,int r)
{
    return factorial(n)/(factorial(n-r)*factorial(r));
}
int main()
{
  

     int n;
     cin>>n;

     for(int i=1;i<=n;i++)
     {     
           for(int k=i;k<n;k++)
           {
             char a=' ';
             cout<<a;
           }
           for(int j=0;j<i;j++)
           {
            cout<<Binomail_combination(i-1 , j)<<" ";
           }
           cout<<endl;
     }


    return 0;
}