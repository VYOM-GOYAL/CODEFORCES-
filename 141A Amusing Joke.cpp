#include<bits/stdc++.h>
using namespace std;

int main()
{
    string n, c, s, answer;
    cin>>n>>c>>s;

    answer=n+c;

    sort(answer.begin(), answer.end());
    sort(s.begin(), s.end());

    if(answer==s)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}
