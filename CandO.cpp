#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin>>t;

    int cmp[t];

    int x=t;
    while(x>0)
    {
        int a, b;
        cin>>a>>b;

        if(a>b)
            cmp[x]=1;
        else if(a<b)
            cmp[x]=2;
        else
            cmp[x]=0;
        x--;
    }

    for(int i=t; i>0; i--)
    {
        if(cmp[i]==1)
            cout<<">"<<endl;
        else if(cmp[i]==2)
            cout<<"<"<<endl;
        else
            cout<<"="<<endl;
    }
}
