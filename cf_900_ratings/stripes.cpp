#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;

    while(t--){
        string s[4001];
        int r=0;
        for(int i=0; i<8; i++){
            for(int j=0; j<8; j++){
                cin>>s[i][j];
            }
        }
        for(int i=0; i<8; i++){
            for(int j=0; j<8; j++){
                if(s[i][j]=='R') r=1;
                else {r=0; break;}
            }
            if(r==1) break;
        }
        if(r==1) cout<<"R"<<endl;
        else cout<<"B"<<endl;
    }

    return 0;
}