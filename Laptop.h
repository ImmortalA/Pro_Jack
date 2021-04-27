#include "Product.h"

class Laptop : public Product
{
private:
    string brand_;
    string disk_type_;
    int disk_capacity_;
    double screen_size_;
    int ram_;
    string color_;

public:
    Laptop();

    void SetBrand(string brand_);
    string GetBrand();

    void SetDiskType(string disk_type_);
    string GetDiskType();

    void SetDiskCapacity(int disk_capacity_);
    int GetDiskCapacity();

    void SetScreenSize(double screen_size_);
    double GetScreenSize();

    void SetRam(int ram_);
    int GetRam();

    void SetColor(string color_);
    string GetColor();

    void Show();
};

void Laptop::SetBrand(string brand_)
{
    this->brand_ = brand_;
}
string Laptop::GetBrand()
{
    return this->brand_;
}

void Laptop::SetDiskType(string disk_type_)
{
    this->disk_type_ = disk_type_;
}
string Laptop::GetDiskType()
{
    return this->disk_type_;
}

void Laptop::SetDiskCapacity(int disk_capacity_)
{
    this->disk_capacity_ = disk_capacity_;
}
int Laptop::GetDiskCapacity()
{
    return this->disk_capacity_;
}

void Laptop::SetScreenSize(double screen_size_)
{
    this->screen_size_ = screen_size_;
}
double Laptop::GetScreenSize()
{
    return this->screen_size_;
}

void Laptop::Show()
{
    cout << "Brand: " << this->brand_ << endl;
    cout << "Disk: " << endl;
    cout << "Type: " << this->disk_type_ << "\t\t"
         << "Capacity: " << this->screen_size_ << endl;
    cout << "Screen Size: " << this->screen_size_ << endl;
    cout << "RAM: " << this->ram_ << endl;
    cout << "Color: " << this->color_ << endl;
}
