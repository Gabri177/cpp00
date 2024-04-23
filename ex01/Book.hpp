#ifndef BOOK_HPP
# define BOOK_HPP
# include "Contact.hpp"
# define FNAME "First Name: "
# define LNAME "Last Name: "
# define NNAME "Nick Name: "
# define PNBR "Phone Numbre: "
# define SEC "Secret: "

std::string truncate(const std::string &str);

class Book{

	private:

		int		index;

		void	info_print(int index);
	public:

		Contact	people[8];
		Book(void);
		void	info_add(std::string fname, std::string lname, std::string nname, std::string phone, std::string sec);
		void	info_serch(std::string cindex);
		bool	check_nbr(std::string str);
};

#endif