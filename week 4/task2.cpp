# include<iostream>
using namespace std;
void ifPass(int marks);
main()
{ 
 int marks;
  while(true)
 {
   cout<<"entre your marks  ";
   cin>>marks;
   ifPass(marks);
 }
}
 void ifPass(int marks)
{
   if(marks>50)
 {
     cout<<"you have passed the first quiz of PF"<<endl;
 }
 if(marks==50)
 {
    cout<<"marks are 50"<<endl;
 }
 if(marks<50)
 {
    cout<<"you have not passed the first quiz of PF"<<endl;
 }
}

