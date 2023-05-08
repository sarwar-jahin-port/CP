#include <bits/stdc++.h>
using namespace std;

int main(){
    int ans=0, n, m; cin>>n>>m;
    vector <pair <int, int>> pr;

    for(int i=0; i<m; i++){
        int a, b; cin>>a>>b;
        pr.push_back({b, a});
    }
    sort(pr.rbegin(), pr.rend());
    for(auto x: pr){
        if(x.second<=n){
            ans+=(x.second*x.first);
            n-=x.second;
        }
        else if(x.second>n && n!=0){
            ans+=(x.first*n);
            n=0;
        }
        if(n==0) break;
    }
    cout<<ans<<endl;
    return 0;
}