#include<iostream>
using namespace std;
long long n,k;
unsigned long long dp[1010][2020][10];
const int mod=998244353;
long long ans;
int main(){
    cin>>n>>k;
    dp[1][2][0]=1;
    dp[1][2][3]=1;
    dp[1][1][1]=1;
    dp[1][1][2]=1;
    for(int i=2;i<=n;i++)
    {
        for(int j=0;j<=k;j++)
        {
            dp[i][j][0]=dp[i-1][j][0]+dp[i-1][j-1][1]+dp[i-1][j-1][2]+dp[i-1][j-2][3];
            dp[i][j][1]=dp[i-1][j][0]+dp[i-1][j][1]+dp[i-1][j-1][2]+dp[i-1][j][3];
            dp[i][j][2]=dp[i-1][j][0]+dp[i-1][j-1][1]+dp[i-1][j][2]+dp[i-1][j][3];
            dp[i][j][3]=dp[i-1][j-2][0]+dp[i-1][j-1][1]+dp[i-1][j-1][2]+dp[i-1][j][3];
            dp[i][j][0]%=mod;
            dp[i][j][1]%=mod;
            dp[i][j][2]%=mod;
            dp[i][j][3]%=mod;
        }
    }
    ans=(dp[n][k][0]+dp[n][k][1]+dp[n][k][2]+dp[n][k][3])%mod;
    cout<<ans<<endl;
    return 0;
}
























