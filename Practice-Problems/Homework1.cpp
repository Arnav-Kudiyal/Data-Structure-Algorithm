// WAF to calucate sun and product if all number in an array

#include<iostream>
using namespace std;

int sum_of_array(int arr[],int size)
{
    int sum = 0;

    for(int i=0; i<size; i++)
    {
        sum = sum+arr[i];
    }
    return sum;
}

int product_of_array(int arr[],int size)
{
    int product = 1;
    for(int i=0; i<size; i++)
    {
        product = product*arr[i];
    }
    return product;
}

int main()
{
    int arr[5] = {1,2,3,4,5};
    int size = 5;

    cout << "The Sum of all element of the Array = " << sum_of_array(arr,size) << endl;
    cout << "The Product of all element of the Array = " << product_of_array(arr,size) << endl;

    return 0;

}