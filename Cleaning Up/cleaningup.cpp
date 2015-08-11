#include <iostream>
#include <algorithm>
#define c(n) cin>>n
#define s(n,m) cin>>n>>m
#define FOR(i,a,b) for(int i=a;i<b;i++)
using namespace std;
int main(){
int t,n,m;
c(t);
while(t--){
    s(n,m);
    int c[m],b[n-m],l=0;
    FOR(i,0,m) c(c[i]);
    sort(c,c+m); //FOR(i,0,m) cout<<" "<<i<<" "<<c[i]<<endl;
    for(int g=n;g>0;g--){
        int r=-1;
        FOR(j,0,m){

            if(g!=c[j]){
                r=1;
            }
            else {
                r=0;
                b[l]=-1;
                break;
            }
        }
        if(r==1){ b[l]=g; l++;  }
     }   sort(b,b+l);
     for(int k=0;k<n-m;k+=2)
        cout<<b[k]<<" ";
        cout<<endl;
     for(int k=1;k<n-m;k+=2)
        cout<<b[k]<<" ";
     cout<<endl;
  }
return 0;
}
