# include<iostream>
# include <fstream>
using namespace std;
int parseRecord(string data , int field);
void readFile(int numberOfOrders , int minOrdersPrice);
main()
{
   int numberOfOrders;
   int minOrdersPrice;
   cout <<"Number of orders";
   cin >>numberOfOrders;
   cout <<"Minimum ordrer price";
   cin >>minOrdersPrice;
   readFile( numberOfOrders ,  minOrdersPrice);
}
void readFile(int numberOfOrders , int minOrdersPrice)
{
    fstream file;
    string name;
    int order;
    int count = 0 ;
    string price;
    file.open ("customers.txt" , ios::in);
    while(!file.eof())
    {
        file >> name;
        file >> order;
       
         if (order >= numberOfOrders )
         {
             file >> price;
        for (int x = 1 ; x < order ; x ++ )
        {
            int no_of_price = parseRecord (price , x);
            if(no_of_price >=minOrdersPrice)
            {
               count = count  + 1;
            }
        }
        if(count >= order)
        {
            cout <<name <<endl;
        }
    }
}
}
int parseRecord(string data , int field)
{
    int commaCount = 1 ;
    string item;
    int digital;
    for (int idx = 0 ; idx < data.length() ; idx++)
    {
        if (data[idx] == ',')
        {
            commaCount = commaCount + 1;
        }
       else   if (commaCount == field)
        {
            item = item + data[idx];
        }
    }
    digital = stoi(item);
    return digital;

}
