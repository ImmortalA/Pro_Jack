#include <iostream>
#include <string>
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
    void IsProduct();
    void SetName(string name);
    void SetID(int id);
    void SetAmount(int amount);
    void SetPrice(int price);
    void SetDiscount(double percent, string start_date, string end_date);
    bool Status();
    ~Product() {}
};

void Product::SetName(string name)
{
    cout << "Enter product name:" << endl;
    cin.ignore(256, '\n');
    getline(cin, name);
}