#include<bits/stdc++.h>
using namespace std;

int main(){
    int A,B,C;
    cin>>A;
    cin>>B;
    cin>>C;

    if((A>=B)&&(A>=C)){
        if(B>=C){
            cout<<B;
        }
        else{
            cout<<C;
        }
    }
    if((B>=A)&&(B>=C)){
        if(A>=C){
            cout<<A;
        }
        else{
            cout<<C;
        }
    }
    if((C>=A)&&(C>=B)){
        if(A>=B){
            cout<<A;
        }
        else{
            cout<<B;
        }
    }
}