#include<iostream>

using namespace std;

int main()
{

  cout<<"Enter lenght of butterfly "<<endl;
  int n;
  cin>>n;

  for(int i=0;i<n;i++)
  {
     
     if (i<n/2)
     {
        for(int j=0;j<n;j++)
        {
            if(j<=i || j>=n-i-1)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }
     }
     else
     {
     for(int j=0;j<n;j++)
        {
            if(j<=(n-i-1) || j>=i)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }
     }

     cout<<endl;
     
    
    }


    return 0;
}