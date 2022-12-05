#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    int arr[n];
    int Totalsum=0, sum=0, count=0;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        Totalsum+=arr[i];
    }

    int half=Totalsum/2;

    sort(arr, arr+n);

    for(int i=n-1;i>=0;i--)
    {
        sum+=arr[i];
        count++;
        if(sum>half)
        {
            break;
        }
    }
    cout<<count<<"\n";

    return 0;
}
