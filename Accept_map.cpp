#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    map<string, int> newMap;

    int nameCount = 5;
    string name = "default";
    int age = 0;

    for(int i = 0; i < 5; i++)
    {
        cout << "Enter " << nameCount << " names and ages." << endl;
        cout << "Name: ";
        getline(cin, name);
        newMap?????
        cout << "Age: ";
        cin >> age;
        newMap?????
        
        nameCount--;
    }

    map<int, int>::iterator itr;

    for (itr = newMap.begin(); itr != newMap.end(); ++itr) {
        cout << '\t' << itr->first
             << '\t' << itr->second << '\n';
    }
    return 0;
}