#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,K;
    cin>>N>>K;
    int arr[N];
    int ans = -1;
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    for(int i=0;i<N;i++){
        if(arr[i]==K){
            ans=1;
        }
    }
    cout<<ans;
}