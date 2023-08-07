# include <iostream>
using namespace std;
int totalMoney(int days);
main()
{
    int days;
    cout << "entre number of days";
    cin >> days;
    int total = totalMoney(days);
    cout << total ;
}
int totalMoney(int days)
{
    int pennies = 1;
    int moneyEarned =0 ;
    for (int i = 0 ; i < days ; i++)
    {
        moneyEarned = pennies + moneyEarned;
    pennies = pennies * 2; 
    }
      return  moneyEarned;
}