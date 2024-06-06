//这是B3分支 
#include<iostream>
using namespace std;
int n;
int a[105];
long long ans;
int main(){
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n;i++)
    {
        ans+=i*a[i];
    }
    cout<<ans<<endl;
    return 0;
}




















