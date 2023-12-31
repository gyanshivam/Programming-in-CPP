#include <bits/stdc++.h>
using namespace std;

int maximumDraws(int n) {
    int x;
    if(n==1)
        return 2;
    else
        x=pow(2,n-1);
        x = x+1;
    return x;
}

int main()
{
    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int result = maximumDraws(n);

        cout << result << "\n";
    }
    return 0;
}
