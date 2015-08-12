#include <iostream>
using namespace std;
bool prime(int);
bool palin(int);
int main(){
long a;
cin>>a;
for(int i=a+1;;i++){
    //cout<<"Checking palin for : "<<i<<endl;
        if(palin(i)){

            if(prime(i)){
                //cout<<"Checking prime for : "<<i<<endl;
              cout<<i<<endl;
              break;
            }
        }
}
return 0;
}
bool prime(int i){
    if(i<0) i=-i;
if(i<2) return 0;
    for(int j=2;j<=i/2;j++){

        if(i%j==0) return 0;
    }
return 1;
}
bool palin(int i){
    if(i<0) i=-i;
    int r=i;
    int j=0;
    while(i>0){
        j*=10;
        j+=i%10;
        i=i/10;
    }
    if(j==r) return 1;
    else return 0;
}
