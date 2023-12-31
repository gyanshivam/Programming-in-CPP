#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n_d, d, a, b, c;

    cin>>t;

    while(t--)
    {
        cin>>n_d>>d>>a>>b>>c;

        d = d * n_d;

        if(d>=42)
            cout<<c<<endl;
        else if(d>=21 && d<42)
            cout<<b<<endl;
        else if(d>=10 && d<21)
            cout<<a<<endl;
        else
            cout<<"0\n";
    }
}
