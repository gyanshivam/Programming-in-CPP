#include<bits/stdc++.h>
using namespace std;

int even(int x)
{
    for(int i=x; i>=2; i--)
    {
        if(i%2==0)
            cout<<i<<endl;
    }
}

int main()
{
    int x;

    cin>>x;

    even(x);
}
