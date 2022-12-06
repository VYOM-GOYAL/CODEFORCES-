#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin>>n>>m;

    for(int i=1;m*i<=n;i++)
    {
        n++;
    }
    cout<<n<<"\n";

    return 0;
}
