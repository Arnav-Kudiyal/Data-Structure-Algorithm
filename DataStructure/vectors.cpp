/*
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> vec= {1,2,3,4,5,6,7,8};

    cout << "size = " << vec.size()<< endl;

    vec.push_back(25);

    vec.pop_back();

    cout << vec.front() << endl;

    cout << vec.back() << endl;

    cout << vec.at(2) << endl;


    for(int i : vec)
    {
        cout << i << endl;
    }


    return 0;
}
*/

#include<iostream>
#include<vector>
using namespace std;

int main()
{
        vector<int> vec;

        vec.push_back(0);
        vec.push_back(1);
        vec.push_back(2);
        vec.push_back(3);
        vec.push_back(4);
        
        cout << vec.size() << endl;
        cout << vec.capacity()<< endl;
        




    return 0;
}