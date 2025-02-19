#include<iostream>
using namespace std;
double current_amount=250000;
void GetLoan()
{
    double Loan;
    cout <<"Enter the amount you want to take for loan:";
    cin>> Loan;
    double amount = current_amount + Loan;
    cout <<"Total amount after getting loan:"<<amount;
}
void Widraw_Amount()
{
    double Widraw;
    cout <<"Enter the amount you want to widraw:";
    cin >> Widraw;
    if(Widraw>current_amount)
    {
        cout <<" you can't widraw amount because your current balance is less than amount you want to widraw.........";
    }
    else
    {
        double remaining_amount= current_amount - Widraw;
        cout<< "remaining amount:" <<remaining_amount;
    }
}
void Deposit_Amount()
{
    double deposit;
    cout << "Enter the amount you want to deposit:";
    cin >> deposit;
    double Total_amount=current_amount+deposit;
    cout << "Total amount after deposit:" << Total_amount;
    cout << "Amount is deposited successfully......";
}
void Deduct_Zakat()
{
    if(current_amount>=50000)
    {
    current_amount=current_amount-(current_amount*25/1000);
    cout <<"Total amount after paying Zakat:" << current_amount;
    }
    else
    {
        cout << "Zakat can't be deducted........";
    }

}
main()
{
    int option;
    cout <<"choose one of the following options "<<endl;
    cout <<" 1.choose 1 to get Loan"<<endl;
    cout <<" 2.choose 2 to widraw amount"<<endl;
    cout <<" 3.choose 3 to Deposit amount"<<endl;
    cout <<" 4.choose 4 to Deduct Zakat"<<endl;
    cout << "Enter the option:";
    cin >> option;
    if(option == 1)
    {
       GetLoan() ;
    }
    else if(option == 2)
    {
       Widraw_Amount();
    }
    else if(option == 3)
    {
     Deposit_Amount();
    }
    else if(option == 4)
    {
        Deduct_Zakat();
    }
    else
    {
        cout <<"you entered in valid option";
    }
}
