#include <iostream>
using namespace std;
int main(){
int a,b,c;
cin>>a>>b;
c=(a-b)%10;
if(c>=0 && c<=8)
    cout<<a-b+1;
else if(c==9)
    cout<<a-b-1;
return 0;
}
