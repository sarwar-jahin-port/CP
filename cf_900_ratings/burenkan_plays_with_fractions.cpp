#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t; cin>>t;

    while(t--){
        ll int a, b, c, d, ad, bc; cin>>a>>b>>c>>d;
        ad=a*d; bc=b*c;
        if(ad==bc) cout<<0<<endl;
        else if(ad==0 || bc==0) cout<<1<<endl;
        else if(ad!=bc && (ad%bc==0 || bc%ad==0)){
            cout<<1<<endl;
        }
        else cout<<2<<endl;
    }
    return 0;
}