#include<iostream>
#include<cstring>
using namespace std;
int len;
int f[1000010][10];
char u[1000010];
const int mod=1e9+7;
int main(){
    scanf("%s",u+1);
    len=strlen(u+1);
    f[0][1]=f[0][2]=1;
    for(int i=1;i<=len;i++)
    {
        if(u[i]=='?'){
            f[i][0]=((f[i-1][2]+f[i-1][4])%mod+f[i-1][0])%mod;
            f[i][1]=(f[i-1][1]+f[i-1][3])%mod;
            f[i][2]=(f[i-1][1]+f[i-1][3])%mod;
            f[i][3]=f[i-1][0];
            f[i][4]=f[i-1][0];
        }
        else if(u[i]=='0'){
            f[i][1]=(f[i-1][3]+f[i-1][1])%mod;
        }
        else if(u[i]=='1'){
            f[i][3]=f[i-1][0];
            f[i][2]=(f[i-1][1]+f[i-1][3])%mod;
        }
        else if(u[i]=='2'){
            f[i][4]=f[i-1][0];
        }
        else if(u[i]=='*'){
            f[i][0]=((f[i-1][2]+f[i-1][4])%mod+f[i-1][0])%mod;
        }
    }
    cout<<((f[len][0]+f[len][1])%mod+f[len][3])%mod<<endl;
    return 0;
}


























