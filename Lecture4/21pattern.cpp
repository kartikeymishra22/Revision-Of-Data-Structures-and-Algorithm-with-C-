#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int row = 1;
    while(row<=n)
    {
        int space = 1;
        while(space<row)
        {
            cout<<" ";
            space = space + 1;
        }
        int column = 1;
        while(column<=n-row+1)
        {
            cout<<row;
            column++;
        }
        row++;
        cout<<endl;
    }
}
