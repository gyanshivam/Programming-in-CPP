#include <bits/stdc++.h>
using namespace std;

void trimSpaces(char input[]) {
    // Write your code here
    for(int i=0; input[i]!='\n';)
    {
        if(input[i]==' ')
            input[i]=input[i+1];
        else
            i++;
    }
}

int main() {
    char input[1000000];
    cin.getline(input, 1000000);
    trimSpaces(input);
    cout << input << endl;
}


