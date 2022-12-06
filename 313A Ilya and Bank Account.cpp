#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    int maximum=n;

    if(n/10 > maximum)
    {
        maximum = n/10;
    }

    if(n%10 + (n/100)*10 > maximum)
    {
        maximum = n%10 + (n/100)*10;
    }

    cout<<maximum<<"\n";

    return 0;
}
