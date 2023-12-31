#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,ch, sum=0, pro=1;

    cin>>n>>ch;

    int i=1;

    while(i<=n)
    {
        if(ch==1)
            sum=sum+i;
        else if(ch==2)
            pro=pro*i;
        else
            pro=-1;

        i++;
    }

    if(sum!=0)
        cout<<sum;
    else
        cout<<pro;
}
