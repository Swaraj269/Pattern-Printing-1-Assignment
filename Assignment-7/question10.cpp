#include <iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter a number: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=0; j<=i-1; j++){
            cout<< i-j << " ";
        }
        cout<< endl;
    }
    return 0;
}