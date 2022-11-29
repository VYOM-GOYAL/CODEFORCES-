#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int capacity=0;
    int current=0;

    while(n--)
    {
        int a,b;
        cin>>a>>b;
        current-=a;
        current+=b;

        if(current>capacity)
        {
            capacity=current;
        }

    }
    cout<<capacity<<endl;

    return 0;
}
