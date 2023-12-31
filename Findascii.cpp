#include<iostream>
using namespace std;

int main()
{
    char c;
    int count_cha=0, count_digit=0, count_space=0;

    c=cin.get();

    while(c!='$')
    {
        if(c>='A' && c<='z')
            count_cha++;
        else if(c==' ')
            count_space++;
        else if(c>='0' && c<='9')
            count_digit++;

        c=cin.get();
    }

    cout<<count_cha<<" "<<count_digit<<" "<<count_space;
}
