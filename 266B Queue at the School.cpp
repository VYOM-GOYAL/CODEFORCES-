#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    int t;
    cin>>t;

    string s;
    cin>>s;

    while(t>0)
    {
        for(int j=0; j<s.size(); j++)
        {
            if(s[j]=='B' && s[j+1]=='G')
            {
                swap(s[j], s[j+1]);
                j++;
            }
        }
        t--;
    }
    cout<<s<<"\n";
    return 0;
}
