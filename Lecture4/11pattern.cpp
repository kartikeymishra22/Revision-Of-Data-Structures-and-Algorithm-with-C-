#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int row = 1;
    char ch = 'A';
    for(int row = 1; row<=n; row++)
    {
        for(int column = 1; column<=n; column++)
        {
            cout<<ch<<" ";
            ch = ch +1;
        }
        cout<<endl;
    }
}