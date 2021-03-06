#include "Product.h"

using namespace std;

class Mouse : public Product
{
private:
    string brand_;
    string type_;
    string color_;

public:
    Mouse() : Product()
    {
    }
    ~Mouse() {}

    void SetBrand(string brand_);
    void EnterBrand();
    string GetBrand();

    void SetType(string type_);
    void EnterType();
    string GetType();

    void SetColor(string color_);
    void EnterColor();
    string GetColor();

    // void Show();

    void SetDetail();
    void ShowDetail();

    string GetDetailInput();
};

void Mouse::SetBrand(string brand_)
{
    this->brand_ = brand_;
}
void Mouse::EnterBrand()
{
    // cin.ignore(256, '\n');
    // getline(cin, this->brand_);
    cin.ignore();
    getline(cin, this->brand_);
    // cin.clear();
    cout << this->brand_ << endl;
}
string Mouse::GetBrand()
{
    return this->brand_;
}

void Mouse::SetType(string type_)
{
    this->type_ = type_;
}
void Mouse::EnterType()
{
    // cin.ignore(256, '\n');
    // getline(cin, this->type_);
    cin.ignore(0);
    getline(cin, this->type_);
    // cin.clear();
    cout << this->type_ << endl;
}
string Mouse::GetType()
{
    return this->type_;
}

void Mouse::SetColor(string color_)
{
    this->color_ = color_;
}
void Mouse::EnterColor()
{
    // cin.ignore(256, '\n');
    // getline(cin, this->color_);
    cin.ignore(0);
    getline(cin, this->color_);
    // cin.clear();
    cout << this->color_ << endl;
}
string Mouse::GetColor()
{
    return this->color_;
}

void Mouse::SetDetail()
{
    cout << "Brand: ";
    EnterBrand();

    cout << "Type (Wire / Wireless): ";
    EnterType();

    cout << "Color: ";
    EnterColor();
}

void Mouse::ShowDetail()
{
    cout << "Detail:\t\tBrand: " << GetBrand()
         << setw(15) << "Type: " << GetType()
         << setw(15) << "Color: " << GetColor()
         << endl;
}

string Mouse::GetDetailInput()
{
    string detail_input;
    detail_input.append(GetBrand());
    detail_input.append("|");
    detail_input.append(GetType());
    detail_input.append("|");
    detail_input.append(GetColor());
    detail_input.append("|");

    return detail_input;
}