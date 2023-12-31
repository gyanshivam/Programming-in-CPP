#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, e_s=0, o_s=0;

    cin>>n;

    for(int i=n; i>0;)
    {
        x=i%10;
        i=i/10;

        if(x%2==0)
            e_s=e_s+x;
        else
            o_s=o_s+x;
    }

    cout<<e_s<<" "<<o_s;
}
