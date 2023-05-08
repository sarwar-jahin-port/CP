#include <bits/stdc++.h>
using namespace std;

long long int gcd(long long int a, long long int b){
    long long int temp;
    while(b!=0){
        temp=b;
        b=(((a%b)+b)%b);
        a=temp;
    }
    return a;
}

int main(){
    int t; cin>>t;

    while(t--){
        long long int p_gcd, x, n, max=0; cin>>n>>p_gcd;
        n--;
        max=p_gcd;
        while(n--){
            cin>>x;
            if(x>max)max=x;
            p_gcd=gcd(p_gcd, x);
        }cout<<max/p_gcd<<endl;
    }

    return 0;
}