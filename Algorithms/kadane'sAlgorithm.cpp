#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int arr[5] = {1,2,3,4,5};
    int size = 5;
    int max_sum = INT_MIN;
    int current_sum = 0;

    for(int i=0; i<size; i++)
    {
        current_sum = current_sum + arr[i];
        max_sum = max(current_sum, max_sum);
        if(current_sum < 0)
        {
            current_sum = 0;
        }
    }
    cout << "The maximum sybarray sum is " << max_sum;

    return 0;
}