#include"Address.h"
#include"Email.h"
#include"phone.h"
#include "phone.h"
#include<iostream>
#include<ctime>
using namespace std;


class User
{
protected:

private:
	int U_id;
	string U_fname;
	string U_lname;
	int U_age;
	int U_gender; // use 0 for female -- 1 for male 
	
	time_t U_added;

	Phone * U_phones;
	Address * U_addresses;
	Email* U_emails;

	int U_phone_size;
	int U_address_size;
	int U_email_size;

	int U_phone_count;
	int U_address_count;
	int U_email_count;

public:
	User();
	virtual ~User();

	void print() const  ;
	void Read_input();

	void set_user_id(int);
	void set_first_name(string);
	void set_last_name(string);
	void set_age(int);
	void set_gender(int);

	int get_user_id() const; 
	bool Find(string) const;

};
