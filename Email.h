#include<iostream>
#include"phone.h"
#include <string>
using namespace std;

class Email
{
protected:

private:
	string U_email, U_type, U_descreption;
public:

	Email();
	Email(string, string, string);
	virtual ~Email();

	void set_email(string );
	void set_type(string );
	void set_descreption(string );

	bool is_matched(string) const;
	void print() const;

};

