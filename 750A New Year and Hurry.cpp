#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin>>n>>k;

    int count=0;
    int time=0;

    for(int i=0;i<=n;i++)
    {
        if ( time + 5*i + k < 240 )
        {
            time+=5*i;
            count++;
        }
        else if ( time + 5*i + k > 240 )
        {
            cout<< i-1 <<endl;
            return 0;
        }
        else if ( time+ 5*i + k == 240 )
        {
            cout<< i <<endl;
            return 0;
        }

    }
    cout<<count-1 ;

    return 0;
}
