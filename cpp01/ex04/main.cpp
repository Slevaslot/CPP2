#include "sed.hpp"

int    main(int ac, char const **av)
{
	if (ac == 4)
	{
		if (av[1][0] == '\0')
		{
			std::cout << "error : no file in argument 1"<< std::endl;
			return (-1);
		}
		if (av[2][0] == '\0')
		{
			std::cout << "error : no occurence to find in argument" << std::endl;
			return (-1);
		}
		std::string replacedFile = std::string(av[1]) + ".replace";
		std::string file = av[1];
		std::string s1 = av[2];
		std::string s2 = av[3];
		std::string line;
		std::ifstream fichier(av[1]);
		std::ofstream outfile;
		outfile.open(replacedFile.c_str());
		int	occur = -1;
		if (fichier.is_open())
		{
			while(getline(fichier, line))
			{
				occur = line.find(s1);
				if (occur != -1)
				{
					line.erase(occur, s1.length());
					line.insert(occur, s2);
					occur = -1;
				}
				outfile << line << std::endl;
			}
		}
		else
		{
			std::cout << "error while opening file / cant open file" << std::endl;
			return (-1);
		}
	}
	else
	{
		std::cout << "wrong number of parameter"<< std::endl;
		return (-1);
	}

}
