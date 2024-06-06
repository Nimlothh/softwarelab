#include<bits/stdc++.h>
using namespace std;
long long a,m;
int main(){
    cin>>a>>m;
    if(a%m==0)
    {
        cout<<"Yes"<<endl;
        return 0;
    }
    for(int i=1;i<=m+50;i++)
    {
        a+=a%m;
        if(a%m==0)
        {
            cout<<"Yes"<<endl;
            return 0;
        }
    }
    cout<<"No"<<endl;
    return 0;
}




