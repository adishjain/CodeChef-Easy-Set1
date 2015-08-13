#include <iostream>
#include <algorithm>
int a[21];
using namespace std;
int solve(int i,int m,int n)
{
int l,s;
l=0;
    for(int j=i;j<n;j++)
    {
        s=m-a[j];
        if(s==0)
        return 1;
        else if(s>0)
        {
        l=solve(j+1,s,n);
        if(l)
        return 1;
        }
    }
return 0;
}

int main()
{
    int t;
  cin>>t;
    while(t--)
    { int l=0;
        int n,m;
        cin>>n>>m;
        for(int i=0;i<n;i++)
        {
          cin>>a[i];
        }//for ends here
    sort(a,a+n);
    l=solve(0,m,n);
    if(l)
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;
     }//while ends here
     return 0;
}
