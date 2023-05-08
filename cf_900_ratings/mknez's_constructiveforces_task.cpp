#include <bits/stdc++.h> 
using namespace std;

int main(){
    int t; cin>>t;

    while(t--){
        int n; cin>>n;
        if(n%2==0){
            cout<<"YES"<<endl;
            for(int i=0; i<n/2; i++) {cout<<1<<" "<<-1<<" ";}
            cout<<endl;
        }else{
            int a=n/2, b=a-1;
            if(a==0 || b==0) cout<<"NO";
            else{
                cout<<"YES"<<endl;
                for(int i=0; i<n/2; i++){cout<<b<<" "<<-a<<" ";}
                cout<<" "<<b<<endl;
            }
            
        }
    }

    return 0;
}