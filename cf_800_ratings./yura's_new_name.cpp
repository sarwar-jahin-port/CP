#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int cnt=0;
        string s; cin>>s;
        if(s.size()==1){
            if(s[0]=='_') cout<<2<<endl;
            else cout<<1<<endl;
        }else{
            for(int i=0; s[i]; i++){
            if(s[i]=='^' && i<s.size()-1){
                if(s[i+1]=='_' || s[i+1]=='^'){}
                else cnt++;
            }
            else if(s[i]=='_' && i<s.size()-1){
                if(s[i+1]=='^') {}
                else cnt++;
            }
        }
        if(s[0]=='_' || s[s.size()-1]=='_') cnt++;
        cout<<cnt<<endl;
        }
        
    }

    return 0;
}