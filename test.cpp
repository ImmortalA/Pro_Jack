#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // string read_test;

    // ifstream myfile;
    // myfile.open("./Data/INPUT.txt");

    // cout << "File read test" << endl;

    // cin.ignore();
    // getline(myfile, read_test);
    // cout << read_test;

    // getline(myfile, read_test);
    // cout << read_test;

    // myfile.close();

    string name_;
    string ID_;
    int amount_;
    int price_;
    float discount_;

    ifstream readfile;
    ofstream writefile;

    readfile.open("./Data/INPUT.txt");
    writefile.open("./Data/OUTPUT.txt");

        getline(readfile, name_);
        getline(readfile, ID_);
        readfile >> amount_ >> price_ >> discount_;

        writefile << name_ << endl
                  << ID_ << endl
                  << amount_ << endl
                  << price_ << endl
                  << discount_ << endl;

    writefile.close();
    readfile.close();

    return 0;
}