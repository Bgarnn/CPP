#include <iostream>
#include <fstream>

// void find_and_replace()

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "incorrect input" << '\n';
		return (1);
	}
	std::string filename = argv[1];
	std::string s1_find = argv[2];
	std::string s2_replace = argv[3];
	if (s1_find.empty() || s2_replace.empty())
	{
		std::cerr << "invalid input" << '\n';
		return (1);
	}
	std::ifstream	infile(filename);
	std::ofstream	outfile(filename + ".replace");
	if (infile.fail() || outfile.fail())
	{
		std::cerr << "incorrect file" << '\n';
		return (1);
	}
	std::string	read_str = "";
	while(std::getline(infile, read_str))
	{
		size_t	read_index = 0;
		std::string collect_str = "";
		std::size_t find_index = 0;
		while ((find_index = read_str.find(s1_find, find_index)) != std::string::npos)
		{
			collect_str = read_str.substr(read_index, find_index);
			read_index = find_index + s1_find.length();
			collect_str = collect_str + s2_replace;
			find_index += s1_find.length();
		}
		collect_str = collect_str + read_str.substr(read_index, read_str.length());
		std::cout << collect_str << '\n';
	}

}