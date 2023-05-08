#include "Email.h"
#include<iostream>
#include <string>
using namespace std;

Email::Email()
{
	//nothing here
}

Email::Email(string email_id, string email_type, string email_descreption )
{
	set_email(email_id);
	set_type(email_type);
	set_descreption(email_descreption);

}

Email::~Email()
{
	// nothing here
}

void Email::set_email(string email_id )
{
	this->U_email = email_id;
}

void Email::set_type(string email_type)
{
	this->U_type = email_type;
}

void Email::set_descreption(string email_descreption)
{
	this->U_descreption = email_descreption;
}

bool Email::is_matched(string key) const
{
	return (U_email.compare(key) == 0);
}


void Email::print() const
{
	cout << "Email: " << U_email << "\t ||" << U_type << "\t || " << U_descreption<<endl;
}

