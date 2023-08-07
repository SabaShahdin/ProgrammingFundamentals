#include <iostream>
#include <fstream>
using namespace std;

void addRecord();
void readRecord();
void console();
string name;
int age;
main()
{
    cout << "entre name :";
    cin >> name;
    cout << " entre age :";
    cin >> age;
    addRecord();
    readRecord();
    console();
}
void addRecord()
{
    fstream file;

    file.open("name.txt", ios::out);
    file << name;
    file << age;
    file.close();
}
void readRecord()
{
    fstream file;
    file.open("name . txt", ios::in);
    file >> name;
    file >> age;
    file.close();
}
void console()
{
    if (age % 2 == 0)
    {
        for (int x = 0; x <= 15; x++)
        {
            cout << "#";
        }
        cout << endl;
        cout << "#" << age << "HB" << name << "!"
             << " " << age <<" " <<  "#" << endl;
        for (int x = 0; x <= 15; x++)
        {
            cout << "#";
        }
    }
    if (age % 2 != 0)
    {
        for (int x = 0; x <= 15; x++)
        {
            cout << "*";
        }
        cout << endl;
        cout << "*" << age << "HB" << name << "!"
             << " " << age << "*" << endl;
        for (int x = 0; x <= 15; x++)
        {
            cout << "*";
        }
    }
}