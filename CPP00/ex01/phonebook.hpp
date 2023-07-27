#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# define MAX 3
# include "contact.hpp"
# include <iostream>

class PhoneBook
{
  private:
	int count;
	Contact contact[MAX];

  public:
	PhoneBook();
	~PhoneBook();
	void add_contact();
	void search_contact();
};

#endif