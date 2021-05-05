// #include "include.h"

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include "Mouse.h"
#include "Laptop.h"

using namespace std;

#define maxx 100

class Product_List
{
private:
    Product *product_arr_;
    int length;

public:
    Product_List();
    ~Product_List();

    int GetLength() const;
    void SetLength(int n);

    bool Push(Product a);

    void Show() const;

    void SetGeneralSpecifications(Product *a, string name_);
};

Product_List::Product_List()
{
    product_arr_ = new Product[maxx];
    this->length = 0;
}

Product_List::~Product_List()
{
    if (product_arr_ != NULL)
        delete[] product_arr_;
}

int Product_List::GetLength() const
{
    return this->length;
}

void Product_List::SetLength(int n)
{
    this->length = n;
}

bool Product_List::Push(Product a)
{
    if (this->length + 1 < maxx)
    {
        this->product_arr_[this->length] = a;
        this->length++;
    }
}

void Product_List::Show() const
{
    if (this->length == 0)
        return;
    int i = 0;
    cout << setw(20) << "No. "
         << setw(20) << "Name"
         << setw(20) << "ID"
         << setw(20) << "Amount"
         << setw(20) << "Price"
         << setw(20) << "Discount"
         << setw(20) << "Status"
         << endl;
    while (i != this->length)
    {
        cout << setw(10) << i
             << setw(20) << this->product_arr_[i].GetName()
             << setw(20) << this->product_arr_[i].GetID()
             << setw(20) << this->product_arr_[i].GetAmount()
             << setw(20) << this->product_arr_[i].GetPrice()
             //  << setw(20) << this->product_arr_[i].GetDiscount()
             //  << setw(20) << this->product_arr_[i].GetStatus()
             << endl;
        i++;
    }
}

void Product_List::SetGeneralSpecifications(Product *a, string name_)
{
    string name_;
    string ID_;
    int amount_;
    int price_;
    double percent_;
    string start_date_, end_date_;
    int discount_price_;
    int status_;

    cout << "Please input your product specification: \n";

    a->SetName(name_);

    cout << setw(10) << "ID: ";
    cin >> ID_;
    a->SetID(ID_);
    cout << endl;

    cout << setw(10) << "Amount: ";
    cin >> amount_;
    a->SetAmount(amount_);
    cout << endl;

    cout << setw(10) << "Price: ";
    cin >> price_;
    a->SetPrice(price_);
    cout << endl;

    cout << setw(10) << "Discount: \n";
    cout << setw(15) << "Discount price: ";
    cin >> discount_price_;
    cout << endl;

    cout << setw(15) << "Discount start date: ";
    cin >> start_date_;
    cout << endl;

    cout << setw(15) << "Discount end date: ";
    cin >> end_date_;
    cout << endl;

    a->SetDiscount(discount_price_, start_date_, end_date_);
    cout << endl;

    cout << setw(10) << "Status (1.A\t2.N/A): ";
    cin >> status_;
    a->SetStatus(status_);
    cout << endl;
}