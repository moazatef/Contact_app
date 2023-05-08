#include<iostream>
#include<string>
using namespace std;

#ifdef Phone_H

#endif Phone_H


class Phone
{
protected:

private:
	string  U_phone;
	string U_Type;
	string U_Descraption;
public:
	Phone();
		virtual ~Phone();

		void set_phone(string);
		void set_type(string);
		void set_descreption(string);

		bool is_matched(string) const;
		void print() const ;
		Phone(string phone_number, string phone_type, string phone_descreptaion);
};

