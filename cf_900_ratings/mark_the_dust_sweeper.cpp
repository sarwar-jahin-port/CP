#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll int t; cin>>t;
    while(t--){
        ll int n, m, sum=0; cin>>n; m=n;
        vector <int> vc;
        while(n--){
            int x; cin>>x;
            vc.push_back(x);
        }
        ll int i;
        for(i=0; i<m; i++){
            if(vc[i]!=0) break;
        }
        // cout<<i<<endl;
        for(i; i<m; i++){
            if(vc[i]==0) sum++;
            else sum+=vc[i];
            // cout<<sum<<"+"<<vc[i]<<endl;
        }
        if(vc.back()==0)sum--;
        else sum-=vc.back();
        if(sum<0)cout<<0<<endl;
        else cout<<sum<<endl;
    }


    return 0;
}