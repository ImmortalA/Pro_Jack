#include<iostream>
#include<string>
using namespace std;

class Laptop
{
private:
    /* data */
    string name_;
    string disk_name_;
    int id_;
    double screen_size_;
    int ram_;
    int disk_;
public:
    Laptop(string name)
    {
        this->name_ = name;
    }
    
    ~Laptop();
};
