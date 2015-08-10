#include <iostream>
#include <algorithm>
#define c(n) cin>>n
#define FOR(i,a,b) for(int i=a;i<b;i++)
using namespace std;
int main(){
int a,n,f=0;
int pie[30]={0},rack[30]={0},check[30]={0};
for(c(a);a--;){
c(n);
FOR(i,0,n) c(pie[i]);
FOR(i,0,n) c(rack[i]);
sort(pie,pie+n);
//FOR(i,0,n) cout<<i<<" "<<pie[i]<<endl;
sort(rack,rack+n);
f=0;
FOR(i,0,n) check[i]=0;
FOR(i,0,n){

    FOR(j,0,n) {
        if(check[j]==0){
        if(pie[i]<=rack[j])
           {
            f++;
             //cout<<" "<<pie[i]<<" "<<rack[j]<<endl;
             check[j]=1;
             break;
           }
         }
    }
}
cout<<f<<endl;
}

return 0;
}
