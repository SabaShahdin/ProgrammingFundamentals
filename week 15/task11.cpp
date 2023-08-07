#include <iostream>
#include <fstream>
#include <string>
using namespace std;

main()
{
    fstream file;
    char letter;
    int count = 0;
    string word;
    file.open("word.txt", ios::in);
    while (  getline(file , word))
    {
        file>>word;
       file>>letter;
        cout <<letter <<" # " ;
    }
      file.close();   
}