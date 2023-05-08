#include <bits/stdc++.h>
using namespace std;
int checker(string s){
    for(int i=1; s[i]; i++){
        char temp = s[i];
        if(s[i]>='a' && s[i]<='z'){
            if(s[i-1]=='1'){
                for(int j=1; s[j]; j++){
                    if(s[j]==temp) s[j]='0';
                }
            }
            else if(s[i-1]=='0'){
                for(int j=1; s[j]; j++){
                    if(s[j]==temp) s[j]='1';
                }
            }
        }
    }
    for(int i=1; s[i]; i++){
        if(s[i]==s[i-1]) return 1;
    }
    return 0;
}
 
int main(){
    int t; cin>>t;
    while(t--){
        int n, c1, c2; cin>>n; 
        string s, s1; cin>>s; s1=s;
        char temp = s[0];
        s[0]='1';
        s1[0]='0';
        for(int i=1; s[i]; i++){
            if(s[i]==temp) s[i]='1';
        }
        c1 = checker(s);
        for(int i=1; s1[i]; i++){
            if(s1[i]==temp) s1[i]='0';
        }
        c2 = checker(s1);
        
        if(c1==0 || c2==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
        
    return 0;
}