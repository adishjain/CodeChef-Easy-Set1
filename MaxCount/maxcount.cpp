#include <iostream>
#include <algorithm>
# define c(n) cin>>n
# define FOR(i,a,b) for(int i=a;i<b;i++)
using namespace std;
int main(){
int t,n,a[100],check[100]={0},temp,counter=0,maxcount=-1,temp2=0,maxcount1=0;
c(t);
FOR(i,0,t){
    c(n);
    FOR(j,0,n){
        c(a[j]);
    }
    sort(a,a+n);
    //FOR(j,0,n) cout<<j<<" "<<a[j]<<endl;
    maxcount=-1;
    maxcount1=0;
    temp2=0;
    FOR(j,0,n) check[j]=0;
    FOR(j,0,n){
        counter = 0;
        temp=j;
        FOR(k,j,n){
            if(check[k]==0){
                if(a[k]==a[temp]){
                    counter++;
                    check[k]=1;
                }
                else break;
            }
            if(counter>maxcount){
                maxcount = counter;

                temp2 = k;
            }
        } if(maxcount1<maxcount){
             maxcount1= maxcount;
        }

    }
    cout<<a[temp2]<<" "<<maxcount<<endl;
}
return 0;
}
