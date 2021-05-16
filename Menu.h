#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include "Product_Management.h"

using namespace std;

#define ACTION_ADD_TERMINAL 1
#define ACTION_DISPLAY_TERMINAL 2
#define ACTION_SAVE_FILE 3
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

    void actionSaveFile(Product_List &my_list);
    void actionDisplayFile(Product_List &my_list);

    void actionDel(Product_List &my_list);
};

int Menu::ShowMenu()
{
    cout << "======================================================\n";
    cout << "\tThis is the menu ☜(ˆ▿ˆc)\n";
    cout << "1.Add a product from terminal\n";
    cout << "2.Display product list on terminal\n";
    cout << "3.Save a product from file\n";
    cout << "4.Display product list on file\n";
    cout << "5.Delete a product \n";
    cout << "6.Exit\n\n";
    cout << "Please choose your order: ";
    int option;
    cin >> option;
    cout << "======================================================\n\n";
    return option;
}

void Menu::MainMenu()
{
    Product_List my_list;

    cout << "======================================================\n\n";
    cout << "\t(っ＾▿＾っ) W E L C O M E (っ＾▿＾っ)\n\n";
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
        case ACTION_SAVE_FILE:
        {
            actionSaveFile(my_list);
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
    cout << "Which product do you want to add?\n"
         << setw(15) << "1.Mouse "
         << setw(15) << "2.Laptop"
         << endl;
    cout << "Your selection: ";
    int option;
    cin >> option;

    switch (option)
    {
    case 1:
    {
        Mouse *mouse_ = new Mouse();
        cout << "\n\tProduct chosen: MOUSE\n"
             << "Please input your mouse specifications: \n";
        mouse_->SetGeneral("Mouse");

        cout << "Do you want to add detail for your mouse?\n"
             << setw(15) << "1.Yes "
             << setw(15) << "2.No"
             << "\nYour selection: ";
        int option;
        cin >> option;
        if (option == 1)
        {
            cout << "Please input your mouse details: \n";
            mouse_->SetDetail();
        }
        my_list.Push(mouse_);
        break;
    }
    case 2:
    {
        Laptop *laptop_ = new Laptop();
        cout << "\n\tProduct chosen: LAPTOP\n"
             << "Please input your laptop specifications: \n";
        laptop_->SetGeneral("Laptop");

        cout << "Do you want to add detail for your laptop?\n"
             << setw(15) << "1.Yes "
             << setw(15) << "2.No"
             << "\nYour selection: ";
        int option;
        cin >> option;
        if (option == 1)
        {
            cout << "Please input your laptop details: \n";
            laptop_->SetDetail();
        }
        my_list.Push(laptop_);
        break;
    }
    default:
        break;
    }
}

void Menu::actionDisplayTerminal(Product_List &my_list)
{
    if (my_list.GetLength() == 0)
        cout << "There is no product in the list." << endl;
    else
    {
        cout << "Which display do you want to view?\n"
             << setw(15) << "1.View all "
             << setw(15) << "2.View by product"
             << endl;
        cout << "Your selection: ";
        int option;
        cin >> option;

        switch (option)
        {
        case 1:
        {
            my_list.Show();
            break;
        }
        case 2:
        {
            cout << "Which product do you want to view?\n"
                 << setw(15) << "1.Mouse "
                 << setw(15) << "2.Laptop"
                 << endl;
            cout << "Your selection: ";
            int option;
            cin >> option;
            switch (option)
            {
            case 1:
            {
                my_list.ShowByProduct("Mouse");
                break;
            }
            case 2:
            {
                my_list.ShowByProduct("Laptop");
                break;
            }
            default:
                break;
            }
            break;
        }
        }
    }
}

void Menu::actionDel(Product_List &my_list)
{
    if (my_list.GetLength() == 0)
        cout << "There is no product in the list." << endl;
    else
    {
        cout << "Which type do you want to delete?\n"
             << setw(15) << "1.By index "
             << setw(15) << "2.By product"
             << endl;
        cout << "Your selection: ";
        int option;
        cin >> option;

        switch (option)
        {
        case 1:
        {
            int i;
            cout << "Enter the index of the product you want to remove: ";
            cin >> i;
            my_list.Pop(i);
            break;
        }
        case 2:
        {
            cout << "Which product do you want to delete?\n"
                 << setw(15) << "1.Mouse "
                 << setw(15) << "2.Laptop"
                 << endl;
            cout << "Your selection: ";
            int option;
            cin >> option;
            if (option == 1)
                my_list.PopByProduct("Mouse");
            else if (option == 2)
                my_list.PopByProduct("Laptop");
            else
                cout << "Please choose the correct option";
            break;
        }
        }
    }
}

void Menu::actionSaveFile(Product_List &my_list)
{
    my_list.SaveFile();
}

void Menu::actionDisplayFile(Product_List &my_list)
{
    ofstream writefile;
    writefile.open("./Data/OUTPUT.txt");

    if (my_list.GetLength() == 0)
        writefile << "There is no product in the list." << endl;
    else
    {
        cout << "Which display do you want to view?\n"
             << setw(15) << "1.View all "
             << setw(15) << "2.View by product"
             << endl;
        cout << "Your selection: ";
        int option;
        cin >> option;

        switch (option)
        {
        case 1:
        {
            my_list.ShowFile();
            break;
        }
        case 2:
        {
            cout << "Which product do you want to view?\n"
                 << setw(15) << "1.Mouse "
                 << setw(15) << "2.Laptop"
                 << endl;
            cout << "Your selection: ";
            int option;
            cin >> option;
            switch (option)
            {
            case 1:
            {
                my_list.ShowFileByProduct("Mouse"); 
                break;
            }
            case 2:
            {
                my_list.ShowFileByProduct("Laptop");
                break;
            }
            default:
                break;
            }
            break;
        }
        }
    }

    writefile.close();
}
