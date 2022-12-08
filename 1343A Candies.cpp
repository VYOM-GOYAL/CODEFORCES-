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
        int x;

        for(int k=2;k<=35;k++)
        {
            int denominator= pow(2,k)-1;

            if(n % denominator!=0)
            {
                continue;
            }
            x = n / denominator;
            break;
        }
        cout<<x<<"\n";
    }
    return 0;
}
