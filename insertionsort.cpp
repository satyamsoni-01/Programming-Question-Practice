#include<iostream>

using namespace std;

int insertion(int arr[])
{   int s;

    s=size(arr);
    
    for(int i=1;i<s;i++)
    {  int temp=0;
       for (int j=i;j>0;j++)
       {
        if(arr[j]<arr[j-1])
        {
            temp=arr[i];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
        }

        else 
        { 
             break;
             

        }
       }
    }



   return arr;

}

int main()
{
   
    int arr=[1,2,6,2,7,9,3,4];
    cout<<insertion(arr);
    

    return 0;
}