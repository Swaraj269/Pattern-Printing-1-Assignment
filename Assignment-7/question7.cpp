#include <iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter a number: ";
    cin>>n;
    for(int i=1; i<=n; i++){
            for(int k=1; k<=n-i; k++){
                cout<<" "<< " ";
            }
            for(int l=(n-i)+1; l<=n;l++){
                cout<<"*"<<" ";
            }
            for(int m=n+1; m<=(2*n-i); m++){
                cout<<"*"<<" ";
            }
            cout<<endl;
    }
    return 0;
}