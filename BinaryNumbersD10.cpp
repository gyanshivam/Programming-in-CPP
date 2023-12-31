#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k, count2=1, count=0;
    
    cin>>n;
    
    while(n>1)
    {    
        k=n%2;
        n=n/2;   
        
        if((k==1) && (count>count2))
        {
            count2 = count;
            count++;
        }
        else if(k==0)
            continue;
    }
    
    cout<<count;  
}