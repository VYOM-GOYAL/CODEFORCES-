#include<bits/stdc++.h>
using namespace std;

bool prime(int i)
{
    for (int m = 2; m < i; m++)
    {
        if (i % m == 0)
        {
            return false;
        }
    }

    return true;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin>>n>>m;
    int temp=0;

    for(int i=n+1; i<=m; i++)
    {
        if(prime(i))
        {
            temp=i;
            break;
        }
    }

    if(m==temp)
    {
        cout<<"YES"<<"\n";
    }
    else
    {
        cout<<"NO"<<"\n";
    }

    return 0;
}
