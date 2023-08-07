# include <iostream>
using namespace std;
void printName(string name);
main()
{ 
 string name="Ali";
 printName(name);
 printName("Bilal");
 string secondName;
 cin>>name;
 printName(secondName);
 
 


}
void printName(string name)
{
 cout<<"my name is...."<<name;
}