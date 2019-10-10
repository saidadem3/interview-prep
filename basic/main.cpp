#include <iostream>
#include <vector>
#include <string>
using namespace std;

void doStuff(int myArray[])
{
    myArray[2] = 5;
}

void passByValue(int a)
{
    a = 29;
}

void passByReference(int a)
{
    int *b = &a;
    a = 5;
    cout << "B is: " << *b << endl;
}

int main()
{
    // vector<int> number = {1, 2, 3, 9, 8};

    // number.push_back(55);

    // vector<int>::iterator it = number.begin();

    // //vector_name.insert(position, size, val)
    // //position has to be an iterator.
    // //so start at position 0 then add (n) to insert into desired position
    // number.insert(it + 2, 5);

    // for (int i = 0; i < number.size(); i++)
    //     cout
    //         << number[i] << endl;

    // int myArray[] = {5, 1, 23, 9};

    // cout << myArray[2] << endl;

    // doStuff(myArray);

    // cout << myArray[2] << endl;

    // int a = 1;

    // cout << "a initialized to: " << a << endl;

    // passByValue(a);

    // cout << "a after passByValue: " << a << endl;

    // passByReference(a);

    // cout << "a after passByReference: " << a << endl;

    // int one = 1;
    // int two = 2;

    // swap(one, two);

    // cout << one << two;

    for (int i = 0; i <= 53; i++)
    {
        if ((i % 3 == 0) && (i % 5 == 0))
            cout << "fizzbuzz" << endl;
        else if (i % 3 == 0)
            cout << "fizz" << endl;
        else if (i % 5 == 0)
            cout << "buzz" << endl;
        else
            cout << i << endl;
    }
}