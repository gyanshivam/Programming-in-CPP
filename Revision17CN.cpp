#include<bits/stdc++.h>
using namespace std;

bool checkMember(int n){

  /* Don't write main().
   * Don't read input, it is passed as function argument.
   * Return output and don't print it.
   * Taking input and printing output is handled automatically.
  */

    int i=0, fib, nfib, cfib;
    bool val=false;

	while(i<=n)
    {
            fib=0;
            nfib=1;
        else
            cfib=nfib+fib;
            fib=nfib;
            nfib=cfib;
        if(nfib==n)
        {
            return val=true;
            break;
        }

        i++;

    }
    if(val==false)
        return false;
}
int main()
{
    int n;
    cin >> n ;
    if(checkMember(n)){
        cout << "true" << endl;
    }else{
        cout << "false" << endl;
    }
}
