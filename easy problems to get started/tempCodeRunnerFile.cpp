#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
    int arr[T];
    float bracket,result;
	for(int i=0;i<T;i++){
	    cin>>arr[i];
	}
	for(int i=0;i<T;i++){
	    bracket=(0.143*arr[i]);
        result=pow(bracket,arr[i]);
        cout<<round(result)<<"\n";
	}
	
	return 0;
}