#include "Product.h"

class Mouse : Product
{
private:
    string brand_;
    string type_;
    string color_;

public:
    Mouse();

    void EnterBrand();
    string GetBrand();

    void EnterType();
    string GetType();

    void EnterColor();
    string GetColor();

    void Show();
};

void Mouse::EnterBrand()
{
    cin.ignore(256, '\n');
    getline(cin, brand_);
}
string Mouse::GetBrand()
{
    return this->brand_;
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
void Mouse::EnterColor()
{
    cin.ignore(256, '\n');
    getline(cin, color_);
}
string GetColor()
{

}
void Mouse::Show()
{
    cout << "Name: " << this->brand_ << endl;
    cout << "Type: " << this->type_ << endl;
    cout << "Color: " << this->color_ << endl;
}