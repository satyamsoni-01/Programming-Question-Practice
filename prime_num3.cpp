#include<iostream>
#include<math.h>

using namespace std;

int main()
{
  int n;
  cin>>n;
  bool temp=0;

  for(int i=2;i<=sqrt(n);i++)
  {
    if(n%i==0)
    {
        cout<<"Non Prime"<<endl;
        temp=1;
        break;
    }
  }

  if(temp==0)
  {
    cout<<" Prime"<<endl;
  }



    return 0;
}