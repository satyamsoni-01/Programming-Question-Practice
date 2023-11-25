#include<iostream>

using namespace std;

int main()
{
   int n;
   cin>>n;

   for(int i=1;i<=n;i++)
   { int j;
    if(i<=n/2)
    {
        for (int j=1;j<=(((n+1)/2)-i);j++)
        {
            cout<<"  ";

        }

        for(int k=(((n+1)/2)-i)+1;k<((n+1)/2)+i;k++)
        {
            cout<<"* ";
        }
    }

    else
    {
       for (int j=1;j<=((n+1)/2)-(n-i+1);j++)
        {
            cout<<"  ";

        }

        for(int k=((n+1)/2)-(n-i);k<=((n+1)/2)+n-i;k++)
        {
            cout<<"* ";
        }
    }

    cout<<endl;
   }


    return 0;
}