#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    int count=0;

    for(int i=1; i<=n/2; i++)
    {
        if((n-i)%i==0)
        {
            count++;
        }
    }
    cout<<count<<endl;

    return 0;
}
