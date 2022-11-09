#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,n,w;
    cin>>k>>n>>w;
    int price=k;
    int ans=0;

    for(int i=1;i<=w;i++)
    {
        price= i*k;
        ans+=price;
    }

    if(n>=ans)
    {
        cout<<"0"<<endl;
    }
    else
    {
        cout<<(ans-n)<<endl;
    }

    return 0;
}
