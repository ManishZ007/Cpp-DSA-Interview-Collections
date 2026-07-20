#include <bits/stdc++.h>
using namespace std;

void printString(int size, string s)
{
    for (int i = 0; i < size; i++)
    {
        cout << s[i];
    }
    cout << endl;

    // and if you do not want to use and extra memory then you can use this for(int i=0; s[i] != '\0' ; i++)
    // that also work Cu's every string conatin \0 at the end and string is nothing but collection char that is it
}

void toUpperCase(string s)
{
    for (char c : s)
    {
        if (c >= 'a' && c <= 'z')
        {
            cout << (char)(c - 32); // you can use this way also (char)toupper(c)
            // cout << (char)toupper(c); // if you using this function you dont even need the if-else block Cu's that handle all the thing
            // but inmportant think is toupper function need char only
            // same think for Lower case use tolower()
        }
        else
        {
            cout << c;
        }
    }
    cout << endl;
}

int main()
{

    string s = "Rohan";
    // printString(s.length(), s); // you can use size() also instead of lenght() both work fine
    // toUpperCase(s);

    // the main thing is we are using cpp and we have datatype called vector that we don't need to give a size for that array it will dynamicly assign
    // so now we are start using array and there some important function help we out to complete the opration in simple and easy way

    return 0;
}