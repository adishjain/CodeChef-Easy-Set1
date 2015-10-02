#include <iostream>
using namespace std;
bool ispalin(long a){
    long i=a;
    long rem=0,b=0;
    while(i){
        rem=i%10;
        b=b*10+rem;
        i=i/10;
    }
    if(b==a)
        return true;
    else
        return false;
}
int main(){
int t;
long a,b,sum;
cin>>t;
while(t--){
    cin>>a>>b;
    sum=0;
    for(long i=a; i<=b; i++)
             if(ispalin(i))
                sum+=i;
    cout<<sum<<endl;
}
return 0;
}
