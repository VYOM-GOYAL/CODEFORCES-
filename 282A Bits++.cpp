#include<bits/stdc++.h>
using namespace std;

int main()
{
    int X=0;

    int n;
    cin>>n;

    while(n>0)
    {
        string s;
        cin>>s;

        if (s=="++X" || s=="X++")
        {
            X++;
        }
        else
        {
            X--;
        }
        n--;
    }

    cout<<X<<endl;

    return 0;
}
