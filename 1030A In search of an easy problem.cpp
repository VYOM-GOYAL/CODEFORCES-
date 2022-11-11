#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i;
    int count=0;

    while(n)
    {
        cin>>i;

        if(i==0)
        {
            count+=0;
        }
        else if(i==1)
        {
            count+=1;
        }
        n--;
    }

    if(count!=0)
    {
        cout<<"HARD"<<endl;
    }
    else
    {
        cout<<"EASY"<<endl;
    }

    return 0;
}
