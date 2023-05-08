#include <bits/stdc++.h>
using namespace std;

int main(){
    vector <long long int> vc;
    int n; cin>>n;

    for(int i=0; i<n; i++){
        int x; cin>>x;
        vc.push_back(x);
    }
    sort(vc.begin(), vc.end());
    for(int i=0; i<n; i++){
        cout<<vc[i]<<" ";
    }

    return 0;
}