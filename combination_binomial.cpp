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

int main()
{
  
    int n,r;
    cin>>n>>r;

    float binomail_combination=0;
    binomail_combination=factorial(n)/(factorial(n-r)*factorial(r));

    cout<<binomail_combination<<endl;


    return 0;
}
