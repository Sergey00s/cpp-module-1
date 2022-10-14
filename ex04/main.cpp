#include "Ex.hpp"

void my_replace(std::string str, std::string th)
{
	int i;
	
}


int main(int argc, char **av)
{
	int byte;
	std::string str;

	if (argc != 4)
	{
		std::cout <<"invalid args!"<<std::endl;
		return 0;
	}
	std::ifstream file_rd(av[1]);
	std::ofstream file_wr;

	if (!file_rd.is_open())
	{
		std::cout << "invalid fd" << std::endl;
		return 0;
	}
	byte = 1;
	while (std::getline(file_rd, str))
	{
		
	}
	
}
