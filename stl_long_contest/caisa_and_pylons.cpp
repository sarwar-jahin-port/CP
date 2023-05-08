#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int sum=0;
    int n, prev, first; cin>>n>>prev;
    first=prev;
    n--;
    while(n--){
        int x; cin>>x;
        sum+=prev-x;
        prev=x;
    }
    if(sum<0){
        cout<<-sum+first<<endl;
    }
    else if(sum>0) cout<<0<<endl;
    else cout<<first<<endl;
}