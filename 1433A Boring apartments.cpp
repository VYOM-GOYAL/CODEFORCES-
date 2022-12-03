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

        int digit=n%10;
        int ans=0;
        ans=(digit-1)*10;
        int num=digit;
        int i=1;

        while(num<=n)
        {
            ans+=i++;
            num=num*10+digit;
        }
        cout<<ans<<endl;
    }

    return 0;
}
