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
   for(int j=0; j<N;j++)
   {
    sum+=arr[j]*(N-j)*(j+1);
   }
   cout<<sum;
   
    return 0;
}
