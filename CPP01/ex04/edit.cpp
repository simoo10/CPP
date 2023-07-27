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
	int	i;
	int	position;

	i = 0;
	new_file = _filename + ".replace";
	std::ifstream inputFile(_filename);
	if (!inputFile.is_open())
	{
		std::cout << "Error!" << std::endl;
		exit(0);
	}
	std::getline(inputFile, text, '\0');
	position = text.find(str1);
	while (position != std::string::npos && str2 != "" && str1 != "")
	{
		if (position != std::string::npos)
		{
			text = text.substr(0, position) + str2 + text.substr(position
					+ str2.length());
			position = text.find(str1);
		}
	}
	std::ofstream outfile(new_file);
	new_file.append(text);
	if (!outfile.is_open())
	{
		std::cout << "Error!" << std::endl;
		exit(0);
	}
	outfile << text;
	inputFile.close();
	outfile.close();
}
