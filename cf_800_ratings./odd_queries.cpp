#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n, k, p=0, m; cin>>n>>k; m=n;
        vector <int> vc, pre; pre.push_back(0);
        while(n--){
            int x; cin>>x;
            vc.push_back(x);
            p+=x;
            pre.push_back(p);
        }
        // for(auto x: vc) cout<<x<<" ";
        // cout<<endl;
        // for(auto x: pre) cout<<x<<" ";
        // cout<<endl;
        while(k--){
            int l, r, q; cin>>l>>r>>q; 
            int range_sum = pre[r] - pre[l-1]; 
            int an = pre[m];
            int sum = an - range_sum + (r-l+1)*q;
            if(sum%2==0) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }

    return 0;
}