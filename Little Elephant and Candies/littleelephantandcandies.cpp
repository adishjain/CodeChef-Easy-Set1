#include <iostream>
using namespace std;
int main(){
int t,n,c,r=0;
cin>>t;
while(t--){
    cin>>n>>c;
    r=0;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        r+=a[i];    }
    if(r<=c) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
return 0;
}
