#include <iostream>
#include <fstream>
#include <sstream>

int main(int argc, char *argv[])
{
	if (argc != 4)
		return 0;
	std::stringstream	inBuffer;
	std::ifstream		infile(argv[1]);
	std::string			s1 = argv[2];
	std::string			s2 = argv[3];
	if (!infile.is_open())
		return (0);
	std::string		outfile = argv[1];
	outfile += ".replace";
	inBuffer << infile.rdbuf();
	std::string	buff = inBuffer.str();
	std::ofstream	fd_out(outfile.c_str());
	if(!fd_out.is_open() || buff.empty())
	{
		infile.close();
		return (0);
	}
	std::size_t pos;
	while ((pos = buff.find(s1)) != std::string::npos && s1.length() > 0)
	{
		if (pos != std::string::npos)
		{
			fd_out << buff.substr(0, pos) << s2;
			buff = buff.substr(pos + s1.length());
		}
	}
	fd_out << buff;
	infile.close();
	fd_out.close();
	return 0;
}
