#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iomanip>
# include <iostream>

class Contact
{
  private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string tel_num;
	std::string dark_secret;
	int id;

  public:
	Contact();
	~Contact();
	void save_contact(int);
	void show_contacts();
	void find_contact();
	void update_index(int);
};
void print_info(std::string message);

#endif