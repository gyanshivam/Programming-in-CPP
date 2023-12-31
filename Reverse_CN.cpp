#include<iostream>
using namespace std;

int main() {
	// Write your code here
    int n;

    cin>>n;

    int rem_n=n;
    int rem=n%10;
    int rev=0;

    /*while(rem==0)
    {
        rem_n=rem_n/10;
        rem=rem_n%10;
    }*/

	while(rem_n!=0)
    {
    	rev=(rev*10)+rem;
        rem_n=rem_n/10;
        rem=rem_n%10;
    }

    cout<<rev;
}

