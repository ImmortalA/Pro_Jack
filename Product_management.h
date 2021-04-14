#include<iostream>
using namespace std;

class Product
{
private:
    /* data */
    int sl_;
    string name_;
public:
    Product(string name)
    {
        this->name_ = name;
    }
    void IsProduct() = 0;
    void SetName(string name);
    void SetID(int id);
    void SetAmount(int amount);
    void SetPrice(int price);
    void SetDiscount(double percent, string start_date, string end_date);
    bool Status();
    ~Product() {}
};