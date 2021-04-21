#include "Product.h"

class Mouse : Product
{
private:
    string brand_;
    string type_;
    string color_;

public:
    Mouse();

    void SetBrand(string brand_);
    void EnterBrand();
    string GetBrand();

    void SetType(string type_);
    void EnterType();
    string GetType();

    void SetColor(string color_);
    void EnterColor();
    string GetColor();

    void Show();
};

void Mouse::SetBrand(string brand_)
{
    this->brand_ = brand_;
}
void Mouse::EnterBrand()
{
    cin.ignore(256, '\n');
    getline(cin, brand_);
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
    cin.ignore(256, '\n');
    getline(cin, type_);
}
string Mouse::GetType()
{
    return this->color_;
}

void Mouse::SetColor(string color_)
{
    this->color_ = color_;
}
void Mouse::EnterColor()
{
    cin.ignore(256, '\n');
    getline(cin, color_);
}
string Mouse::GetColor()
{
    return color_;
}

void Mouse::Show()
{
    cout << "Name: " << this->brand_ << endl;
    cout << "Type: " << this->type_ << endl;
    cout << "Color: " << this->color_ << endl;
}