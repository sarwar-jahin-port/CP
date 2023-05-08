#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n, r=0, cnt=0; cin>>n;
        vector <int> vc;
        while(n--){
            int x; cin>>x;
            vc.push_back(x);
        }
        for(int i=vc.size()-1; i>0; i--){
            if(vc[i-1]>=vc[i]){
                while(vc[i-1]>=vc[i]){
                    vc[i-1]/=2;
                    cnt++;
                    if(vc[i-1]==0) break;
                }
            }
        }
        for(int i=0; i<vc.size()-1; i++){
            if(vc[i+1]>vc[i]) r=1;
            else {r=0; break;}
        }
        if(vc.size()==1) cout<<0<<endl;
        else if(r==0) cout<<-1<<endl;
        else cout<<cnt<<endl;
    }

    return 0;
}