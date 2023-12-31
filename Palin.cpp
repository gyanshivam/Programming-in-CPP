 #include <bits/stdc++.h>
using namespace std;


 bool checkPalindrome(char str[]) {
    // Write your code here
    int count=0;

     for(int i=0; str[i]!='\0'; i++)
         count++;

     bool flag=true;

     for(int i=0, j=count-1; j!=0; i++, j--)
     {
     	if(str[i]!=str[j])
        {
            flag=false;
            break;
        }
     }

     return flag;
}

int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << (checkPalindrome(str) ? "true" : "false");
}
