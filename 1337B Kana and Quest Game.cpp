#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    int x, n, m;

    m:
    while(t--)
    {
        cin>>x>>n>>m;
        if(x-m*10<=0)
        {
                cout<<"YES"<<"\n";
                goto m;
        }

        else
        {
            while(n--)
            {
                x = (x/2)+10;
            }

            x = x - m*10;

            if(x<=0)
            {
                cout<<"YES"<<"\n";
                goto m;
            }
            else
            {
                 cout<<"NO"<<"\n";
                 goto m;
            }
        }

    }

    return 0;
}
