#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int maxi= INT_MIN;
    for(int i=0; i<n; i++)
    {
        maxi= max(maxi, arr[i]);
    }

    int count=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]<maxi)
        {
            count+= maxi-arr[i];
        }
        else if(arr[i]=maxi)
        {
            count+=0;
        }
    }
    cout<<count<<endl;

    return 0;
}
