#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, h;
    cin>>n>>h;
    cout<<endl;
    int count=0;

    int s[1000];

    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }


    for(int i=0;i<n;i++)
    {
        if(s[i]>h)
        {
            count+=2;
        }
        else if(s[i]<=h)
        {
            count+=1;
        }

    }
    cout<<count<<endl;

    return 0;
}
