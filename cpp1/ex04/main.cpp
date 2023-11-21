#include <iostream>
#include <fstream>

int main(int ac , char **av)
{
	if (ac != 4)
		return (std::cerr << " <filename>  s1  s2 \n", 1);
	std::ifstream infile;
	std::string s1 = av[2];
	std::string s2 = av[3];
	infile.open(av[1]);
	if (!infile)
		return(std::cerr << "Error open " << av[1] << std::endl , 1);
	std::ofstream outfile((std::string(av[1]) + "_s1ace").c_str());
	if (!outfile)
		return (std::cerr << "Error while creating file\n",  1);
	std::string data;
	std::getline(infile, data, '\0');
	if(s1 == "")
	{
		outfile << data;
		outfile.close();
		infile.close();
		return (0);
	}
	int i =  data.find(s1);
	while(i != -1)
	{
		if(i == 0)
			data =  s2 + data.substr(i + s1.size(), data.size() - s1.size());
		else
		{
			if(i + data.size() == '\0')
				data = data.substr(0, i) + s2;
			else
				data = data.substr(0, i) + s2 + data.substr(i + s1.size());
		}
		i =  data.find(s1 , i + s2.length());
	}
	outfile << data;
	infile.close();
	outfile.close();
}
