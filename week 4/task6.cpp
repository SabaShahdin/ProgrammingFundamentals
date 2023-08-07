# include<iostream>
using namespace std;
void greaterNumber(int firstNumber,int secondNumber);
main()
{
  int number1,number2;
   while(true)
  {
  cout<<"entr first number..";
  cin>>number1;
  cout<<"entre second number..";
  cin>>number2;
  greaterNumber(number1,number2);
  }
}
void greaterNumber(int firstNumber,int secondNumber)
{
 if (secondNumber-firstNumber>0)
 {
   cout<<"number2 is greater."<<endl;
 }
 if (firstNumber-secondNumber>0)
 {
   cout<<"number1 is greater"<<endl;
 } 
}