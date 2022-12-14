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
        int n;
        cin>>n;
        int s[n];
        vector<int> v;

        for(int i=0; i<n; i++)
        {
            cin>>s[i];
            v.push_back(s[i]);
        }

        sort(s, s+n);
        int m = s[n-1];

        for(int i=0;i<v.size();i++)
        {
            if(v[i]-m!=0)
            {
                cout<<v[i]-m<<" ";
            }
            else
            {
                cout<<v[i]-s[n-2]<<" ";
            }
        }
    }
    return 0;
}
