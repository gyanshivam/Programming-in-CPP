#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, count=2;
    int prev, curr;
    bool isDec = true;

    cin>>n>>prev;

    while(count<=n)
    {
        cin>>curr;

        if(curr==prev)
        {
            cout<<"false";
            return 0;
        }

        else    if(curr<prev)
        {
            if(isDec==false)
            {
                cout<<"false";
                return 0;
            }
        }

        else
        {
            if(isDec==true)
                isDec=false;
        }

        count++;
        prev=curr;
    }

    cout<<"true";
}
