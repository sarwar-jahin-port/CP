#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;

    while(t--){
        int n, k; cin>>n>>k;
        vector <int> a(n);

        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        if(is_sorted(a.begin(), a.end())){
            cout<<0<<endl;
            continue;
        }

        int ordered=0;
        for(int i=0; i<n; i++){
            if(a[i]==ordered+1){
                ordered++;
            }
        }
        int bug=n-ordered;
        int ans=(bug+k-1)/k;
        cout<<ans<<endl;
    }

    return 0;
}