#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int row = 1;
    for(int row = 1; row<=n; row++)
    {
        for(int column = 1; column<=n; column++)
        {
            char ch = 'A' + row + column - 2;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}