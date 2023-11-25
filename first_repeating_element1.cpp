#include<iostream>

using namespace std;


int main()
{
    
   int N;
   cin>>N;
   int A[N];
   for (int i=0;i<N;i++)
   {
       cin>>A[i];
   }
    
   
   for(int i=0;i<N;i++)
   {
    for (int j=i+1;j<N;j++)
    {
            if(A[i]==A[j])
            {
                cout<<i+1<<endl;
                goto back;

            }
            else
            {
                continue;
            }
    }
    
   }
   back:

    return 0;
}