#include<iostream>
using namespace std;
int n,cnt;
char w[200010];
int main(){
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>w[i];
    }
    for(int i=2;i<=n;i++)
    {
        if(w[i-1]==w[i])
        {
            if(w[i-1]!='R'&&w[i+1]!='R')
            {
                w[i]='R';
                cnt++;
                continue;
            }
            if(w[i-1]!='G'&&w[i+1]!='G')
            {
                w[i]='G';
                cnt++;
                continue;
            }
            if(w[i-1]!='B'&&w[i+1]!='B')
            {
                w[i]='B';
                cnt++;
                continue;
            }
        }
    }
    cout<<cnt<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<w[i];
    }
    cout<<endl;
    return 0;
}


















