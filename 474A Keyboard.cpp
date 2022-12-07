#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char c;
    cin>>c;

    string s;
    cin>>s;

    string s1= "qwertyuiopasdfghjkl;zxcvbnm,./" ;


    for(int i=0; i<s.size(); i++)
    {
        for(int j=0; j<s1.size(); j++)
        {
            if(c=='R')
            {
                if (s[i]==s1[j])
                {
                    cout<<s1[j-1];
                }
            }
            else if(c=='L')
            {
                if (s[i]==s1[j])
                {
                    cout<<s1[j+1];
                }
            }
        }
    }

    return 0;
}
