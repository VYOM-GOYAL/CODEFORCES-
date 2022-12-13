#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, s;                 
    cin>>n>>s;
    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];         
    }
    sort(arr, arr+n);

    int friends= n-1;         
    int ans=0;

    for(int i=0; i<friends; i++)
    {
        ans+=arr[i];
    }

    if(s>=ans)
    {
        cout<<"YES"<<"\n";
    }
    else
    {
        cout<<"NO"<<"\n";
    }

    return 0;
}
