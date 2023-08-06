#include "edition.hpp"
Edit::Edit()
{
}
Edit::Edit(std::string _filename, std::string s1, std::string s2)
{
	filename = _filename;
	str1 = s1;
	str2 = s2;
}
Edit::~Edit()
{
}

void Edit::read_file(std::string _filename)
{
	unsigned long	position;

	std::string text_tmp;
	new_file = _filename + ".replace";
	std::ifstream infile;
	infile.open(_filename);
	if (!infile.is_open())
	{
		std::cout << "Error!" << std::endl;
		exit(0);
	}
	std::getline(infile, text, '\0');
	position = text.find(str1);
	while (position != std::string::npos && str2 != "" && str1 != "")
	{
		if (position != std::string::npos)
		{
			text_tmp = text.substr(position + str1.length());
			text = text.substr(0, position) + str2 + text_tmp;
			position = text.find(str1, position + str2.length());
		}
	}
	std::ofstream outfile;
	outfile.open(new_file);
	new_file.append(text);
	if (!outfile.is_open())
	{
		std::cout << "Error!" << std::endl;
		exit(0);
	}
	outfile << text;
	infile.close();
	outfile.close();
}
