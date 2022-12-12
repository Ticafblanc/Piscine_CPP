/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoquocb <mdoquocb@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 15:03:23 by mdoquocb          #+#    #+#             */
/*   Updated: 2022/12/12 15:03:24 by mdoquocb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "AForm.hpp"

class Intern
{
public:
	Intern();

	~Intern();

	class InterneException : public std::exception{};

	AForm* makeForm(const std::string& formName, const std::string& target) const;
};