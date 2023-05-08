#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;

    while(t--){
        int n, bh, bm, h=24, m=60; cin>>n>>bh>>bm;
        while(n--){
            int ah, am, a=0, b=0; cin>>ah>>am;
            if(bh==ah && bm==am) {h=0; m=0;}
            else if(bh>=ah && bm>am){
                a=23-bh+ah;
                b=60-35+am;
                if(b>60){
                    a+=b/60;
                    b%=60;
                }
                if(a<h){h=a; m=b;}
                // cout<<a<<" "<<b<<endl;
            }
            else if(bh<ah){
                if(am<bm){
                    am+=60;
                    ah--;
                }
                a=ah-bh;
                b=am-bm;
                if(a<h){h=a; m=b;}
                // cout<<a<<" "<<b<<endl;
            }
        }
        cout<<h<<" "<<m<<endl;
    }

    return 0;
}