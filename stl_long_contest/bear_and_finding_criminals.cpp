#include <bits/stdc++.h>
using namespace std;

int main(){
    int i, cnt=0, n, a, fr[101]={0}; cin>>n>>a;
    
    for(int i=0; i<n; i++){
        int x; cin>>x;
        if(x==1) fr[i]++;
    }
    if(fr[a-1]==1) cnt++;
    int b=a-1;
    for(i=1; b-i>=0 && b+i<n; i++){
        if(fr[b+i]==1 && fr[b-i]==1) cnt+=2;
    }
    // cout<<cnt<<endl;
    int j=i;
    // cout<<j<<endl;
    i+=a-1;
    // cout<<i<<endl;
    if(i<n){
        for(i; i<n; i++){
            if(fr[i]==1)cnt++;
        }
    }
    else if((a-j!=0)){
        for(int i=a-j-1; i>=0; i--){
            if(fr[i]==1) cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}