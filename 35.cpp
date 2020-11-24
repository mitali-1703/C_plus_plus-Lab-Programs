//Demonstrate reading and writing a text file.
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    char text[200];
    fstream file;
    file.open("x.txt", ios::out | ios::in);
    cout << "Write text to be written in the file" << endl;
    cin.getline(text, sizeof(text));

    //Writing in file
    file << text << endl;
    //Readinf from file
    file >> text;
    cout << text << endl;
    //Closing the file
    file.close();
    return 0;
}

// OUTPUT
// Write text to be written in the file
// My name is Mitali
// My name is Mitali