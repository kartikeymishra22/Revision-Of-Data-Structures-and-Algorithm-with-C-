#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int row = 1;
    while(row<=n)
    {
        char ch ='A' + row - 1;
        int column = 1;
        while(column<=n)
        {
            cout<<ch<<" ";
            ch++;
            column++;
        }
        row++;
        cout<<endl;
    }
}
