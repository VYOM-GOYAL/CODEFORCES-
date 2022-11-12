#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int total=0;

    while(n>0)
    {
        if(n==1 || n==2 || n==3 || n==4 || n==5)
        {
            total+=1;
            cout<<total<<endl;
        }
        n=n-5;
        total++;
    }

    return 0;
}
