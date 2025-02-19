#include<iostream>
using namespace std;
void getOrder(int &donuts)
{
    cout << "How many donuts you want?:";
    cin >> donuts;
    cout<<"you entered:" << donuts;
}
main()
{
    int jellyDonuts;
    getOrder(jellyDonuts);
}