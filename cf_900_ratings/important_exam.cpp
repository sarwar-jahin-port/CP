#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, l, i, j, o, p, max, ans=0; cin>>n>>m; o=n; p=m;
    vector <string> vc;
    vector <int> point, mx;
    while(n--){
        string s; cin>>s;
        vc.push_back(s);
    }
    while(m--){
        int x; cin>>x;
        point.push_back(x);
    }
    l = vc[0].length(); 

    for(i=0; i<p; i++){
        vector <int> fr(5, 0);
        for(j=0; j<o; j++){
            // cout<<vc[j][i];  
            if(vc[j][i]=='A') fr[0]++;
            else if(vc[j][i]=='B') fr[1]++;
            else if(vc[j][i]=='C') fr[2]++;
            else if(vc[j][i]=='D') fr[3]++;
            else if(vc[j][i]=='E') fr[4]++; 
        }
        max = *max_element(fr.begin(), fr.end());
        // cout<<max<<endl;
        mx.push_back(max);
    }
    
    int k=0;
    while(p--){
        ans+= point[k] * mx[k]; //cout<<point[k]<<" "<<mx[k]<<" "<<ans<<endl;
        k++;
    }cout<<ans<<endl;

    return 0;
}