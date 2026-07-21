#include <bits/stdc++.h>
using namespace std;

// 5 Basic Questions

// Q1. Write a program that takes 5 integers as input from the user, stores them in a vector, and prints them in reverse order.
void Q1()
{
    vector<int> numbers;
    int inputSize;
    cout << "Enter the number count you want to enter";
    cin >> inputSize;

    for (int i = 0; i < inputSize; i++)
    {
        int input;
        cout << "Enter " << i << " Element";
        cin >> input;
        numbers.emplace_back(input);
    }

    cout << endl;
    cout << "Revers print is" << endl;
    for (vector<int>::iterator it = numbers.end() - 1; it != numbers.begin() - 1; it--)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{

    Q1();

    return 0;
}