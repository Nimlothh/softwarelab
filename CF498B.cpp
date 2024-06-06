#include<iostream>
#include<cmath>
using namespace std;
int r[5010];
double g[5010][5010];
double l[5010];
int n,t;
double tot,s,w;
int main(){
    cin>>n>>t;
    for(int i=1;i<=n;i++)
    {
        cin>>l[i]>>r[i];
        l[i]=1.0*l[i]/100;
    }
    g[0][0]=1;
    for(int i=1;i<=n;i++)
    {
        s=0;
        w=pow(1-l[i],r[i]-1);
        for(int j=1;j<=t;j++)
        {
            s*=1-l[i];
            s+=g[i-1][j-1]*l[i];
            if(j>=r[i]){
                s-=g[i-1][j-r[i]]*w*l[i];
                g[i][j]+=g[i-1][j-r[i]]*w;
            }
            g[i][j]+=s;
            tot+=g[i][j];
        }
    }
    printf("%.9lf",tot);
    return 0;
}



























