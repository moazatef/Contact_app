#ifndef WIN32
#define WIN32
#endif
#include <WinSock2.h>
#include <Windows.h>
#include"contact.h"
#include"User.h"
#include <iostream>
#include<string>
using namespace std;

int main()
{

    int c = -1;
    contact contact (100);

   // while (c != 0)
    {
        cout << "\n\t\t\t\t\t**** Welcome to Contacts Manager Application ****" << endl;
        cout << "\n\t\t\t\t\t This App was created By ......... Moaz Atef....... " << endl;
        cout << "\n\t\t\t\t\t\----------------------------------------------------- \n";
        cout<<"Select your choice(1 / 2 / 3 / 4) \n";
        cout << "_______________ MAIN MENU_______________\n"
            << "\t\t\t\t\t\t\t\t\t\t [1] Print All Users \n "
            << "\t\t\t\t\t\t\t\t\t\t [2] Add New User \n"
            << "\t\t\t\t\t\t\t\t\t\t [3] Search\n"
            << "\t\t\t\t\t\t\t\t\t\t [4] Edit User\n "
            << "\t\t\t\t\t\t\t\t\t\t [5] Delet User\n"
            << "\t\t\t\t\t\t\t\t\t\t [0] Quit \n"
            << "\t\t\t\t\t\t\t\t\t\t"
            << "\t\t\t\t\t\t\t\t\t\t-------------------------------------------\n";
        cin >> c;

        switch (c)
        {
        case 1:
            // print all user 
            contact.print();
            
            break;
        case 2:
            // add new user
            contact.add_new_user();
            break;
        case 3:
        // Search
        {
            string key;
            cout << " Enter your keyword to find ";
            cin.ignore();
            getline(cin, key);
            contact.find_all(key);
        }
        break;

            
        case 4:
            // edit User
        {
            int edit_id = 0;
            cout << " Enter user id to edit\n";
            cin >> edit_id;
            contact.edit_user(edit_id);
        }

            break;
        case 5:
            // Delet User 
            

        {
            int del_id = 0;
            cout << "Enter user id to delete\n";
            cin >> del_id;
            contact.delete_user(del_id);

        }

        }
    }
    cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t*****Thanks For Using My APP"<<endl;
    return 0;


    
}


