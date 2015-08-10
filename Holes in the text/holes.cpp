#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main(){
int n,r,i;
cin>>n;
char c[n][100];
int *a = new int[n];
getchar();
for(i=0;i<n;i++)
    gets(c[i]);
for(i=0;i<n;i++){
        r=0;
       for(int j=0;j<strlen(c[i]);j++){
        if(c[i][j]=='A' || c[i][j]=='D' || c[i][j]=='O' || c[i][j]=='P' || c[i][j]=='Q' || c[i][j]=='R')
         r++;
else if(c[i][j]=='B')
    r+=2;
       }
    a[i]=r;
    }
for(i=0;i<n;i++)
    cout<<a[i]<<endl;
return 0;
}
