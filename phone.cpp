#include "phone.h"
#include<iostream>
#include <string>
using namespace std;


Phone::Phone(string phone_number, string phone_type, string phone_descreptaion)
{
	set_phone(phone_number);
	set_type(phone_type);
	set_descreption(phone_descreptaion);
}

Phone::Phone()
{
}

Phone::~Phone()
{
	//nothing to remove 
}

void Phone::set_phone(string phone_number)
{
	U_phone = phone_number;
}

void Phone::set_type(string phone_type)
{
	U_Type = phone_type;
}

void Phone::set_descreption(string phone_descreption)
{
	U_Descraption = phone_descreption;
}

bool Phone::is_matched(string key) const
{
	return (U_phone.compare(key) == 0);
		
}

void Phone::print() const
{
	cout << " Phone: " << U_phone <<"\t || "<<U_Type<<"\t ||"<<U_Descraption<<endl;
	
}



