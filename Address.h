#include<iostream>
#include <string>
using namespace std;
#ifndef ADDRESS_H
#define ADDRESS_H
#endif // !Address


class Address
{
protected:

private:
	string U_place, U_type, U_descreption;
public:
	Address();
	Address(string, string, string);
	virtual ~Address();
	

	void set_place(string );
	void set_type(string );
	void set_descreption(string );

	bool is_matched(string) const;

	void print(string) const;


;
};

