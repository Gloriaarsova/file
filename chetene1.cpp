#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
int main()
{
    ifstream ifile;
    ifile.open("D:/10b/Proba.txt");
    int n, age;

    string name;
    ifile >>n;
    ifile.get();
    for(int i=1; i<=n;i++)
    {
        getline(ifile, name);
        ifile >>age;
        ifile.get();
        cout << name << " " << age << endl;
    }
    ifile.close();

}
