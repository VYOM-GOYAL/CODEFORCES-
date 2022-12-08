#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        int count2021 = n%2020;
        int count2020 = (n-count2021)/2020  - count2021;

        if(count2020>=0 && 2020*count2020 + 2021*count2021==n)
        {
            cout<<"YES"<<"\n";
        }
        else
        {
            cout<<"NO"<<"\n";
        }

    }

    return 0;
}
