#include "contact.h"
#include "User.h"
#include "phone.h"
#include<iostream>
#include<string>
using namespace std;

contact::contact(int contact_size )
{
	U_size = contact_size;
    Uusers = new User[U_size];
	U_count = 0;
}

contact::~contact()
{
	delete[] Uusers;
}

void contact::add_new_user()
{
	User* new_User = new User();
	new_User->Read_input();

	Uusers[U_count ++]  = * new_User;

}

void contact::delete_user(int user_id)
{
	if (U_count == 0)
	{
		cout << "NOT USER EXIST !! \n";
		return;
	}
	bool deleted = false;
	
	for (int i = 0; i < U_count; ++i)
	{
		if (Uusers[i].get_user_id() == user_id)
		{
			if (i == U_count -1) {
				U_count --; 
			}
			else
			{
				Uusers[i] = Uusers[U_count - 1];
				U_count--;
			}

			deleted = true;
			break;
		}
	}
	if (deleted) {
		cout << "USER DELETED SUCSSFULLY !! \n";

	}
	else {
		cout << "USER NOT EXIST !!  \n";
	}

}

void contact::edit_user( int user_id)
{
	if (U_count == 0)
	{
		cout << "NOT USER EXIST !! \n";
		return;
	}
	bool edited = false;

	for (int i = 0; i < U_count; ++i)
	{
		if (Uusers[i].get_user_id() == user_id)
		{
			Uusers[i].Read_input();
			

			edited = true;
			break;
		}
	}
	if (edited) {
		cout << "USER Edited SUCSSFULLY !! \n";

	}
	else {
		cout << "USER NOT EXIST !!  \n";
	}
}

void contact::print() const
{
	if (U_count == 0)
	{
		cout << " NO USER FOUND!! \t";
		return;
	}
	for (int i = 0; i < U_count; ++i) {
		Uusers[i].print();

	}

}

void contact::find_all(string key ) const
{
	int found_counter = 0;
	for (int i = 0; i < U_count; ++i) {
		if (Uusers[i].Find(key))
		{
			Uusers[i].print();
			found_counter++;
		}
	}
	if (found_counter == 0)
	{
		cout << " NO USER FOUNDED !!\n";


	}
	else
	{
		cout << found_counter << "FOUNDED \n";

	}
}
