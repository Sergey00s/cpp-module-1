#include <iostream>

int main(int argc, char const *argv[])
{
	std::string mainstr("HI THIS IS BRAIN");
	std::string *stringPTR = &mainstr;
	std::string &stringREF = mainstr;
	
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;

	std::cout << mainstr << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;
	return 0;
}
