#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    while(n--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;

        sort(s.begin(), s.end());

        cout<<s[n-1]-'a'+1<<"\n";
    }

    return 0;
}
