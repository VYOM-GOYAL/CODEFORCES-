#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    cin>>s>>t;
    int cnt=0;

    for(int i=0, j=t.size()-1 ; i<s.size() && j>=0 ; i++, j--)
    {
        if(s[i]==t[j])
            cnt++;
    }

    if(cnt==s.size())
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}
