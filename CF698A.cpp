#include<iostream>
#include<cstring>
using namespace std;
int b[105];
int g[105][105];
int n;
int main(){
    cin>>n;
    memset(g,127,sizeof(g));
    for(int i=1;i<=n;i++)
    {
        cin>>b[i];
    }
    g[0][0]=g[0][1]=g[0][2]=0;
    for(int i=1;i<=n;i++)
    {
        g[i][0]=min(min(g[i][0],g[i-1][0]),min(g[i-1][1],g[i-1][2]))+1;
        if(b[i]==1||b[i]==3){
            g[i][1]=min(g[i-1][0],g[i-1][2]);
        }
        if(b[i]==2||b[i]==3){
            g[i][2]=min(g[i-1][0],g[i-1][1]);
        }
    }
    cout<<min(g[n][0],min(g[n][1],g[n][2]))<<endl;
    return 0;
}





















