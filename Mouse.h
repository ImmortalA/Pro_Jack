#include <iostream>
using namespace std;

class Mouse
{
private:
    string name_;
    string type_;
    string color_;

public:
    Mouse() {}
    ~Mouse();
    Mouse(string name)
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
    string getType()
    {
        return this->type_;
    }
    void setType()
    {
        int op;
        cout << "Your mouse type: \n";
        cout << "1.Bluetooth        2.Wire\n";
        cout << "Your selection: ";
        cin >> op;
        this->type_ = op ? "Bluetooth" : "Wire";
    }
    string getColor()
    {
        return this->color_;
    }
    void setColor()
    {
        cout << "Enter your " << this->name_ << " mouse color: ";
        cin >> this->color_;
    }
    void show()
    {
        cout << "Name: " << this->name_ << endl;
        cout << "Type: " << this->type_ << endl;
        cout << "Color: " << this->color_ << endl;
    }
};