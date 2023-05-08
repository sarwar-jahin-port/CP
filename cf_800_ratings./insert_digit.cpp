#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n, d, l, r=0; cin>>n>>d;
        string s; cin>>s;
        // l = s.length() + 1;
        vector <char> vc;
        for(int i=0; i<n; i++){
            int x = s[i]-'0';
            if(d>x && r==0){
                vc.push_back(d+'0');
                vc.push_back(s[i]);
                r=1;
            }else{
                vc.push_back(s[i]);
            }
        }
        if(r==0) vc.push_back(d+'0');
        for(auto x: vc) cout<<x;
        cout<<endl;
    }

    return 0;
}