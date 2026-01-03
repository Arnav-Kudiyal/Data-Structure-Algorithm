// Linear Search
#include<iostream>
using namespace std;

int main()
{
    int arr[7] = {4,2,7,8,1,2,5};
    int target = 80;
    int size = 7;

    for(int i=0; i<size; i++)
    {
        if(arr[i]==target)
        {
            cout << "Index = " << i << endl;
            return 0;
        }
    }

    cout << "-1" << endl; 

    return 0;
}