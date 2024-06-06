#include<iostream>
using namespace std;
int a,b,n,m;
int cnt;
int main(){
    cin>>n>>m;
    for(a=0;a<=max(n,m);a++)
    {
        for(b=0;b<=max(n,m);b++)
        {
            if((a*a+b==n)&&(a+b*b==m))
            {
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}






















