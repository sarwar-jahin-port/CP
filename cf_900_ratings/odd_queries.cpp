#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        long long int sum=0;
        int n, q; cin>>n>>q;
        vector <long long int> vc(n+1);
        for(int i=1; i<=n; i++){
            int e; cin>>e; 
            sum+=e;
            vc[i]=sum;
        }
        while(q--){
            long long int l, r, k, x, y; cin>>l>>r>>k;
            x=vc[r]-vc[l-1];
            y=(r-l)+1;
            y*=k;
            x=(sum-x)+y;
            if(x%2==0) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }

    return 0;
}