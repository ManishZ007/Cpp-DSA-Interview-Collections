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
    // that also work Cu's every string contain \0 at the end and string is nothing but collection char that is it
}

void toUpperCase(string s)
{
    for (char c : s)
    {
        if (c >= 'a' && c <= 'z')
        {
            cout << (char)(c - 32); // you can use this way also (char)toupper(c)
            // cout << (char)toupper(c); // if you using this function you dont even need the if-else block Cu's that handle all the thing
            // but important think is toupper() function need char only
            // same think for Lower case use tolower()
        }
        else
        {
            cout << c;
        }
    }
    cout << endl;
}

void vectorStudy()
{
    // vector and some function's
    // Declaration of vector
    vector<int> numbersInInt;
    // so now this vector is type of int we can create for other datatype also
    vector<float> numbersInFloat;         // hear we add floating values
    vector<double> numbersInDouble;       // hear we add double values
    vector<long> numberInLong;            // hear we add long values
    vector<char> numbersInChar;           // hear we add char only that single byte
    vector<bool> trueAndFlaseCollections; // hear we add boolean collection that is only true and false
    vector<string> studentNames;          // hear we add long string or collection of char like name

    // there are some important functions that are come's with vector
    // so hear we take an example of numbersInInt

    numbersInInt.push_back(1);    // that function is use to insert the given value in the array of vector
    numbersInInt.emplace_back(2); // that also work same as push_back() but this is faster then push_back()
    numbersInInt.emplace_back(3);
    numbersInInt.emplace_back(4);
    // depth: In contrast, push_back typically requires creating a
    // temporary object first, which is then moved (or copied) into the vector,
    // followed by the destruction of that temporary.  emplace_back avoids this extra
    // move/copy step and the associated temporary object
    //  overhead by forwarding constructor arguments directly to the element's constructor.

    numbersInInt.size();     // that return number of items in array
    numbersInInt.capacity(); // number of items it can hold
    numbersInInt.empty();    // that return true when array is empty
    numbersInInt.begin();    // that return the address of 1st element that is nothing but a pointer so we can do arithmetic  operation on that
    numbersInInt.end();      // that return the address of last element
    numbersInInt.rbegin();   // that reverse begin
    numbersInInt.begin();    // that reverse end
    // there are lot's of function apart from that but this are some important that i highlight

    // now how can we iterate the vector with loops
    // so there are 3 main way we do that
    // 1. with ::iterator
    // 2. with auto for loop
    // 3. with short for loop

    // 1.
    for (vector<int>::iterator it = numbersInInt.begin(); it != numbersInInt.end(); it++)
    {
        // so that (it) is address of array element so we need to dereference of that address
        cout << *it << " ";
    }
    cout << endl;

    // 2.
    for (auto it = numbersInInt.begin(); it != numbersInInt.end(); it++)
    {
        // hear we don't need to give an type of that vector iterator
        cout << *it << " ";
    }
    cout << endl;

    // 3.
    for (auto it : numbersInInt)
    {
        // hear that get direct element from the array or vector we don't need to dereference that
        // but this type of loop are goes up to end of the array so it we need to add some condition that wee
        // need to define inside the loop
        cout << it << " ";
    }
    cout << endl;

    // there is another most use full function of vector is erase that use to delete the element of the vector
    // so now over vector look like this [1, 2, 3, 4]
    // if i want to delete the 3 i did something like this
    // numbersInInt.erase(numbersInInt.begin() + 2); // that delete the 3
    // and if you want to delete some range like delete from 2 to 3
    // numbersInInt.erase(numbersInInt.begin() + 1, numbersInInt.begin() + 3); // so that 2 and 3 is deleted and  you array remains [1, 4]

    // there is another use full function that is insert function
    // numbersInInt.insert(numbersInInt.begin(), 10); // so am saying that at the 0 index add 10 and move rest of right side [10, 1, 2, 3, 4]
    // numbersInInt.insert(numbersInInt.begin() + 1, 2, 100); // so am telling that add two 100 from 1 index and move rest of right side [10, 100, 100, 1, 2, 3, 4]

    // if you want to copy one vector to another you can do like this
    vector<int> numbers2InInt;
    // and i want to copy that numbersInInt -> numbers2InInt
    numbers2InInt.insert(numbers2InInt.begin(), numbersInInt.begin(), numbersInInt.end()); // so what am saying hear in the 2nd array we need to copy that 1st array
    // from begin() you need to copy the 1st.begin() up to 1st.end() like whole array in that 2nd array and start from 1st index of that 2nd array

    // the pop_back() function use to remove the last element of the array
    // numbersInInt.pop_back() // so the 4 is delete

    // clear function use to clean whole array or vector
    // numbersInInt.clear() // that erase all the element that is present in array or vector
}

int main()
{

    string s = "Manish";
    // printString(s.length(), s); // you can use size() also instead of lenght() both work fine
    // toUpperCase(s);

    // the main thing is we are using c++ and we have datatype called vector that we don't need to give a size for that array it will dynamic assign
    // so now we are start using array and there some important function help we out to complete the operation in simple and easy way

    vectorStudy();

    return 0;
}