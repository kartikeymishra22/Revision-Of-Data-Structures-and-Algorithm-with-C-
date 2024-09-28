#include<iostream>
using namespace std;

int main()
{
    int n = 10;

    while(n<50){
        if(n%3==0){
            cout<<n<<" ";
        }
        n++;
    }
    cout<<endl;

    return 0;
}