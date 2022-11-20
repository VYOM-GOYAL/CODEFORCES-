#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int countMishka=0;
    int countChris=0;

    while(n)
    {
        int a, b;
        cin>>a>>b;

        if(a>b)
        {
            countMishka++;
        }
        else if(b>a)
        {
            countChris++;
        }
        n--;
    }

    if(countMishka>countChris)
    {
        cout<<"Mishka"<<endl;
    }
    else if(countChris>countMishka)
    {
        cout<<"Chris"<<endl;
    }
    else
    {
        cout<<"Friendship is magic!^^"<<endl;
    }


    return 0;
}
