#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    string a="BAN";

    while(t--){
        int b, n; cin>>n;
        string s;
        vector <pair <int,int>> vc;
        for(int i=0; i<n; i++){
            s+=a;
        }
        int j=0;
        // cout<<s.size();
        for(int i=0; i<s.size(); i++){
            if(s[i]=='A'){
                vc.push_back({i, 0});
            }
        }
        j=0;
        for(int i=s.size(); i>=0; i--){
            if(s[i]=='N'){
                vc[j].second=i;
                j++;
            }
        }
        if(n%2!=0){
            cout<<n/2+1<<endl; b=n/2+1;
        }else {cout<<n/2<<endl; b=n/2;}
        for(int i=0; i<b; i++){
            cout<<vc[i].first+1<<" "<<vc[i].second+1<<endl;
        }
    }

    return 0;
}