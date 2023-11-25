#include <iostream>

using namespace std;

int n=0;

struct Pair
{
    int min;
    int max;
};

struct Pair call(int arr[], int low, int high)
{   
    struct Pair left_num, right_num, c;
    int mid;
    if (low == high)
    {
        c.min = arr[low];
        c.max = arr[low];
        n+=1;
        return c;
    }
     if (high  == 1+low)
    {
        if (arr[high] > arr[low])
        {
            c.min = arr[low];
            c.max = arr[high];
        }
        else
        {
            c.min = arr[high];
            c.max = arr[low];
        }
         n+=1;
         return c;
    }

  
 
        mid = (high +low) / 2;

        
        left_num = call(arr, low, mid);
        right_num = call(arr, mid + 1, high);

        if (left_num.min > right_num.min)
        {
            c.min = right_num.min;
        }

        else
        {
            c.min = left_num.min;
        }

        if (left_num.max > right_num.max)
        {
            c.max = left_num.max;
        }

        else
        {
            c.max= right_num.max;
        }

   
        n+=1;
        return c;
  


}

int main()
{
   
    int arr[] = {21,19,23,95,75,24,4,5,6,44,6,77,34,5,0,7,87};
    Pair val;
    val=call(arr, 0,16);
    
    cout << val.min<<" and  "<<val.max<<"and "<<n;
 

    return 0;
}