#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    int diff=0;


    while(t--)
    {
        int a, b;
        cin>>a>>b;
        if(a>b)
        {
            diff=a-b;
            if(diff%2==0)
            {
                cout<<"1"<<"\n";
            }
            else
            {
                cout<<"2"<<"\n";
            }
        }
        else
        {
            diff=b-a;
            if(diff==0)
            {
                cout<<"0"<<"\n";
            }
            else if(diff%2!=0)
            {
                cout<<"1"<<"\n";
            }
            else
            {
                cout<<"2"<<"\n";
            }
        }

    }

    return 0;
}
