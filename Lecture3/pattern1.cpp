#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int row = 0;
    while(row<n)
    {
        int column = 0;
        while(column<n)
        {
            cout<<"*"<<" ";
            column++;
        }
        row++;
        cout<<endl;
    }
    return 0;
}