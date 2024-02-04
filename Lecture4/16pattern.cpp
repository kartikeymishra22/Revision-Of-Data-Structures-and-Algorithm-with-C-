#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int row = 1;
    for(int row = 1; row<=n; row++)
    {
        char ch = 'A' + n - row;
        for(int column = 1; column<=row; column++)
        {
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
}