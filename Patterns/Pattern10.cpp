#include<iostream>
using namespace std;

int main(){
    int n = 5;
    for(int i=0;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int k=n-1;k>0;k--){
        for(int l=1;l<=k;l++){
        cout<<"*";
    }
    cout<<endl;
   
} return 0;
}