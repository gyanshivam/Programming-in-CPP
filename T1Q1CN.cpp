
#include<iostream>
using namespace std;

int main(){

  // Write your code here
    int n, i=1;

    cin>>n;

	while(i<=n)
    {
        int j=i, k=i;

        while(k<n)
        {
            cout<<" ";
            k++;
        }

        while(j>=1)
        {
            cout<<j;
            j--;
        }

        while(j<=i-2)
        {
            cout<<j+2;
            j++;
        }

        cout<<endl;
        i++;
    }

}


