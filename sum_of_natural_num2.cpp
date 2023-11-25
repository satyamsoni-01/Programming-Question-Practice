#include<iostream>

using namespace std;

int main()
{
  int n;
  cin>>n;

  int sum1=0,sum2=0;
  for(int i=1;i<=n;i++)
  {
        sum1+=i;
  }

  sum2=n*(n+1)/2;

  cout<<sum1<<sum2;


    return 0;
}