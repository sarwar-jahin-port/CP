#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, n, prev, current; cin>>t;

    while(t--){
        cin>>n;
        int i=0; 
        while(n--){
            if(i==0) {cin>>current; if(current==1)current++; cout<<current<<" ";}
            else{
                prev=current;
                cin>>current;
                if(current==1)current++;
                // cout<<current<<endl<<prev<<endl;
                while(current%prev==0) current++;
                cout<<current<<" ";
            }
            i++;
        }cout<<endl;
    }

    return 0;
}