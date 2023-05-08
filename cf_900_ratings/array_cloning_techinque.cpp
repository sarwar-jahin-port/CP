#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, r=1; cin>>t;
    while(t--){
        int n, m; cin>>n; m=n;
        vector <int> vc;
            int x, same; cin>>x; same=x; n--; vc.push_back(x);
            if(n==0) {cout<<"here"<<endl; cout<<0<<endl;}
            else{
            while(n--){
                int x; cin>>x;
                if(x==same && r==1) r=1;
                else r=0;
                vc.push_back(x);
                // fr[x]++;
                // if(fr[x]>1)cmn+=fr[x];
            }
            sort(vc.begin(), vc.end());
            for(auto x: vc) cout<<x<<" "; cout<<endl;
            int cmn=1;
            for(int i=0; i<m-1; i++){
                // cout<<vc[i]<<" "<<vc[i+1]<<endl;
                if(vc[i]==vc[i+1]) {cout<<"cmn"<<endl; cmn++; i++;} 
            }
            cout<<cmn<<endl;
            if(cmn==1) cout<<m+1<<endl;
            else if(cmn>1) cout<<m+1-cmn<<endl;
            else if(r==1) cout<<0<<endl;
        }

    }

    return 0;
}
