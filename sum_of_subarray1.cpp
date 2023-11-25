#include<iostream>

using namespace std;

int main()
{
   int N;
   cin>>N;
   int arr[N];
   for(int i=0;i<N;i++)
   {
    cin>>arr[i];
   }
   
   int sum=0;
   for(int  i=0;i<N;i++)
   {  
    for (int j=i;j<N;j++)
    {    
        for(int k=i;k<=j;k++)
           {  cout<<i<<" ";
               cout<<j<<" ";
               cout<<k<<" "<<arr[k];
               sum+=arr[k];
               cout<<endl;
           }
    }
   }

   cout<<sum;


    return 0;
}