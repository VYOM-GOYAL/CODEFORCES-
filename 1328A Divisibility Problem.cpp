#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    while(n>0)
    {
        long long int a, b;
        cin>>a>>b;

        if(a%b==0)
        {
            cout<<"0"<<endl;
        }
        else
        {
            cout<<b-(a%b)<<endl;
        }
        n--;
    }

    return 0;
}
