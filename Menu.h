// #include "include.h"
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include "Product_Management.h"

using namespace std;

#define ACTION_ADD_TERMINAL 1
#define ACTION_DISPLAY_TERMINAL 2
#define ACTION_ADD_FILE 3
#define ACTION_DISPLAY_FILE 4
#define ACTION_DEL 5
#define ACTION_EXIT 6

class Menu
{
private:

public:
    Menu() {}
    ~Menu() {}

    int ShowMenu();
    void MainMenu();
    
    void actionAddTerminal(Product_List &my_list);
    void actionDisplayTerminal(Product_List &my_list);

    void actionAddFile(Product_List &my_list);
    void actionDisplayFile(Product_List &my_list);

    void actionDel(Product_List &my_list);
};

int Menu::ShowMenu()
{
    cout << "============================================\n\n";
    cout << "\nThis is the menu ☜(ˆ▿ˆc)\n\n";
    cout << "1.Add a product from terminal\n";
    cout << "2.Display product list on terminal\n";
    cout << "3.Add a product from file\n";
    cout << "4.Display product list on file\n";
    cout << "5.Delete a product \n";
    cout << "6.Exit\n";
    cout << "\tPlease choose your order: ";
    int option;
    cin >> option;
    cout << "============================================\n\n";
    return option;
}

void Menu::MainMenu()
{
    Product_List my_list;
    
    cout << "============================================\n\n";
    cout << "(っ＾▿＾っ) Welcome (っ＾▿＾っ)\n";
    while (true)
    {
        int option = ShowMenu();
        switch (option)
        {
        case ACTION_ADD_TERMINAL:
        {
            actionAddTerminal(my_list);
            break;
        }
        case ACTION_DISPLAY_TERMINAL:
        {
            actionDisplayTerminal(my_list);
            break;
        }
        case ACTION_ADD_FILE:
        {
            actionAddFile(my_list);
            break;
        }
        case ACTION_DISPLAY_FILE:
        {
            actionDisplayFile(my_list);
            break;
        }
        case ACTION_DEL:
        {
            actionDel(my_list);
            break;
        }
        case ACTION_EXIT:
        {
            cout << "👋≧◉ᴥ◉≦  Thank you! See you again❤   👋≧◉ᴥ◉≦\n\n";
            return;
        }
        }
        cout << endl;
    }
}

void Menu::actionAddTerminal(Product_List &my_list)
{
    cout << setw(10) << "Which product do you want to add?\n"
         << setw(20) << "1.Mouse "
         << setw(20) << "2.Laptop"
         << endl;
    cout << "Your selection: ";
    int option;
    cin >> option;

    switch (option)
    {
    case 1:
    {
        Mouse m;
        cout << "Product chosen: Mouse\n"
             << "Please input your mouse specification: \n";
        my_list.SetGeneralSpecifications(&m,"Mouse");
        my_list.Push(m);
        break;
    }
    case 2:
    {
        break;
    }
    default:
        break;
    }
}