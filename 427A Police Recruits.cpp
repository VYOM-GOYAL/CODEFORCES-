#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int countPolice=0;
    int countcrime=0;

    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;

        if(x>0)
        {
            countPolice+=x;
        }
        else
        {
            if(countPolice<1)
            {
                ++countcrime;
            }
            else
            {
                --countPolice;
            }
        }
    }

    cout<<countcrime<<endl;

    return 0;
}
