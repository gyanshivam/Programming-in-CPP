#include<iostream>
using namespace std;

int main() {
	// Write your code here
    int n, i=1, n_t;

    cin>>n;

    while(i<=n)
    {
        n_t=(3*i)+2;

        if(n_t%4==0)
        {
            n++;
            i++;
            continue;
        }
        else
            cout<<n_t<<" ";

        i++;
    }

}

