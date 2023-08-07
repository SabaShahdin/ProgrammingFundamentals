# include<iostream>
using namespace std;
void totalAmount(string day,int amount);
main()
{
  string day;
  int amount;
 while(true)
 {
  cout<<"entre day ..";
  cin>>day;
  cout<<"entre amount...";
  cin>>amount;
  totalAmount(day,amount);
 }
}
 void totalAmount(string day,int amount)
{
 float payableAmount;
   if(day=="sunday")
 {
  payableAmount=amount-(amount*0.10);
  cout<<"payable amount is..."<<payableAmount<<endl;
 }
   if(day!="sunday")
 {
  payableAmount=amount;
  cout<<"payable amount is..."<<payableAmount<<endl;
 }
}