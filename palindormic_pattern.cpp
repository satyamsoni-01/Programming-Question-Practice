#include<iostream>

using namespace std;

int main()
{
  int a;
  cin>>a;
  int num=1;
  int num2;
  for(int i=1;i<=a ;i++)
  {
    for(int j=1;j<=a-i;j++)
    {
        cout<<"  ";
    }
    num=i;
    for(int k=a-i+1;k<=a;k++)
    {
        cout<<num--<<" ";
        
    }

    num2=2;
    for(int m=a+1;m<a+i;m++)
    {   
        cout<<num2++<<" ";
        
    }

    cout<<endl;

  }
  


    return 0;
}