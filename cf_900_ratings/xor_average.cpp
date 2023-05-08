#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;

    while(t--){
        int x, n; cin>>n; 
        if(n%2==0){
            int a=n+1;
            for(int i=0; i<(n-1); i++) cout<<a<<" ";
            cout<<1<<endl;
        }else{
            for(int i=0; i<n; i++) {cout<<n<<" ";}
            cout<<endl;
        }
    }

    return 0;
}