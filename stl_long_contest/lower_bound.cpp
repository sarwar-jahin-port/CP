#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    vector <int> vc;

    for(int i=0; i<n; i++){
        int x; cin>>x;
        vc.push_back(x);
    }
    int t; cin>>t;
    while(t--){
        int f; cin>>f;
        auto it=lower_bound(vc.begin(), vc.end(), f);
        if(it==vc.end()){
            cout<<"NO"<<endl;
        }
        else if(*it==f) cout<<"Yes "<<(it-vc.begin()+1)<<endl;
        else if(*it!=f) cout<<"No "<<(it-vc.begin()+1)<<endl;
    }

    return 0;
}