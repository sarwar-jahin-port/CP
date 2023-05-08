#include <bits/stdc++.h>
using namespace std;

int main(){
    int prev=0, r=0, mx=0, cnt=0, mx_cnt=0, n; cin>>n;
    while(n--){
        int x; cin>>x;
        if(x>=prev && r==0){
            cnt++;
            prev=x;
            if(x>mx) mx=x;
        }
        else if(x<prev){
            cnt++;
            prev=x;
            mx=x;
            r=1;
        }
        else if(x>mx && r==1){
            if(mx_cnt<cnt) mx_cnt=cnt;
            cnt=1;
        }
        else if(x==mx && r==1) cnt++;
    }
    if(mx_cnt!=0) cout<<mx_cnt<<endl;
    else cout<<cnt<<endl;
    return 0;
}