#include <bits/stdc++.h>
using namespace std;

int main(){
    int q; cin>>q;
    set <int> st;
    set <int> :: iterator it;

    while(q--){
        long int y, x; cin>>y>>x;
        if(y==1){
            st.insert(x);
        }
        else if(y==2){
            st.erase(x);
        }
        else if(y==3){
            it=st.find(x);
            if(it==st.end()) cout<<"No"<<endl;
            else cout<<"Yes"<<endl;
        }
    }
    // for(auto x:st) cout<<x<<endl;
    return 0;
}