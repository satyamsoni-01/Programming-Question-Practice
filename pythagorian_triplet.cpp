#include<bits/stdc++.h>
using namespace std;


bool pythagorian(int a,int b,int c)
{
  
    if(b*b+c*c==a*a)
    {
      return true;
    }

    else if(b*b==c*c+a*a)
    {
      return true;
    }

    else if (b*b+a*a==c*c)
    {
      return true;
    }

    else
    {
      return false;
    }
    

  
  
}
int main()
{
    int  a,b,c;
    int conformation;

    cin>>a>>b>>c;
    conformation=pythagorian(a,b,c);
    if(conformation)
    {
      cout<<"Yes it follow pythagorian rule";
    }
    else{
      cout<<" No it doen't follow pythagorian rule";
    }


     

    return 0;
}