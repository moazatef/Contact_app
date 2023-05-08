#include "User.h"
#include "phone.h"
#include<iostream>
using namespace std;

User::User()
{
	U_phone_size = 5;
	U_address_size = 5;
	U_email_size = 5;

	U_phones = new Phone[U_phone_size];
	U_emails = new Email[U_email_size];
	U_addresses = new Address[U_address_size];

	U_phone_count = 0;
	U_email_count = 0;
	U_address_count = 0;

	U_added = time(0);

	U_gender = 0;
	U_age = 0;
}

User::~User()
{
	delete[] U_phones;
	delete[] U_addresses;
	delete[] U_emails;
	
}

void User::print() const
{
	cout << "______________________________________ \n";
	cout << "ID :" << U_id << "\t Name:" << U_fname << "\t U_lname" << "\t";
	if (U_age > 0)
		cout << "Age :" << U_age << "\t";
	cout << (U_gender == 0 ? "Female" : "Male");
	cout << endl;


	if (U_phone_count > 0)
	{
		cout << "\t PHONE LIST : \n";
		
		for (int i = 0; i < U_phone_count; ++i) 
		{
			cout << "\t" << i + 1 << "_";
			U_phones[i].print();
		}

		  
	}


	if (U_email_count > 0)
	{
		cout << "\t EMAIL LIST : \n";

		for (int i = 0; i < U_phone_count; ++i)
		{
			cout << "\t" << i + 1 << "_";
			U_emails[i].print();
		}
	}


	if (U_address_count > 0)
	{
		cout << "\t ADDRESSES LIST : \n";

		for (int i = 0; i < U_address_count; ++i)
		{
			cout << "\t" << i + 1 << "_";
			U_addresses[i].print(0);
		}
		cout << endl;

	}


}

void User::Read_input()
{
	cout << " \t\t\t\t\t\t\t\t\t\t\t\t";
	cout << "Enter User Information :- \n";
	cout << "First Name :\n";
	cin.ignore();
	getline(cin, U_fname);

	cout << "Last Name";
	cin.ignore();
	getline(cin, U_lname);

	cout << "Age :";
	cin >> U_age;

	cout << " Gender (1 - Male , 0 - Female) :";
	cin >> U_gender;

	int n=0;
	cout << "How Many Phones (0-" << U_phone_size << ")?";
	cin >> n;
	cin.ignore();

	for (int i = 0; i < n; ++i)
	{ 
		cout << "---------------------------------" << endl;
	string data, type, desc;
	cout << "PHONE NUMBER (" << i + 1 << ") : ";
	getline(cin, data);


	cout << "TYPE :";
	getline(cin, type);

	cout << "Descreption";
	getline(cin, desc);

	Phone* new_phone = new Phone(data, type, desc);
	U_phones[U_phone_count++] = *new_phone;
	}



	
	cout << "How Many Emails (0-" << U_email_size << ")?";
	cin >> n;
	cin.ignore();

	for (int i = 0; i < n; ++i)
	{
		cout << "---------------------------------" << endl;
		string data, type, desc;
		cout << "EMAILS (" << i + 1 << ") : ";
		getline(cin, data);


		cout << "TYPE :";
		getline(cin, type);

		cout << "Descreption";
		getline(cin, desc);

		Email* new_email= new Email(data, type, desc);
		U_emails[U_email_count++] = *new_email;
	}

	int n = 0;
	cout << "How Many Addresses (0-" << U_address_size << ")?";
	cin >> n;
	cin.ignore();

	for (int i = 0; i < n; ++i)
	{
		cout << "---------------------------------" << endl;
		string data, type, desc;
		cout << "ADDRESSES (" << i + 1 << ") : ";
		getline(cin, data);


		cout << "TYPE :";
		getline(cin, type);

		cout << "Descreption";
		getline(cin, desc);

		Address* new_adress = new Address(data, type, desc);
		U_addresses[U_address_count++] = *new_adress;
	}

}

void User::set_user_id(int id )
{
	U_id = id;
}

void User::set_first_name(string firstname)
{
	U_fname = firstname;
}

void User::set_last_name(string lastname)
{
	U_lname = lastname;
}

void User::set_age(int age)
{
	U_age = age;
}

void User::set_gender(int gender)
{
	U_gender = gender;
}

int User::get_user_id() const
{
	return U_id;
}

bool User::Find(string key ) const
{
	if (U_fname.compare(key) == 0 || U_lname.compare(key) == 0)
	{
		return true;
	}
	if (U_phone_count > 0)
	{
		for (int i = 0; i < U_phone_count; ++i)
		{
			if (U_phones[i].is_matched(key))
				return true;
		}
	}

	if (U_email_count > 0)
	{
		for (int i = 0; i < U_email_count; ++i)
		{
			if (U_emails[i].is_matched(key))
				return true;
		}
	}
	if (U_address_count > 0)
	{
		for (int i = 0; i < U_address_count; ++i)
		{
			if (U_addresses[i].is_matched(key))
				return true;
		}
	}
	return false;
}
