#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;

    int count=0;

    while(n>0)
    {
        cin>>s;

        if(s=="Tetrahedron" )
        {
            count+=4;
        }
        else if(s=="Cube" )
        {
            count+=6;
        }
        else if(s=="Octahedron" )
        {
            count+=8;
        }
        else if(s=="Dodecahedron" )
        {
            count+=12;
        }
        else
        {
            count+=20;
        }

        n--;

    }

    cout<<count;

    return 0;
}
