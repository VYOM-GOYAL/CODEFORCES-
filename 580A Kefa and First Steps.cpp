#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    long long int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    if(n==1)
    {
        cout<<"1"<<"\n";
        return 0;
    }

    int count=1;
    int maxcount=INT_MIN;

    for(int i=0;i<n-1;i++)
    {
        if(arr[i]<=arr[i+1])
        {
            count++;
        }
        else
        {
            count=1;
        }
        if(count>maxcount)
        {
            maxcount=count;
        }
    }

    cout<<maxcount<<"\n";

    return 0;
}
