#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/

    int n;

    cin>>n;

    int i=1;

    while(i<=n)
    {
        int j=1, val=i, k=1;
        while(k<=n-i)
            {
                cout<<" ";
                k++;
            }
        while(j<=i)
        {
            cout<<val;
            j++;
            val++;
        }
        cout<<endl;
        i++;
    }


}



