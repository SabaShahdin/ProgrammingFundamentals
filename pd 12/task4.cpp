# include<iostream>
# include<fstream>
using namespace std;
 string alphabet;
 void takeData();
 void missingLetter();
 //void showMissing ();
main()
{
    cout<<"entre any word";
    cin >> alphabet;
    takeData();
    missingLetter();
    //showMissing ();
  
}
void takeData()
{
    fstream file;
    file.open("alaphabet.txt" , ios::out);
        int idx = 0 ;
    while (alphabet[idx] != '\0')
    {
        for ( int idx1 = 0 ; idx < 26 ; idx++)
        {
            cout <<alphabet[idx1] <<endl;
        }
    }
    file.close();
}
void missingLetter()
{
    fstream file;
    file.open ("alphabet.txt" , ios :: in);
    file >> alphabet;
    file.close();
}
/*void showMissing ()
{
    fstream file;
    file.open("alphabet.txt" , ios:: app);
  
}*/