#include<iostream>
using namespace std;

int main()
{

    int x,y;
    cin>>x>>y;
    if(x>y)
    {
        cout<<"max number is "<<x<<endl;
    }
    else if (y>x)
    {
        cout<<"max number is"<<y<<endl;
    }
    else
    {
        cout<<" both number is same"<<endl;
    }
    
    return 0;
}