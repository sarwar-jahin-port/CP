#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int x, n, cnt=0, r=0; cin>>n;
        while(n--){
            cin>>x;
            if(x>0) r=1;
            if(x==0 && r==0) {r=0;}
            if(x==0 && r==1) {r=0; cnt++;}
        }
        if(cnt>=2) cout<<2<<endl;
        else if(x==0)cout<<cnt<<endl;
        else cout<<++cnt<<endl;
        
    }

    return 0;
}