#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin>>n>>m;
    int ans=0;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    sort(arr,arr+n);

    for(int i=0; i<n; i++)
    {
        if(m>0)
        {
            if(arr[i]<0)
            {
                ans+=arr[i];
                m--;
            }
        }
    }

    cout<<-ans<<"\n";
    return 0;
}
