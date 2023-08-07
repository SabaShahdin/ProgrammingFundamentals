# include<iostream>
using namespace std;
void isEven(int number1);
main()
{ 
  int number1;
  cout<<"entre any number....";
  cin>>number1;
  isEven(number1);
}
void isEven(int number1)
{
  if(number1%2==0)
 {
   cout<<"number is even"<<endl;
 }
  if(number1%2!=0)
 {
   cout<<"number is odd"<<endl;
 }
}