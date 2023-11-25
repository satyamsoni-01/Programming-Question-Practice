#include <iostream>

using namespace std;

int main()
{
    int arr[] = {12, 45, 23, 51, 19, 8};
    int temp;
    for (int i = 0; i < size(arr) - 1; i++)
    {
        int min = arr[i];
        int loc = i;
        for (int j = i + 1; j < size(arr); j++)
        {

            if (arr[j] < min)
            {
                min = arr[j];
                loc = j;
            }
            //     if (arr[i] > arr[j])
            //     {
            //         temp = arr[j];
            //         arr[j] = arr[i];
            //         arr[i] = temp;
            //     }
        }

        temp = arr[loc];
        arr[loc] = arr[i];
        arr[i] = temp;

        for (int k = 0; k < size(arr); k++)
        {
            cout << arr[k] << " ";
        }
        cout << endl;
    }

    return 0;
}