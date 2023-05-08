#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> vc;
    while (n--)
    {
        long long int x;
        cin >> x;
        vc.push_back(x);
    }
    sort(vc.begin(), vc.end());
    // for(auto x: vc) cout<<x<<" "; cout<<endl;
    while (q--)
    {
        long long int x, re=0, l = 0, r = vc.size() - 1, m = ceil(l + r / 2.0);
        cin >> x;
        while (1)
        {
            m = ceil((l + r) / 2.0);
            // cout<<"m: "<<m<<"l: "<<l<<"r: "<<r<<endl;
            if (vc[m] == x)
            {
                re=1;
                cout << "found" << endl;
                break;
            }
            else if (vc[m] < x)
            {
                l = m + 1;
            }
            else
            {
                r = m - 1;
            }
            if(l>r) break;
        }
        if(re==0) cout<<"not found"<<endl;
    }

    return 0;
}