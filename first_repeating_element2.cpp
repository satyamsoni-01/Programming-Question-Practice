#include<iostream>

using namespace std;

int main()
{
   int N;
   cin>>N;
   int A[N];
   

   for(int i=0;i<N;i++)
   {
            cin>>A[i];
         
   }

  int n=1e6+2;
   int idx[n];
      for(int i=0;i<n;i++)
   {
           
            idx[i]=-1;
   }

  

  int min_val=INT_MAX;

   for(int i=0;i<N;i++)
   {
         if(idx[A[i]]==-1)
         {
            idx[A[i]]=i;
            // cout<<" i "<<i<<" A[i] "<<A[i]<<endl;
         }

         else
         {
            if(min_val>idx[A[i]])
            {
                min_val=idx[A[i]];
                // cout<<"Min Value "<<min_val; 
            }
         }

   }

   cout<<min_val+1;

   
    return 0;
}