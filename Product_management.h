#include <iostream>
#include <string>
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
    string start_day_, end_date_;
    int discount_price_;

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
    void SetDiscount();

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


