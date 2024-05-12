/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugao <yugao@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 22:35:38 by yugao             #+#    #+#             */
/*   Updated: 2024/05/12 22:35:39 by yugao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>
# include <string>
# include <iomanip>

class Contact{

	public:
		int		index;
		bool	is_null;
		Contact() : index(-1), is_null(false) {};
		std::string	first_name;
		std::string	last_name;
		std::string	nick_name;
		std::string phone_num;
		std::string	secret;
};

#endif