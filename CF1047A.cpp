#include<iostream>
using namespace std;
int a,b,c,n;
int main(){
    scanf("%d",&n);
    for(a=1;a<n;a++){
        for(b=1;b<n;b++){
            if(a%3!=0&&b%3!=0&&(n-a-b)%3!=0){
                cout<<a<<' '<<b<<' '<<n-a-b<<' '<<endl;
                return 0;
            }
        }
    }
}

















