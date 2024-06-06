#include<iostream>
using namespace std;
long long a[105][105];
long long ans;
int n;
int main(){
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==(n+1)/2){
                ans+=a[i][j];
            }
            if(j==(n+1)/2)ans+=a[i][j];
            if(i+j==n+1)ans+=a[i][j];
            if(i==j)ans+=a[i][j];
        }
    }
    ans-=(a[(n+1)/2][(n+1)/2]*3);
    cout<<ans<<endl;
    return 0;
}
























