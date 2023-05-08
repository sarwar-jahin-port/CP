#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;

    while(t--){
        long long int x, n, sum1=0, sum2=0, max=0; cin>>n;
        for(int i=0; i<n; i++) {cin>>x; sum1+=x;}
        for(int i=0; i<n; i++){
            cin>>x;
            sum2+=x;
            if(x>max)max=x;
        }
        cout<<sum1+sum2-max<<endl;
    }

    return 0;
}