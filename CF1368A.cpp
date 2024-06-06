#include<bits/stdc++.h>
using namespace std;
int a,b,n;
int cnt;
int t;
int main(){
    cin>>t;
    while(t--){
        cin>>a>>b>>n;
        cnt=0;
        while(a<=n&&b<=n){
            if(a<b){
                a+=b;
                cnt++;
            }
            else{
                b+=a;
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}

























