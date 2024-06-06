#include<iostream>
#include<cmath>
using namespace std;
long long n,m,k,b[5010],tot[5010],dp[5010][5010];
int main(){
    scanf("%lld%lld%lld",&n,&m,&k);
    for(long long i=1;i<=n;i++)
    {
        scanf("%lld",&b[i]);
        tot[i]=tot[i-1]+b[i];
    }
    for(long long j=1;j<=k;j++)
    {
        for(long long i=j*m;i<=n;i++)
        {
            dp[i][j]=max(dp[i-1][j],dp[i-m][j-1]+tot[i]-tot[i-m]);
        }
    }
    printf("%lld",dp[n][k]);
    return 0;
}


























