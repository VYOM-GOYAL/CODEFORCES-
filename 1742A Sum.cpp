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
        int s[3];
        for(int i=0;i<3;i++)
        {
            cin>>s[i];
        }
        sort(s, s+3);
        int ans=0;

        for(int i=0;i<2;i++)
        {
            ans+=s[i];
        }
        if(s[2]==ans)
        {
            cout<<"YES"<<"\n";
        }
        else
        {
            cout<<"NO"<<"\n";
        }
    }
    return 0;
}
