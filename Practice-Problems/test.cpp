// Find the smallest and largest in the array
#include<iostream>
using namespace std;

int main()
{
    int numbers[5];
    int size = 5;
    for(int i=0; i<size; i++)
    {
        cin >> numbers[i];
    }

    int largest = numbers[0];
    int smallest = numbers[0];
    
    for(int i=0; i<size; i++)
    {
        if(numbers[i]>largest)
        {
            largest = numbers[i];
        }

        if(numbers[i]<smallest)
        {
            smallest = numbers[i];
        }
    }


    cout << "The Largest Number is " << largest << endl;
    cout << "The smallest number is " << smallest << endl;
    return 0;
}