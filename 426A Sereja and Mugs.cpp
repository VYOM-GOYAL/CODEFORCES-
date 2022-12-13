#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, s;                 // n==3       s==4
    cin>>n>>s;
    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];         // 4 4 4
    }
    sort(arr, arr+n);

    int friends= n-1;         // friends == 2
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
