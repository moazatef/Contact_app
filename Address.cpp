#include "Address.h"
#include<iostream>
#include <string>
using namespace std;

Address::Address()
{
	// nothig here
}

Address::Address(string add_address, string add_type , string add_descreption )
{
	set_place(add_address);
	set_type(add_type);
	set_descreption(add_descreption);

}

Address::~Address()
{
	// nothing here
}

void Address::set_place(string add_address)
{
	this-> U_place = add_address;
}

void Address::set_type(string add_type)
{
	this-> U_type = add_type;
}

void Address::set_descreption(string add_descreption)
{
	this-> U_descreption = add_descreption;
}

bool Address::is_matched(string key) const
{
	return (U_place.compare(key) == 0);
}

void Address::print(string) const
{
	cout << "Place: " << U_place << "\t ||" << U_type << "\t ||" << U_descreption<<endl;
}

