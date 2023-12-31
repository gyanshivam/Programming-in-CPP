#include<bits/stdc++.h>
using namespace std;

int main()
{
    int year, by, o, t, h, th;

    cin>>year;

    for(int i=year+1; i>year; i++)
    {
        o=i%10;
        t=(i/10)%10;
        h=(i/100)%10;
        th=i/1000;

        if(o!=t && o!=h && o!=th && t!=h && t!=th && h!=th)
        {
            by=i;
            break;
        }
    }

    cout<<by;

    return 0;
}
