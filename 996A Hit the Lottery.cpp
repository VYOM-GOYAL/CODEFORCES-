#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int counting=0;

    while(n>0)
    {
        if(n>=100)
        {
            counting++;
            n-=100;
        }
        else if(100>n && n>=20 )
        {
            counting++;
            n-=20;
        }
        else if(20>n && n>=10 )
        {
            counting++;
            n-=10;
        }
        else if(10>n && n>=5 )
        {
            counting++;
            n-=5;
        }
        else if(5>n && n>=1 )
        {
            counting++;
            n-=1;
        }

    }
    cout<<counting<<endl;

    return 0;
}
