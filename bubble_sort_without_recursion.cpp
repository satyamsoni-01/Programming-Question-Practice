#include <iostream>

using namespace std;

int main()
{
    int arr[] = {12,45,23,51,19,8};
    int temp;
    for (int i = 0; i < size(arr)-1; i++)
    {
        for (int j = 0; j < size(arr) - i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }

        for(int k=0;k<size(arr);k++)
        {
            cout<<arr[k]<<" ";
        }
        cout<<endl;
    }

    return 0;
}