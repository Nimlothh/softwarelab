#include<iostream>
#include<cmath>
using namespace std;
double n,b;
double a[105];
double ans;
double tot;
double maxn;
double minn;
int main(){
    cin>>n>>b;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        tot+=a[i];
        maxn=max(maxn,a[i]);
    }
    minn=a[1];
    for(int i=2;i<=n;i++)
    {
        minn=min(minn,a[i]);
    }
    tot+=b;
    if(maxn-minn>b){
        cout<<"-1\n";
        return 0;
    }
    ans=tot/n;
    for(int i=1;i<=n;i++)
    {
        if(ans<a[i]){
            cout<<"-1\n";
            return 0;
        }
    }
    for(int i=1;i<=n;i++)
    {
        printf("%.6lf\n",ans-a[i]);
    }
    return 0;
}
