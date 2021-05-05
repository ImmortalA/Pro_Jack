<<<<<<< Updated upstream
#include "Product.h"

class Laptop : Product
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
    
    void SetBrand();
    string GetBrand();

    void SetDisk();
    
};

// Laptop();
//     Laptop(string name)
//     {
//         this->name_ = name;
//     }
//     string getName()
//     {
//         return this->name_;
//     }
//     void setName(string name)
//     {
//         this->name_ = name;
//     }
//     string getDiskName()
//     {
//         return this->disk_type_;
//     }
//     void setDiskName()
//     {
//         int op;
//         cout << "Your Laptop Disk type: \n";
//         cout << "1.HDD       2.SSD\n";
//         cout << "Your selection: ";
//         cin >> op;
//         this->disk_type_ = op ? "HDD" : "SSD";
//     }
//     string getColor()
//     {
//         return this->color_;
//     }
//     void setColor()
//     {
//         cout << "Enter your " << this->name_ << " Laptop color: ";
//         cin >> this->color_;
//     }
//     double getScreenSize()
//     {
//         return this->screen_size_;
//     }
//     void setScreenSize()
//     {
//         cout << "Enter your " << this->name_ << " Laptop Screen size: ";
//         cin >> this->screen_size_;
//     }
//     int getRam()
//     {
//         return this->ram_;
//     }
//     void setRam()
//     {
//         cout << "Enter your " << this->name_ << " Laptop RAM color: ";
//         cin >> this->ram_;
//     }
//     int getDiskCapacity()
//     {
//         return this->disk_capacity_;
//     }
//     void setDiskCapacity()
//     {
//         cout << "Enter your " << this->name_ << " Laptop Disk Capacity color: ";
//         cin >> this->disk_capacity_;
//     }
//     void show()
//     {
//         cout << "Name: " << this->name_ << endl;
//         cout << "Color: " << this->color_ << endl;
//         cout << "Screen Size: " << this->screen_size_ << endl;
//         cout << "RAM: " << this->ram_ << endl;
//         cout << "Disk: " << endl;
//         cout << "Type: " << this->disk_type_ << "\t\t"
//              << "Capacity: " << this->screen_size_ << endl;
//     }
=======
#include "Product.h"

<<<<<<< Updated upstream
class Laptop : public Product
=======
class Laptop
>>>>>>> Stashed changes
{
private:
    string name_;
    string disk_type_;
    double screen_size_;
    int ram_;
    int disk_capacity_;
    string color_;

public:
<<<<<<< Updated upstream
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
=======
    Laptop() {}
    Laptop(string name);
    ~Laptop();
    string GetName();
    void GetName(string name);
    string GetDiskName();
    void SetDiskName();
    string SetColor();
    void GetColor();
    double GetScreenSize();
    void SetScreenSize();
    int GetRam();
    void SetRam();
    int GetDiskCapacity();
    void SetDiskCapacity();
    void Show();
};

    Laptop::Laptop(string name)
    {
        this->name_ = name;
    }
    string Mouse::getName()
    {
        return this->name_;
    }
    void setName(string name)
    {
        this->name_ = name;
    }
    string getDiskName()
    {
        return this->disk_type_;
    }
    void setDiskName()
    {
        int op;
        cout << "Your Laptop Disk type: \n";
        cout << "1.HDD       2.SSD\n";
        cout << "Your selection: ";
        cin >> op;
        this->disk_type_ = op ? "HDD" : "SSD";
    }
    string getColor()
    {
        return this->color_;
    }
    void setColor()
    {
        cout << "Enter your " << this->name_ << " Laptop color: ";
        cin >> this->color_;
    }
    double getScreenSize()
    {
        return this->screen_size_;
    }
    void setScreenSize()
    {
        cout << "Enter your " << this->name_ << " Laptop Screen size: ";
        cin >> this->screen_size_;
    }
    int getRam()
    {
        return this->ram_;
    }
    void setRam()
    {
        cout << "Enter your " << this->name_ << " Laptop RAM color: ";
        cin >> this->ram_;
    }
    int getDiskCapacity()
    {
        return this->disk_capacity_;
    }
    void setDiskCapacity()
    {
        cout << "Enter your " << this->name_ << " Laptop Disk Capacity color: ";
        cin >> this->disk_capacity_;
    }
    void show()
    {
        cout << "Name: " << this->name_ << endl;
        cout << "Color: " << this->color_ << endl;
        cout << "Screen Size: " << this->screen_size_ << endl;
        cout << "RAM: " << this->ram_ << endl;
        cout << "Disk: " << endl;
        cout << "Type: " << this->disk_type_ << "\t\t"
             << "Capacity: " << this->screen_size_ << endl;
    }
>>>>>>> Stashed changes
>>>>>>> Stashed changes
