#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int i, j, n, m, k, r = 0, cnt = 0;
        cin >> n >> k;
        m = n;
        vector<string> vc;
        if (n == 1){
            while (n--)
            {
                string s;
                cin >> s;
                vc.push_back(s);
            }cout << 1 << endl;
        }
        else if (k == 1)
        {
            while (n--)
            {
                string s;
                cin >> s;
                vc.push_back(s);
            }
            for (i = 0; i < k; i++)
            {
                for (j = 0; j < m; j++)
                {
                    if (vc[j][i] == '+')
                        cnt++;
                }
            }
            if(cnt==0) cout<<1<<endl;
            else cout << cnt << endl;
        }
        else
        {
            while (n--)
            {
                string s;
                cin >> s;
                vc.push_back(s);
            }
            for (i = 0; i < k; i++)
            {
                for (j = 0; j < m; j++)
                {
                    if (vc[j][i] == '+')
                        r = 1;
                    else
                    {
                        r = 0;
                        break;
                    }
                }
                if (r == 1)
                    cnt++;
            }
            if(cnt==0) cout<<1<<endl;
            else cout << cnt << endl;
        }
    }

    return 0;
}