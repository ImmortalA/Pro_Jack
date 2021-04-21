#include "Product.h"

class Mouse : Product
{
private:
    string brand_;
    string type_;
    string color_;

public:
    Mouse();
    Mouse(string brand_);

    void SetBrand();
    string GetBrand();

    void SetType();
    string GetType();

    void SetColor();
    string GetColor();

    void Show();
};

Mouse::Mouse(string brand_)
{
    this->brand_ = brand_;
}
void Mouse::SetBrand()
{
    cin.ignore(256, '\n');
    getline(cin, brand_);
}
string Mouse::GetBrand()
{
    return this->brand_;
}
void Mouse::SetType()
{
    cin.ignore(256, '\n');
    getline(cin, type_);
}
string Mouse::GetType()
{
    return this->color_;
}
void Mouse::SetColor()
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