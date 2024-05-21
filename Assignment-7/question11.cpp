#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter a number: ";
    cin>> n;
    for(int i = 1; i<=(2*n-1); i++){
        if(i<=n){
            for(int j = 1; j<=n-i; j++){
                cout<< " "<< " ";
            }
            for(int k =(n-i)+1; k<=n; k++){
                cout<< "*"<<" ";
            }
        }
        else{
            for(int j = 1; j<=i-n; j++){
                cout<<" "<<" ";
            }
            for(int k=(i-n)+1; k<=(n); k++){
                cout<< "*"<< " ";
            }
        }
        cout<< endl;
    }
    return 0;
}