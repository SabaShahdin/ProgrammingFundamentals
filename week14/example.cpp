# include <iostream>
using namespace std;
void changeNumber (int *number); //pointer type varriable and need to be derefernce 
void numbers(int *number);
void arrays(int array[] , int size);
void changeNumberRefernece (int &value); //No need to derefernce simply we pass teh address of the numebr instead of value of numebr
main()
{
    int number = 10;
    int *p = &number;
    cout << *p <<endl;
    int size ;
    changeNumber(&number);
    cout <<" pointer type and perform operations by dereferncing";
    cout <<number <<endl;
    numbers(&number);
    cout <<"Pointer type with no asterik means no pointer";
    cout <<number <<endl; 
    changeNumberRefernece (number);
    cout <<"Pass by refernce" ;
    cout << number <<endl;
    int array[size]  = {1 , 2 , 3};
    arrays(array , size);
    cout <<array[0];
}
void changeNumber (int *number)
{
    (*number)++;
}
void numbers(int *number)
{
    number++;  //number has same value as in number previously if perform operations in function without asterick
}
void changeNumberRefernece (int &value)
{
    value++;
}
void arrays(int array[] , int size)
{
    for (int i =0 ; i<size ; i++)
    {
        cout << array[i] << " ";

    }
    array[0] = 15 ;
}