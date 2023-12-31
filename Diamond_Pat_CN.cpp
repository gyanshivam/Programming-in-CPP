#include<iostream>
using namespace std;


int main() {

    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */
	int n, i=0, k=1, n_f;

    cin>>n;

    n_f=n/2;

    while(i<=n_f)
    {
        int j=1;

        while(j<=n_f-i)
        {
            cout<<" ";
            j++;
        }

        j=1;

        while(j<=k)
        {
            cout<<"*";
            j++;
        }

        k=k+2;
        cout<<"\n";
        i++;
    }

    k=k-2;

    i=1;

    while(i<=n_f)
    {
        int j=1;

        while(j<=i)
        {
            cout<<" ";
            j++;
        }

        k=k-2, j=1;

        while(j<=k)
        {
            cout<<"*";
            j++;
        }

        cout<<endl;
        i++;
    }
}
















