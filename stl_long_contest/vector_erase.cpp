#include <bits/stdc++.h>
using namespace std;

int main(){
    vector <int> vc;
    int n; cin>>n;

    for(int i=0; i<n; i++){
        int x; cin>>x;
        vc.push_back(x);
    }
    int e; cin>>e;
    vc.erase(vc.begin()+(e-1));
    int a, b; cin>>a>>b;
    vc.erase(vc.begin()+(a-1), vc.begin()+(b-1));

    cout<<vc.size()<<endl;
    for(auto x: vc) cout<<x<<" ";

    return 0;
}