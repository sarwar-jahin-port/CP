#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll int d=0;
    string s; cin>>s;

    if(s.length()==1) cout<<1<<endl;
    else{
        int l=s.length(); d=s[0]-'0';
        for(int i=1; i<l; i++){
            d= (d*10) + (s[i]-'0');
        }
        // cout<<d+100-d<<endl;
        int a=s[0]-'0'+1;
        a=a*pow(10, l-1);
        cout<<a-d<<endl;
    }

    return 0;
}