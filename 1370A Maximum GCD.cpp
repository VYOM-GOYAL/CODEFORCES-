#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        cout<< n/2 <<"\n";
    }

    return 0;
}


Another solution of this question. It was exceeding time limit in 3rd test case. I dont recommend this solution but you should atleast read it for concept building.
    
#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{

    if (a == b)
    {
        return a;
    }

    if (a > b)
    {
        return gcd(a-b, b);
    }

        return gcd(a, b-a);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    set<int>ans;

    while(t--)
    {
        int n;
        cin>>n;

        for(int i=1;i<=n-1;i++)
        {
            for(int j=i+1;j<=n;j++)
            {
                int a= gcd(i, j);
                    ans.insert(a);
            }
        }
        cout<<*max_element(ans.begin(), ans.end())<<"\n";

    }

    return 0;
}
