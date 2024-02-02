#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int toPrint = 1;
    for(int row = 1; row<=n; row++)
    {
        for(int column = 1; column <=n; column++)
        {
            cout<<toPrint<<" ";
            toPrint = toPrint + 1;
        }
        cout<<endl;
    }
    return 0;
}