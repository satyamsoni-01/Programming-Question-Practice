#include<iostream>

using namespace std;

int main()
{ int arr[5];
  int i=0;

  for (i=0 ; i<5;i++)
  {
    cin>>arr[i];

  }
  
  int mx=INT_MIN,mn=INT_MAX;
  

  
//   cin>>find;
  for(i=0;i<=5/2;i++)
  {
      if(arr[i]>mx)
      {
        mx=arr[i];
      }
      
      if(arr[4-i]>mx )
      {
        mx=arr[4-i];
      }

      if(arr[i]<mn)
      {
        mn=arr[i];
      }
            if(arr[4-i]<mn)
      {
        mn=arr[4-i];
      }
  }
  

  cout<<mx<<mn;


    return 0;
}