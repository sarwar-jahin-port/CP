#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t; 

    while(t--){
        int a, b, c, d, ans=-1; cin>>a>>b>>c>>d;
        if(a==c && b==d){ans=0;}
        else if(d<b){ans=-1;}
        else if(c<=a && d>b){
            ans=abs(abs(c)-abs(a)) + 2*abs((abs(b)-abs(d)));
        }else if(c>a && d>b){
            if(a==b && c<=d) ans=(c-a)+((d-c)*2);
            if(a!=b && c<d) ans=(c-a)+((d-c)*2);
        }else if(d==b){
            ans=abs(abs(a)+abs(c));
        }cout<<ans<<endl;
    }

    return 0;
}