#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;
    int count=0;

    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='H' || s[i]=='Q' || s[i]=='9' )
        {
            count++;
            break;
        }
    }
    if(count>0)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }

    return 0;
}
