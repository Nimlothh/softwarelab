#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int n;
int p[4005];
int a[3];
int main(){
    cin>>n>>a[1]>>a[2]>>a[3];
    memset(p,-1,sizeof(p));
    p[0]=0;
    for(int i=1;i<=3;i++)
    {
        for(int j=a[i];j<=n;j++)
        {
            if(p[j-a[i]]!=-1)
            {
                p[j]=max(p[j-a[i]]+1,p[j]);
            }
        }
    }
    cout<<p[n]<<endl;
    return 0;
}



























