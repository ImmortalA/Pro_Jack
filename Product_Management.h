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
    Product **product_arr_;
    int length;

public:
    Product_List();
    ~Product_List();

    int GetLength() const;
    void SetLength(int n);

    bool Push(Product* a);
    void Pop(int i);
    void PopByProduct(string name);

    void Show();
    void ShowByProduct(string name);

    // void ReadFile(Product &product_data);
};

Product_List::Product_List()
{
    product_arr_ = new Product*[maxx];
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

bool Product_List::Push(Product* a)
{
    if (this->length + 1 < maxx)
    {
        this->product_arr_[this->length] = a;
        this->length++;
    }
}

void Product_List::Pop(int i)
{
    delete this->product_arr_[i];
    for (int j = i; j < this->length - 1; j++)
    {
        product_arr_[j] = product_arr_[j + 1];
    }

    this->product_arr_[this->length] = NULL;
    this->length--;
}

void Product_List::PopByProduct(string name)
{
    int i = 0;
    while (i < this->length)
    {
        if (this->product_arr_[i]->GetName() == name)
        {
            for (int j = i; j < this->length - 1; j++)
            {
                product_arr_[j] = product_arr_[j + 1];
            }
            this->length--;
        }
        else
            i++;
    }
}

void Product_List::Show()
{
    if (this->length == 0)
        return;
    cout << setw(40) << "GENERAL" << endl;
    cout << setw(5) << "No. "
         << setw(7) << "Name"
         << setw(10) << "ID"
         << setw(10) << "Price"
         << setw(15) << "Discount:"
         << setw(10) << "Percent"
         << setw(15) << "Start Date"
         << setw(15) << "End Date"
         << endl;
    for (int i = 0; i < this->length; i++)
    {
        cout << setw(3) << i;
        this->product_arr_[i]->ShowGeneral();
    }
}

void Product_List::ShowByProduct(string name)
{
    if (this->length == 0)
        return;
    cout << setw(40) << "GENERAL" << endl;
    cout << setw(5) << "No. "
         << setw(7) << "Name"
         << setw(10) << "ID"
         << setw(10) << "Price"
         << setw(15) << "Discount:"
         << setw(10) << "Percent"
         << setw(15) << "Start Date"
         << setw(15) << "End Date"
         << endl;
    for (int i = 0; i < this->length; i++)
    {
        if (this->product_arr_[i]->GetName() == name)
        {
            cout << setw(3) << i;
            this->product_arr_[i]->ShowGeneral();
            this->product_arr_[i]->ShowDetail();
        }
    }
}

// void Product_List::ReadFile(Product &product_data)
// {
//     fstream myfile;
//     myfile.open("data.txt", ios::in);

//     string name_;
//     string ID_;
//     int amount_;
//     int price_;
//     float discount_;

//     getline(myfile, name_);
//     getline(myfile, ID_);
//     cin >> amount_;
//     cin >> price_;
//     cin >> discount_;

//     product_data.SetName(name_);
//     product_data.SetID(ID_);
//     product_data.SetAmount(amount_);
//     product_data.SetPrice(price_);

//     myfile.close();
// }