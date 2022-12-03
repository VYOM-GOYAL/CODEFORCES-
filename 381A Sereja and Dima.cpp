#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    int arr[n];
    int countSereja=0, countDima=0;

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int i=0, j=n-1, turn=1;

    while(i<=j)
    {
        if(turn%2 == 1)
        {
            if(arr[i]<arr[j])
            {
                countSereja+=arr[j];
                j--;
            }
            else
            {
                countSereja+=arr[i];
                i++;
            }
        }
        else
        {
            if(arr[i]<arr[j])
            {
                countDima+=arr[j];
                j--;
            }
            else
            {
                countDima+=arr[i];
                i++;
            }
        }
        turn++;
    }
    cout<<countSereja<<" "<<countDima<<"\n";

    return 0;
}
