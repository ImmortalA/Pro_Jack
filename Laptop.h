#include "Product.h"

using namespace std;

class Laptop : public Product
{
private:
    string brand_;
    string disk_type_;
    double screen_size_;
    int ram_;
    int disk_capacity_;
    string color_;

public:
    Laptop() : Product()
    {
    }
    ~Laptop() {}

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

    void SetDetail();
    void ShowDetail();
    void ShowFileDetail();
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

void Laptop::SetRam(int ram_)
{
    this->ram_ = ram_;
}
int Laptop::GetRam()
{
    return this->ram_;
}

void Laptop::SetColor(string color_)
{
    this->color_ = color_;
}
string Laptop::GetColor()
{
    return this->color_;
}

void Laptop::SetDetail()
{
    cout << "Brand: ";
    cin.ignore();
    getline(cin, this->brand_);
    cin.clear();

    cout << "Disk Type (SSD / HDD): ";
    cin.ignore();
    getline(cin, this->disk_type_);
    cin.clear();

    cout << "Disk Capacity: ";
    cin >> this->disk_capacity_;

    cout << "Screen Size (inch): ";
    cin >> this->screen_size_;

    cout << "RAM: ";
    cin >> this->ram_;

    cout << "Color: ";
    cin.ignore();
    getline(cin, this->color_);
    cin.clear();
}

void Laptop::ShowDetail()
{
    cout << "Detail:\tBrand: " << GetBrand()
         << "\tDisk type: " << GetDiskType()
         << "\tDisk capacity: " << GetDiskCapacity()
         << "\tScreen size: " << GetScreenSize()
         << "\tRAM: " << GetRam()
         << "\tColor" << GetColor()
         << endl;
}

void Laptop::ShowFileDetail()
{
    fstream writefile;
    writefile.open("./Data/OUTPUT.txt", fstream::app);

    writefile << "Detail:\tBrand: " << GetBrand()
              << "\tDisk type: " << GetDiskType()
              << "\tDisk capacity: " << GetDiskCapacity()
              << "\tScreen size: " << GetScreenSize()
              << "\tRAM: " << GetRam()
              << "\tColor" << GetColor()
              << endl;

    writefile.close();
}