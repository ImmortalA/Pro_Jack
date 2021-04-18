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

    void GetName();
    void SetName(string name_);
    void GetID();
    void SetID(string ID_);
    void GetAmount();
    void SetAmount(int amount_);
    void GetPrice();
    void SetPrice(int price_);
    void GetDiscount();
    void SetDiscount(double percent_, string start_date_, string end_date_);

    bool Status();
    ~Product() {}
};

void Product::GetName()
{
    cin.ignore(256, '\n');
    getline(cin, name_);
}
