#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--)
    {
        vector<int> v(4);

        for(int &i : v)
        {
            cin>>i;
        }

        if( min(v[0], v[1]) > max(v[2], v[3]) || max(v[0], v[1]) < min(v[2], v[3])  )
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
        }

    }

    return 0;
}
