#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int cntDistinct(string str)
{
    // Set to store unique characters
    // in the given string
    unordered_set<char> s;

    // Loop to traverse the string
    for (int i = 0; i < str.size(); i++)
    {

        // Insert current character
        // into the set
        s.insert(str[i]);
    }

    // Return Answer
    return s.size();
}

int main()
{
    int flag = 0;
    string str1;
    cin >> str1;
    int sms = cntDistinct(str1);
    if (sms % 2 != 0)
        cout << "IGNORE HIM!" << endl;
    else
        cout << "CHAT WITH HER!" << endl;

    return 0;
}