#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c, d;
    cin>>a;

    int arr[12];

    for(int i=0;i<12;i++)
    {
        cin>>arr[i];
    }

    if(a==0)
    {
        cout<<0<<"\n";
        return 0;
    }
    sort(arr,arr+12);
    c=0;
    d=0;

    for(int b=11;b>=0;b--)
    {
        c=c+arr[b];
        d++;

        if(c>=a)
        {
            cout<<d<<"\n";
            return 0;
        }
    }
    cout<<-1<<"\n";

    return 0;
}
