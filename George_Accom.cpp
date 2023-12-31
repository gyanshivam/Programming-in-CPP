#include<bits/stdc++.h>
using namespace std;

int main()
{
    int roo, nS, capa, count=0;

    cin>>roo;

    while(roo--)
    {
        cin>>nS>>capa;

        if(capa-nS>=2)
            count++;
    }

    cout<<count;

    return 0;
}
