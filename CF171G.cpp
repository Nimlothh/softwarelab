#include<iostream>
using namespace std;
int a[105];
int n;
int main(){
    cin>>a[0]>>a[1]>>n;
    for(int i=2;i<=n;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    cout<<a[n]<<endl;
    return 0;
}



















