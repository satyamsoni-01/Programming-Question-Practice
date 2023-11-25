#include<iostream>

using namespace std;

int main()
{
   int N;
   cin>>N;
    int S;
   cin>>S;
   int arr[N];

   for(int i=0;i<N;i++)
   {
    cin>>arr[i];
   }
    
   int sum=0;


   for(int i=0;i<N;i++)
   {  sum=0;
    for(int j=i;j<N;j++)
    {
      sum+=arr[j];
      if(S==sum)
      {
        cout<<" Index from " <<i <<" to "<<j;
         goto back;
     
      }
      
    }
   }

   back:

    return 0;
}