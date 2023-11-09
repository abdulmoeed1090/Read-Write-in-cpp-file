// c++ program to read and write from a file
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int choice;
    string write;
    string read;
    cout << "What do you want;read or write from a file?\nEnter\n1-For writing\n2-For reading" << endl;
    cin >> choice;
    // using if - else
    if (choice == 1)
    {
        cout << "What do you want to read in your file(use '-' for spaces):";
        cin >> write;
        ofstream out("test.txt");
        out << write;
    }
    else if (choice == 2)
    {

        ifstream in("test.txt");

        getline(in, read);
        cout << read;
    }
    else
    {
        cout << "INVALID INPUT!!" << endl;
    }
    return 0;
}