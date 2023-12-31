#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin>>n;

    int i=1;

    while(i<=n)
    {
        int k=i/2, flag=0;
        if(i==1)
        {
            i++;
            continue;
        }
        else
        {
            while(k>1)
            {
                if(i%k==0)
                    flag=1;
                k--;
            }
        }
        if(flag==0)
            cout<<i<<" ";
        i++;
    }
}
