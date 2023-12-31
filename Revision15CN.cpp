#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, big, curr, sec_big=INT_MIN;

    cin>>n>>curr;

    big = curr;

    if(n==1)
    {
        cout<<sec_big;
        exit(0);
    }

    else
    {
        for(int i=0; i<n-1; i++)
        {
            cin>>curr;

            if(big>curr && sec_big<curr)
                sec_big = curr;
            else if(big<curr)
            {
                sec_big = big;
                big = curr;
            }
        }
    }

    cout<<sec_big;
}

