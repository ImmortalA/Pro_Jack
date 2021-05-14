#ifndef PRODUCT_H
#define PRODUCT_H

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
    Product() {}
    ~Product() {}

    void SetName(string name_);
    void EnterName();
    string GetName();

    void SetID(string ID_);
    void EnterID();
    string GetID();

    void SetAmount(int amount_);
    void EnterAmount();
    int GetAmount();

    void SetPrice(int price_);
    void EnterPrice();
    int GetPrice();

    void SetDiscount(double percent_, string start_date_, string end_date_);
    double GetDiscountPercent();
    string GetDiscountStartDate();
    string GetDiscountEndDate();

    string GetStatus();

    void SetGeneral(string name);
    void ShowGeneral();
    virtual void ShowDetail() = 0;
};

void Product::SetName(string name_)
{
    this->name_ = name_;
}
void Product::EnterName()
{
    // cin.ignore(256, '\n');
    // getline(cin, this->name_);
    cin.ignore();
    getline(cin, this->name_);
    cin.clear();
}
string Product::GetName()
{
    return name_;
}

void Product::SetID(string ID_)
{
    this->ID_ = ID_;
}
void Product::EnterID()
{
    // cin.ignore(256, '\n');
    // getline(cin, this->ID_);
    cin.ignore();
    getline(cin, this->ID_);
    cin.clear();
}
string Product::GetID()
{
    return ID_;
}

void Product::SetAmount(int amount_)
{
    this->amount_ = amount_;
}
void Product::EnterAmount()
{
    cin >> this->amount_;
}
int Product::GetAmount()
{
    return amount_;
}

void Product::SetPrice(int price_)
{
    this->price_ = price_;
}
void Product::EnterPrice()
{
    cin >> this->price_;
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
    this->discount_price_ = this->price_ * (100 - percent_) / 100;
}
double Product::GetDiscountPercent()
{
    return this->percent_;
}

string Product::GetDiscountStartDate()
{
    return this->start_date_;
}

string Product::GetDiscountEndDate()
{
    return this->end_date_;
}

string Product::GetStatus()
{
    if (amount_ == 0)
        return "N/A";
    else
        (this->status_) ? "A" : "N/A";
}

void Product::SetGeneral(string name)
{
    SetName(name);

    if (name == "Mouse")
        cout << "ID (Mxxx): ";
    else
        cout << "ID (Lxxx): ";
    EnterID();

    cout << "Price: ";
    EnterPrice();

    string start_date_, end_date_;
    int discount_percent_;

    cout << "Discount: \n";
    cout << "\tDiscount percent (%): ";
    cin >> discount_percent_;

    if (discount_percent_ != 0)
    {
        cout << "\tDiscount start date (m/d/yyyy): ";
        cin >> start_date_;

        cout << "\tDiscount end date (m/d/yyyy): ";
        cin >> end_date_;
    }
    else
    {
        start_date_ = end_date_ = "N/A";
    }
    SetDiscount(discount_percent_, start_date_, end_date_);
}

void Product::ShowGeneral()
{
    cout << setw(10) << GetName()
         << setw(10) << GetID()
         << setw(10) << GetPrice()
         << setw(23) << GetDiscountPercent()
         << setw(15) << GetDiscountStartDate()
         << setw(17) << GetDiscountEndDate()
         << endl;
}

#endif //PRODUCT_H