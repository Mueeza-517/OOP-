#include<iostream>
using namespace std;
int main()
{
    int vals[]={4,7,11};
    int *valptr;
    valptr = vals;

    cout << *(valptr+1) << endl;
    cout << *(valptr+2);
}