#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    map <string, int> mp;
    while(t--){
        int q; cin>>q;
        
        if(q==1){
            string s; cin>>s; 
            int score; cin>>score;
            if(mp.find(s)!=mp.end()){
                mp[s]+=score;
            }
            else mp.insert({s, score});
        }
        else if(q==2){
            string s; cin>>s;
            mp.erase(s);
        }
        else if(q==3){
            string s; cin>>s;
            map <string, int> :: iterator it;
            it=mp.find(s);
            if(it==mp.end()) cout<<0<<endl;
            else cout<<it->second<<endl;
            }
    }
    // for(auto x: mp) cout<<x.first<<" "<<x.second<<endl;

    return 0;
}