#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;

    int c1=0, c0=0, id=0;

    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='0')
        {
            c1=0;
            c0++;
            if(c0==7)
            {   id=1;
                break;
            }
        }
        else
        {
            c0=0;
            c1++;
            if(c1==7)
            {
                id=1;
                break;
            }
        }
    }

    if(id==1)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }

    return 0;
}
