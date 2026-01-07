// Reverse code on a vector

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v = {1,2,3,4,5,6,7,8,9};

    cout<< "Vector before reversing = ";

    for(int i : v)
    {
        cout << i <<",";
    }
    
    cout << endl;

    int min_idx = 0;
    int max_idx = v.size()-1;
    

    for(int i : v)
    {
       if(min_idx < max_idx)
       {
            int temp = v[min_idx];
            v[min_idx] = v[max_idx];
            v[max_idx] = temp;

            min_idx++;
            max_idx--;
       } 
    }
    cout << "Vector after reversing = " ; 

    for(int i : v)
    {
        cout << i << ",";
    }

    return 0;
}
