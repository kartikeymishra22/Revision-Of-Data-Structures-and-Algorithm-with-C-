#include<iostream>
using namespace std;

int main(){
    int i = 1;
    int sum = 0;
    int n;
    cin>>n;

    while(i<=n){
        sum = sum + i;
        i++;
    }
    cout<<sum<<endl;

    return 0;
}