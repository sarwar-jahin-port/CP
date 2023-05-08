#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n, max=0; cin>>n;
        vector <int> vc;
        while(n--){
            int x; cin>>x;
            if(x>max) max = x;
            vc.push_back(x);
        }
        int big = vc[vc.size()-1], cnt=0;
        for(int i=vc.size()-1; i>=0; i--){
            if(vc[i]>big){
                cnt++;
                big=vc[i];
                if(vc[i]==max) break;
            }
        }
        cout<<cnt<<endl;
    }

    return 0;
}