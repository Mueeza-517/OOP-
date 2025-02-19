#include<iostream>
using namespace std;
main()
{
    const int SIZE = 8;
    int set[SIZE] = {5, 10, 15, 20, 25, 30, 35, 40};
    int *numPtr;
    int count;

    numPtr = set;
    for(count = 0 ; count < SIZE ; count++)
    {
        cout << *numPtr << " ";
        numPtr++;
    }
    cout << endl;
    for(count = 0 ; count < SIZE; count++)
    {
        numPtr--;
        cout << *numPtr << " ";
    }

}