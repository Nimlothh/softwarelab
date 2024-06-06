#include<iostream>
#include<algorithm>
using namespace std;
int n;
struct node{
    int a,b;
}t[100005];
bool cmp(node x,node y){
    return x.a<y.a;
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>t[i].a;
        t[i].b=i;
    }
    sort(t+1,t+n+1,cmp);
    if(t[1].a==t[2].a){
        cout<<"Still Rozdil"<<endl;
        return 0;
    }
    else cout<<t[1].b<<endl;
    return 0;
}




















