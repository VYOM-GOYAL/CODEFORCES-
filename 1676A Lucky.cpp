#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    while(n--)
    {
        string s;
        cin>>s;

        int a= stoi(s);
        vector<int>v;
        int k=0;
        while(k<6)
        {
            int b= a%10;
            v.push_back(b);
            a/=10;
            k++;
        }
        int sum1=0, sum2=0;

        for(int i=0;i<6;i++)
        {
            if(i<3)
            {
                sum1+=v[i];
            }
            else
            {
                sum2+=v[i];
            }
        }

        if (sum1==sum2)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }


    }

    return 0;
}
