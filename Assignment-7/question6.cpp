#include <iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter the number of rows: ";
    cin>>n;
    int m;
    cout<< "Enter the number of columns: ";
    cin>>m;
    for(int i= 1; i<=n; i++){
        if(i==1 || i==n){
            for(int j = 1; j<=m; j++){
                cout<<"*"<<" ";
            }
        }
        else{
            for(int k=1; k<=m; k++){
                if(k==1 || k==m){
                    cout<<"*"<<" ";
                }
                else{
                    cout<<" "<<" ";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}