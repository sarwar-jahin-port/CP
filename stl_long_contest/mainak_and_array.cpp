#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, n, max=0, prev=0, d; cin>>t;

    while(t--){
        cin>>n;
        if(n==1){int x; cin>>x; cout<<0<<endl;}
        else{
        vector <int> vc;
        while(n--){
            int x; cin>>x;
            vc.push_back(x);
            d=prev-x;
            if(d>max) max=d;
            prev=x;
        }
        // cout<<max<<endl;
        auto mx=max_element(vc.begin()+1, vc.end());
        d=*mx-vc[0];
        if(d>max) max=d;
        // cout<<max<<endl;
        auto mn=min_element(vc.begin(), vc.begin()+vc.size()-1);
        d=vc.back()-*mn;
        if(d>max) max=d;
        cout<<max<<endl;
        }
        max=0; d=0; prev=0;
    }

    return 0;
}