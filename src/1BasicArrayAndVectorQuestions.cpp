#include <bits/stdc++.h>
using namespace std;

// 4 Basic Questions

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

// Q2 Given a vector {3, 1, 4, 1, 5, 9, 2, 6}, write a program to find and print the maximum element without using any built-in max function.
void Q2()
{
    vector<int> numbers = {3, 1, 4, 1, 5, 9, 2, 6};
    int maxElement = numbers[0];

    for (vector<int>::iterator it = numbers.begin() + 1; it != numbers.end(); it++)
    {
        if (maxElement < *it)
            maxElement = *it;
    }
    cout << "Max element " << maxElement;
}

// Q3 Write a program that takes a vector of integers and removes all even numbers from it, then prints the remaining elements.
void Q3()
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

    for (auto it = numbers.begin(); it != numbers.end();)
    {
        if (*it % 2 == 0)
            it = numbers.erase(it); // erase returns next valid iterator
        else
            ++it;
    }

    cout << "Remove all even number " << endl;
    for (auto it : numbers)
    {
        cout << it << " ";
    }
    cout << endl;
}

// Q4 Write a program that takes two vectors of the same size and produces a third vector where each element is the sum of the corresponding elements from the first two vectors.
void Q4()
{
    vector<int> numbers;
    vector<int> numbers2;
    vector<int> sum;
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

    cout << "Enter 2nd array for same size" << endl;
    for (int i = 0; i < inputSize; i++)
    {
        int input;
        cout << "Enter " << i << " Element";
        cin >> input;
        numbers2.emplace_back(input);
    }

    for (int i = 0; i < inputSize; i++)
    {
        sum.emplace_back(numbers[i] + numbers2[i]);
    }

    cout << "sum is" << endl;
    for (auto i : sum)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{

    // Q1();
    // Q2();
    // Q3();
    Q4();

    return 0;
}