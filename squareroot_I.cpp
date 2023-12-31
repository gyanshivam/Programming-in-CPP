#include<iostream>
using namespace std;

int main() {
	// Write your code here
    int n, val, ans, i=1;

    cin>>n;

    while(i<n){
        val=n-(i*i);
        cout<<endl<<"#"<<val<<"#"<<i;

        if(val==0 || (i>val && val>0))
        {
            ans=i;
            break;
        }
        if(val==1 && i==1)
        {
            ans=1;
            break;
        }
        else if(i>val && val<0)
        {
            ans=i-1;
            break;
        }
        i++;
    }
    cout<<ans;
}

