#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n, sum=0, sum_o=0;

    cin>>n;

    while(n>0)
    {
        if(n%2==0)
            sum=sum+n;
        else
            sum_o=sum_o+n;
        n--;
    }

    cout<<sum<<" "<<sum_o;
}

