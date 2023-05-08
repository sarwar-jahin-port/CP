#include <bits/stdc++.h>
using namespace std;
long long int find_min(long long int w){
    long long int rem=0, ans=0, ans1=0;
    ans=ceil(w/6.0);
    return ans;
}
long long int find_max(long long int w){
    long long int rem=0, ans=0, ans1=0;
    ans=floor(w/4.0);
    return ans;
}

int main(){
    int t; cin>>t;
    while(t--){
        long long int w, min, max; cin>>w;
        if(w%2!=0 || w<4) cout<<-1<<endl;
        else{
            min = find_min(w);
            max = find_max(w);
            cout<<min<<" "<<max<<endl;
        }
    }

    return 0;
}