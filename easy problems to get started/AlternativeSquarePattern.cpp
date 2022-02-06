#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin>>N;
    int q=1;
    int x=1;
    for(int i=0;i<N;i++){

        if(i%2==0)
        {
            x=(5*i)+1;
            for(int j=1;j<=5;j++){
                cout<<x<<" ";
                x++;
            }
        }
        else
        {
            x=(10*q);
            for(int j=1;j<=5;j++){
                cout<<x<<" ";
                x--;
            }
            q++;
        }
        cout<<"\n";
    }
}