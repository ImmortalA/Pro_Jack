#include "Product.h"

class Laptop
{
private:
    string name_;
    string disk_type_;
    double screen_size_;
    int ram_;
    int disk_capacity_;
    string color_;

public:
    Laptop() {}
    ~Laptop();
    Laptop(string name)
    {
        this->name_ = name;
    }
    string getName()
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
};