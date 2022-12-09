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
        string s;
        cin>>s;
        int count0=0, count1=0;

        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0')
            {
                count0++;
            }
            else if(s[i]=='1')
            {
                count1++;
            }
        }

        if( min(count0, count1)%2==1)
        {
            cout<<"DA"<<"\n";
        }
        else
        {
            cout<<"NET"<<"\n";
        }
    }

    return 0;
}
