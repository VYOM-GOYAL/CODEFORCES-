#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin>>n>>m;

    int k= min(n,m);

    if(k%2==0)
    {
        cout<<"Malvika\n";
    }
    else
    {
        cout<<"Akshat\n";
    }

    return 0;
}
