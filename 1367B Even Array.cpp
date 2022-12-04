#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int even=0, odd=0, fine=0;

    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            if(v[i]%2==0)
            {
                fine++;
            }
            else
            {
                even++;
            }
        }
        else
        {
            if(v[i]%2==1)
            {
                fine++;
            }
            else
            {
                odd++;
            }
        }
    }
    if(fine==n)
    {
        cout<<"0"<<"\n";
    }
    else if(odd==even)
    {
        cout<<even<<"\n";
    }
    else
    {
        cout<<"-1"<<"\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--)
    {
        solve();
    }

    return 0;
}
