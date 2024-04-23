#include <iostream>
#include <cctype>

int	main(int argc, char **argv){

	std::string no_msg = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	if (argc == 1){
		std::cout << no_msg << std::endl;
		return 0;
	}
	for (int i = 1; i < argc; i ++){
		std::string	str = argv[i];
		for (std::string::iterator it = str.begin(); it != str.end(); ++it)
			*it = std::toupper((unsigned int)(*it));
		std::cout << str;
	}
	std::cout << std::endl;
	return 0;
}