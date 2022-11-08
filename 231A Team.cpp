#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int count=0;
    while(n>0)
    {
        int a,b,c;
        cin>>a>>b>>c;

        if(a+b==2 || b+c==2 || a+c==2)
        {
            count+=1;
        }
        n--;
    }
    cout<<count;
    return 0;
}
