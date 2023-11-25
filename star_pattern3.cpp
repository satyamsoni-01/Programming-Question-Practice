#include<iostream>

using namespace std;

int main()
{
  int n;

  cin>>n;

  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=n-i;j++)
    {
          cout<<"  ";
    }

    for(int m=1;m<=2*i-1;m++)
    {
        cout<<"* ";
    }
  cout<<"\n";
  }

  for(int i=n;i>=1;i--)
  {
    for(int j=1;j<=n-i;j++)
    {
          cout<<"  ";
    }

    for(int m=1;m<=2*i-1;m++)
    {
        cout<<"* ";
    }
  cout<<"\n";
  }




    return 0;
}