#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int countlower=0;
    int countupper=0;

    for(int i=0;i<s.size();i++)
    {
        if(s[i]>=97)
        {
            countlower++;
        }
        else
        {
            countupper++;
        }
    }

    if(countlower>=countupper)
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout<<s<<endl;
    }
    else
    {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        cout<<s<<endl;
    }

    return 0;
}
