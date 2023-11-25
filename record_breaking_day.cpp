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

 
   int max;
   
   max=INT_MIN;
  
   for(int i=0;i<N;i++)
   {    
        
        if(arr[i] > max && i!=N-1 && arr[i+1]<=arr[i])
        {
            cout<<i+1<<" ";
            max=arr[i];
        }
        else if (arr[i] > max && i==N-1)
        {
            cout<<i+1<<" ";
            max=arr[i];
        }
        else
        {
          NULL;
        }

     
        
   }



    return 0;
}