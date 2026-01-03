// Two pointer Approach

#include<iostream>
using namespace std;

int main()
{
    int arr[7] = {4,5,7,8,1,2,5}; 
    int size = 7;

    for(int i=0; i<size; i++)
    {
        cout << arr[i] << endl;
    }

    int start = 0;
    int end = 6;

    while(start<=end)
        {
            swap(arr[start],arr[end]);
            start++;
            end--;
        }

    
    for(int i=0; i<size; i++)
    {
        cout << arr[i] << endl;
    }
        
    return 0;
}