#include <iostream>
using namespace std;
int main(){
int n,p;
cin>>n;
while(n--){
	cin>>p;
	if(!(p&1)) cout<<"Alice"<<endl;
	else cout<<"Bob"<<endl;
}
return 0;
}
