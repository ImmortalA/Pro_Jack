#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    //format INPUT: name|ID|amount|price|discount|
    string name_;
    string ID_;
    int amount_;
    int price_;
    double discount_;

    string data_;

    ifstream readfile;
    ofstream writefile;

    readfile.open("./Data/INPUT.txt");
    writefile.open("./Data/OUTPUT.txt");

    while (getline(readfile, data_))
    {
        string delimiter_ = "|";
        size_t position_ = 0;
        int i = 0;
        string token_;

        while ((position_ = data_.find(delimiter_)) != std::string::npos)
        {
            token_ = data_.substr(0, position_);
            writefile << token_ << endl;
            switch (i)
            {
            case 0:
                name_ = token_;
                break;
            case 1:
                ID_ = token_;
                break;
            case 2:
                amount_ = stoi(token_);
                break;
            case 3:
                price_ = stoi(token_);
                break;
            case 4:
                discount_ = stod(token_);
                break;
            }
            data_.erase(0, position_ + delimiter_.length());
            i++;
        }
        writefile << "\n";
    }

    writefile.close();
    readfile.close();
    return 0;
}