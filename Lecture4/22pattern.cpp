#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int row = 1;
    while(row<=n)
    {
        int space = n - row;
        while(space)
        {
            cout<<" ";
            space = space - 1;
        }
        int column = 1;
        while(column<=row)
        {
            cout<<row;
            column++;
        }
        row++;
        cout<<endl;
    }
}
