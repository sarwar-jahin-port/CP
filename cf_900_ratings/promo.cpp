#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, q; cin>>n>>q; 
    vector <int> vc;
    while(n--){
        int x; cin>>x; 
        vc.push_back(x);
    }
    sort(vc.rbegin(), vc.rend());
    vector <int> p_sum(vc.size());
    partial_sum(vc.begin(), vc.end(), p_sum.begin());
    // for(auto i: p_sum) cout<<i<<" ";
    while(q--){
        int sum=0;
        int x, y; cin>>x>>y;
        if(x!=y){
            cout<<p_sum[x-1]-p_sum[y-2]<<endl;
        }
        else cout<<p_sum[x-1]<<endl;
    }
    
    return 0;
}