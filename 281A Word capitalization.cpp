#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

   /* if(s[0]>=97)
    {
        s[0] = s[0] - 32;
    }
    cout<<s;   */

    transform(s.begin() , s.begin()+1 , s.begin() , ::toupper);
    cout<<s;
    return 0;

}