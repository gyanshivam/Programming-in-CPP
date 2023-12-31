#include<iostream>
using namespace std;

int main(){

  // Write your code here
    int n, i=1;

    cin>>n;

	while(i<=n)
    {
        int j=i, k=i;

        while(k<=(n-1))
        {
            cout<<" ";
            k++;
        }

        while(j>=1)
        {
            cout<<j;
            j--;
        }

        while(j<i-1)
        {
            cout<<j+1;
            j++;
        }

        cout<<endl;
        i++;
    }

}


