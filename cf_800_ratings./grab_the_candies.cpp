#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n, even=0, odd=0; cin>>n;
        while(n--){
            int x; cin>>x;
            if(x%2==0) even+=x;
            else odd+=x;
        }
        if(even>odd) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}