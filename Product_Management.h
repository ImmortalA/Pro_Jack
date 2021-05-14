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

    bool Push(Product *a);
    void Pop(int i);
    void PopByProduct(string name);

    void Show();
    void ShowByProduct(string name);

    void SaveFile(Product_List &my_list);
};

Product_List::Product_List()
{
    product_arr_ = new Product *[maxx];
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

bool Product_List::Push(Product *a)
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

void Product_List::SaveFile(Product_List &my_list)
{
    string data_;
    string set_product_data_[13];

    ifstream readfile;

    readfile.open("./Data/INPUT.txt");

    while (getline(readfile, data_))
    {
        string delimiter_ = "|";
        size_t position_ = 0;

        string token_;
        Product *item_;

        while ((position_ = data_.find(delimiter_)) != std::string::npos)
        {
            int i = 0;
            item_ = new Mouse();
            token_ = data_.substr(0, position_);
            set_product_data_[i] = token_;
            i++;
        }
        data_.erase(0, position_ + delimiter_.length());
        if (set_product_data_[0] == "Mouse")
        {
            Mouse *mouse_ = new Mouse();
            mouse_->SetID(set_product_data_[1]);
            mouse_->SetAmount(stoi(set_product_data_[2]));
            mouse_->SetPrice(stoi(set_product_data_[3]));
            mouse_->SetDiscount(stod(set_product_data_[4]), set_product_data_[5], set_product_data_[6]);

            mouse_->SetBrand(set_product_data_[7]);
            mouse_->SetType(set_product_data_[8]);
            mouse_->SetColor(set_product_data_[9]);

            my_list.Push(mouse_);
        }
        else
        {
            Laptop *laptop_ = new Laptop();
            laptop_->SetID(set_product_data_[1]);
            laptop_->SetAmount(stoi(set_product_data_[2]));
            laptop_->SetPrice(stoi(set_product_data_[3]));
            laptop_->SetDiscount(stod(set_product_data_[4]), set_product_data_[5], set_product_data_[6]);

            laptop_->SetBrand(set_product_data_[7]);
            laptop_->SetDiskType(set_product_data_[8]);
            laptop_->SetDiskCapacity(stoi(set_product_data_[9]));
            laptop_->SetScreenSize(stod(set_product_data_[10]));
            laptop_->SetRam(stoi(set_product_data_[11]));
            laptop_->SetColor(set_product_data_[12]);

            my_list.Push(laptop_);
        }
    }
    // ofstream writefile;
    // writefile.open("./Data/OUTPUT.txt");
    // writefile.close();
    readfile.close();
}

// switch (i)
// {
// case 0:
//     name_ = token_;
//     if (name_ == "Mouse")
//     {
//         item_ = new Mouse();
//     }
//     if (name_ == "Laptop")
//     {
//         item_ = new Laptop();
//     }
//     break;
// case 1:
//     ID_ = token_;
//     break;
// case 2:
//     amount_ = stoi(token_);
//     break;
// case 3:
//     price_ = stoi(token_);
//     break;
// case 4:
//     discount_ = stod(token_);
//     break;