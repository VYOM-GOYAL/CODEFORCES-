#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    while(n--)
    {
        int h, m;
        cin>>h>>m;

        cout<<1440-(60*h)-m<<endl;
    }

    return 0;
}
