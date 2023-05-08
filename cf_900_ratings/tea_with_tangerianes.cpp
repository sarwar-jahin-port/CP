#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;

    while(t--){
        int cnt=0, r=0, small, x, n; cin>>n;
        vector <int> vc;
        vector <int> :: iterator it;
        while(n--){
            if(r==0){cin>>x; small=x; r=1;}
            else{
                cin>>x;
                vc.push_back(x);
                if(x>(small*2-1)){
                    x=ceil(((double)x/(small*2)));
                    cnt+=x;
                } 
                // while(x>=(small*2)){
                //     x-=(small*2-1);
                //     cnt++;
                // }
                vc.clear();
            }
        }cout<<cnt<<endl;
    }

    return 0;
}