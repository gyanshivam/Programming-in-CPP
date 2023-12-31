#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    
    cin>>t;
    
    while(t--)
    {
        int n, a, i=1, ans=0, mv=0;
        
        cin>>n>>a;

        while(i <= (n/2))
        {
            if((i*i) <= n)
                mv=i;
            else if((i*i) > n)
                break;
            i++;
        }
        
        ans = a * mv;
        
        cout<<ans<<endl;
    }
  
    return 0;
}
