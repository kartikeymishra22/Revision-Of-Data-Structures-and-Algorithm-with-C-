#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;
    cout<<"Size is "<<v.size()<<endl;

    v.push_back(1);
    cout<<"Size is -> "<<v.size()<<endl;
}