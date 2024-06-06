#include<bits/stdc++.h>
using namespace std;
long long x,y;
int main(){
    cin>>x>>y;
    if(x>y){
        int t=x;
        x=y;
        y=t;
    }
    if(x==1)
    {
        if(y%6==0)cout<<y;
        else if(y%6<=3)cout<<y-y%6;
        else if(y%6>3)cout<<y+y%6-6;
    }
    else if(x==2&&y==2)cout<<0;
    else if(x==2&&y==3)cout<<4;
    else if(x==2&&y==7)cout<<12;
    else if(x%2!=0&&y%2!=0)cout<<x*y-1;
    else cout<<x*y;
    return 0;
}

























