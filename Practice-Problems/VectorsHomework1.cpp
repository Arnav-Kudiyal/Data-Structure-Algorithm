// Linear search using vectors

#include<iostream>
#include<vector>
using namespace std;

int linearSearch(vector<int> &v,int x) 
{
    int start_index = 0;
    for(int i : v)
    {
        
        if(i==x)
        {
            
            return start_index;
        }
        start_index++;
    
    }

    return -1;


}

int main()
{
    vector<int> vec = {1,5,4,2,53,41,86,62,84,49,28,55,61,};
    int target;

    cout << "Enter the number to find" << endl;
    cin >> target;

    int searched = linearSearch(vec, target);

    cout << "The given Numbver is at index " << searched << endl;




    return 0;
}