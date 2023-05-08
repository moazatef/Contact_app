#include "User.h"
#include "phone.h"
#include<iostream>
#include<string>

using namespace std;

class contact
{
public:
	contact(int);
	virtual ~contact();

	void add_new_user();
	void delete_user(int);
	void edit_user(int);
	void print() const;
	void find_all(string) const;

protected:

private:
	int U_count;
	int U_size;
	User* Uusers;
};

