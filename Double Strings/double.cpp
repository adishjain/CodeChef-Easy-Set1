#include<iostream>
using namespace std;
int main(){
int n,j;
cin>>n;
for(int i=0;i<n;i++){
cin>>j;

if(j%2==0)
    cout<<j<<endl;
else
    cout<<j-1<<endl;
}
return 0;
}
