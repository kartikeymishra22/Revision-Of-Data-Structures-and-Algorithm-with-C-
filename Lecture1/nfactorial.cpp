#include<iostream>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int ans = 1;
    int num = 1;
    while(num<=n)
    {
        ans = ans * num;
        num++;
    }
    cout<<ans<<endl;
    return 0;
}