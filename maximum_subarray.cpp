#include <iostream>

using namespace std;

int main()
{   

    int arr[]={5,4,-1,7,8};
    int sum=0,start=0,end=0;
    int n=size(arr);
    int i;
    for( i=0;i<n;i++)
    {  int inside_sum=0;
       for(int j=i;j<n;j++)
       {  inside_sum+=arr[j];
          if(inside_sum>=sum)
          { sum=inside_sum;
            start=i;
            end=j;
          }
       }

    } 

    for(i=start;i<=end;i++)
    { 
        cout<<arr[i];

    }   
    cout<<"\n"<<sum;

    return 0;
}
