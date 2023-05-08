#include <bits/stdc++.h>
using namespace std;

int main(){
    int i, j, k, n, cnt=0, max=0; cin>>n;
    vector <int> vc;
    while(n--){
        int x; cin>>x;
        vc.push_back(x);
    }
    // for(auto x: vc) cout<<x<<endl;
    for (i=0; i<vc.size(); i++){
        for(j=i; j>0; j--){
            if(vc[j-1]<=vc[j]){
                cnt++;
            }
            else break;
        }
        for(k=i; k<vc.size()-1; k++){
            // cout<<"here";
            if(vc[k+1]<=vc[k]){cnt++;}
            else break;
        }
        if(cnt>max) max=cnt;
        cnt=0;
    }
    cout<<max+1<<endl;
    return 0;
}