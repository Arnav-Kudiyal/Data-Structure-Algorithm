// WAF to swap the minimum and maximum element of the array
#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {5,7,4,6,2};
    int size = 5;

    cout <<"Array before swapping" << endl;

    for(int i=0; i<size; i++)
    {
        cout << arr[i] << ", ";
    }

    int maxIndex = 0;
    int minIndex = 0;
    
    for(int i = 0; i<size; i++)
    {
        if(arr[i]>arr[maxIndex])
        {
            maxIndex = i;
        }
    }


    for(int i = 0; i<size; i++)
    {
        if(arr[i]<arr[minIndex])
        {
            minIndex = i;
        }
    }

    swap(arr[maxIndex], arr[minIndex]);

    cout <<"Array after swapping" << endl;

    for(int i=0; i<size; i++)
    {
        cout << arr[i] << ", ";
    }

    return 0;
}