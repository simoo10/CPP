#ifndef EDITION_HPP
# define EDITION_HPP

# include <fstream>
# include <iostream>
class Edit
{
  private:
	std::string filename;
	std::string text;
	std::string str2;
	std::string str1;
	//std::string edit_text;
	std::string new_file;

  public:
	Edit();
	Edit(std::string _filename, std::string s1, std::string s2);
	~Edit();
	int search_s1(std::string s1, std::string s2);
	void read_file(std::string _filename);
};

#endif