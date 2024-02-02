#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int row = 1; row<=n; row++)
    {
        for(int column = 1; column <=n; column++)
        {
            cout<<n - column + 1<<" ";
        }
        cout<<endl;
    }
    return 0;
}