#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        string s, se; cin>>s>>se;
        // vector <int> fr(se.size(), 0);
        // for(int i=0; se[i]; i++){
        //     for(int j=0; se[j]; j++){
        //         if(se[i]==se[j]) fr[i]++;
        //     }
        // }
        // for(auto x: fr) cout<<x<<endl;
        int s_ind=s.size();
        for(int i=se.size()-1; i>=0; i--){
            for(int j=s.size()-1; j>=0; j--){
                if(s[j]==se[i]){
                    // cout<<j<<"here"<<endl;
                    // if(1){
                        se[i]='1';
                        s[j]='1';
                        if(j<s_ind){s_ind=j; cout<<s_ind<<" "<<se[i]<<" correct"<<endl; break;}
                        else {cout<<"NO"<<endl; break;}
                    
                    // }else cout<<"not found"<<endl;
                }
            }
        }cout<<endl;
        for(int i=0; se[i]; i++){
            if(se[i]=='1') continue;
            else cout<<"NO"<<break;
        }
    }

    return 0;
}