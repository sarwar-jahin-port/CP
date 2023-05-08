#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;

    while(t--){
        long long int n, s=0; cin>>n;
        while(n!=1){
            if(n%6==0){
                n=n/6;
                s++;
            }else{
                if(n%2==0){cout<<-1<<endl; break;}
                else{n=n*2; s++;}
            }
        }
        if(n==1) cout<<s<<endl;
    }


    return 0;
}