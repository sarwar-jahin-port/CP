#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n, m; cin>>n>>m;
        vector <int> vc;
        while(n--){
            int x; cin>>x;
            vc.push_back(x);
        }
        sort(vc.begin(), vc.end());
        // for(auto x: vc) cout<<x<<endl;
        int prev_x=0, ch=0;
        for(auto x: vc){
            ch+=x*2+1-prev_x;
            prev_x=x;
        }
        if(n>m) cout<<"NO"<<endl;
        else if(ch-vc[0]<=m) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        vc.clear();
    }

    return 0;
}