#include <iostream>
using namespace std;
int main(){
int test,initial_state,coins,answer_needed;
cin>>test;
int game;
while(test--){
cin>>game;
    while(game--){
        cin>>initial_state>>coins>>answer_needed;
        if(coins%2==0||initial_state == answer_needed)
                cout<<coins/2<<endl;
        else
                cout<<coins-(coins/2)<<endl;
    }
}
return 0;
}
