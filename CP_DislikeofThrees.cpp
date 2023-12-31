#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    
    cin>>t;
    
    while(t--)
    {
        int x,d_n;
        
        cin>>x;
        
        for(int i=1,j=1; j<=x;)
        {
            if(i%3==0)
                i++;
            else if(i%10==3)
                i++;
            else
            {
                d_n=i;
                i++;
                j++;
            }
        }
        cout<<d_n<<endl;
    }
    return 0;
}