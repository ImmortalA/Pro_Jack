#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Product
{
private:
    /* data */
    int sl_;
    string name_;
    string ID_;
    int amount_;
    int price_;
    double percent_;
    string start_date_, end_date_;
    int discount_price_;
    int status_;

public:
    Product();

    void IsProduct();

    void SetName(string name_);
    void SetName();
    string GetName();

    void SetID(string ID_);
    void SetID();
    string GetID();

    void SetAmount(int amount_);
    void SetAmount();
    int GetAmount();

    void SetPrice(int price_);
    void SetPrice();
    int GetPrice();

    void SetDiscount(double percent_, string start_date_, string end_date_);

    bool Status();

    ~Product() {}
};

void Product::SetName(string name_)
{
    this->name_ = name_;
}
void Product::SetName()
{
    cin.ignore(256, '\n');
    getline(cin, name_);
}
string Product::GetName()
{
    return name_;
}

void Product::SetID(string ID_)
{
    this->ID_ = ID_;
}
void Product::SetID(string ID_)
{
    cin.ignore(256, '\n');
    getline(cin, ID_);
}
string Product::GetID()
{
    return ID_;
}

void Product::SetAmount(int amount_)
{
    this->amount_ = amount_;
}
void Product::SetAmount()
{
    cin >> amount_;
}
int Product::GetAmount()
{
    return amount_;
}

void Product::SetPrice(int price_)
{
    this->price_ = price_;
}
void Product::SetPrice()
{
    cin >> price_;
}
int Product::GetPrice()
{
    return price_;
}

void Product::SetDiscount(double percent_, string start_date_, string end_date_)
{
    this->percent_ = percent_;
    this->start_date_ = start_date_;
    this->end_date_ = end_date_;
    discount_price_ = price_ * (100 - percent_) / 100;
}

bool Product::Status()
{
    if (amount_ == 0) return 0;
    else return 1;
}