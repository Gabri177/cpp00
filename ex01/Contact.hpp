#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>
# include <string>
# include <iomanip>

class Contact{

	public:
		int		index;
		bool	is_null;
		Contact();
		std::string	first_name;
		std::string	last_name;
		std::string	nick_name;
		std::string phone_num;
		std::string	secret;
};

#endif