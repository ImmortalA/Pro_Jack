#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

class Product
{
private:
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

    // virtual void IsProduct() = 0;

    void SetName(string name_);
    string GetName();

    void SetID(string ID_);
    string GetID();

    void SetAmount(int amount_);
    int GetAmount();

    void SetPrice(int price_);
    int GetPrice();

    void SetDiscount(double percent_, string start_date_, string end_date_);
    double GetDiscount();

    void SetStatus(int i);
    string GetStatus();

};

void Product::SetName(string name_)
{
    this->name_ = name_;
}
string Product::GetName()
{
    return name_;
}

void Product::SetID(string ID_)
{
    this->ID_ = ID_;
}
string Product::GetID()
{
    return ID_;
}

void Product::SetAmount(int amount_)
{
    this->amount_ = amount_;
}
int Product::GetAmount()
{
    return amount_;
}

void Product::SetPrice(int price_)
{
    this->price_ = price_;
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
double Product::GetDiscount()
{
    return this->percent_;
}

void Product::SetStatus(int i)
{
    this->status_ = i;
}
string Product::GetStatus()
{
    if (amount_ == 0)
        return "N/A";
    else
        (this->status_) ? "A" : "N/A";
}

