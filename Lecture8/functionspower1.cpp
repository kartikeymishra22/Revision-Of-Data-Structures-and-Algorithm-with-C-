#include<iostream>
using namespace std;
int main()
{
    int a, b;
    cin>>a>>b;

    int ans = 1;
    int i = 1;
    while(i<=b)
    {
        ans = ans * a;
        i++;
    }
    cout<<"Answer is "<<ans<<endl;
}