#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char **av) 
{
    if (ac != 4) {
        std::cerr << "Usage: " << av[0] << " <filename> <s1> <s2>\n";
        return 1;
    }

    std::ifstream inputfile(av[1]);
    if (!inputfile.is_open()) {
        std::cerr << "Error opening file: " << av[1] << std::endl;
        return 1;
    }

	if (inputfile.peek() == std::ifstream::traits_type::eof()) 
	{
		std::cerr << "Error: Input file is empty" << std::endl;
        inputfile.close();
        return 1;
    }
    std::string s1 = av[2];
    std::string s2 = av[3];
    std::string o_filename = std::string(av[1]) + ".replace";
    std::ofstream outputfile(o_filename.c_str());

    if (!outputfile.is_open()) {
        std::cerr << "Error creating output file\n";
        inputfile.close();
        return 1;
    }

    std::string line;
    std::string content;
    while (std::getline(inputfile, line)) 
    {
		content += line;
        if (!inputfile.eof())
        {
            std::cout << line << '\n';
            content += "\n";
        }
    }
    size_t pos = 0;
	if (!s1.empty())
	{
		while ((pos = content.find(s1, pos)) != std::string::npos) 
		{
			if (!s2.empty())
			{
				content = content.substr(0, pos) + s2 + content.substr(pos + s1.length());
				pos += s2.length();
			}
			else
				content = content.substr(0, pos) + content.substr(pos + s1.length());
		}
	}
        outputfile << content;

    std::cout << "Replacement completed. Output written to: " << o_filename << std::endl;

    inputfile.close();
    outputfile.close();

    return 0;
}
