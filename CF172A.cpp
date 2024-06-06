#include<iostream>
#include<cstring>
using namespace std;
int tot;
int n;
int j;
string t,u;
int main(){
    cin>>n>>t;
    tot=t.length();
    for(int i=1;i<n;i++)
    {
        cin>>u;
        for(j=0;j<tot;j++)
        {
            if(t[j]!=u[j])break;
        }
        tot=j;
    }
    cout<<tot<<endl;
    return 0;
}
























