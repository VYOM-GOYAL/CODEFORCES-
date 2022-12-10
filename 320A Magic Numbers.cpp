#include<bits/stdc++.h>
using namespace std;

bool ans(string s)
    {
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!='1' && s[i]!='4')
            {
                return false;
            }
        }
        if(s[0]=='4')
        {
            return false;
        }
        if(s.find("444") != s.npos)
        {
            return false;
        }

        return true;
    }


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;

    if(ans(s))
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }

    return 0;
}
