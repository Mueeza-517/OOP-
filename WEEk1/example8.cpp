#include<iostream>
using namespace std;
main()
{
    const int NUM_COINS = 5;
    double coins[NUM_COINS] = {0.05, 0.1, 0.25, 0.5, 1.0};
    double *doublePtr;
    int count;

    doublePtr = coins;
    for(count = 0 ; count < NUM_COINS; count++)
        cout << doublePtr[count] << " ";
    cout << endl;
    for(count = 0 ; count < NUM_COINS; count++)
        cout << *(coins + count) << " ";
    cout << endl;

}