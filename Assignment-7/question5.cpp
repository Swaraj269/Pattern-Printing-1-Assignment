#include <iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter an even number: ";
    cin>>n;
    for(int i=1; i<=(2*n-1); i++){
        if(i<=n){
            for(int j=1; j<=i; j++){
                cout<< "*"<<" ";
            }
        }
        else{
            for(int k =1; k<= (2*n-1)-i; k++){
                cout<< "*"<< " ";
            }
        }
        cout<<endl;
    }
    return 0;
}