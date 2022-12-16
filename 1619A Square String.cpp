#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    m:
    while(t--)
    {
        string s;
        cin>>s;

        if(s.size()%2!=0)
        {
            cout<<"NO"<<"\n";
            goto m;
        }

        if(s.size()%2==0)
        {
            for(int i=0;i<s.size()/2;i++)
            {
                if(s[i]!=s[s.size()/2 +i])
                {
                    cout<<"NO"<<"\n";
                    goto m;
                }
            }
        }
        cout<<"YES"<<"\n";
    }

    return 0;
}
