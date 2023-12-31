#include<iostream>
using namespace std;


int main(){

  // Write your code here
    int n, i=1, l=0;

	cin>>n;

    while(i<=n)
    {
        int j=1, k=1;

        while(j<=(n-i+1))
        {
            cout<<j;
            j++;
        }
        j--;

     	while(k<=(l*2))
        {
            cout<<"*";
            k++;
        }

        while(j>0)
        {
            cout<<j;
            j--;
        }
        cout<<endl;
        l++;
        i++;
    }
}


