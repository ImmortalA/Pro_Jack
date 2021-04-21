#include <iostream>
// #include <Product_management.h>
using namespace std;

#define ACTION_ADD_TERMINAL 1
#define ACTION_READ_TERMINAL 2
#define ACTION_ADD_FILE 3
#define ACTION_READ_FILE 4
#define ACTION_DEL 5
#define ACTION_EXIT 6

int ShowMenu()
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

int main()
{
    cout << "============================================\n\n";
    cout << "(っ＾▿＾っ) Welcome Master (っ＾▿＾っ)\n";
    while (true)
    {
        int option = ShowMenu();
        switch (option)
        {
        case ACTION_ADD_TERMINAL:
        {
            break;
        }
        case ACTION_ADD_FILE:
        {
            break;
        }
        case ACTION_READ_TERMINAL:
        {
            break;
        }
        case ACTION_READ_FILE:
        {
            break;
        }
        case ACTION_DEL:
        {
            break;
        }
        case ACTION_EXIT:
        {
            cout << "👋≧◉ᴥ◉≦  Thank you! See you again❤   👋≧◉ᴥ◉≦\n\n";
            return 0;
        }
        }
        cout << endl;
    }
    return 0;
}