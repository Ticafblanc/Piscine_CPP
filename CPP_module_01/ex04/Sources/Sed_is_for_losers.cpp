/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed_is_for_losers.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoquocb <mdoquocb@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 12:20:06 by mdoquocb          #+#    #+#             */
/*   Updated: 2021/10/07 14:15:32 by mdoquocb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.class.hpp"
#include "Sed_is_for_losers.hpp"


int main(int argc, char **argv)
{
	if (argc == 4)
	{
		std::string filename(argv[1]);
		std::string s1(argv[2]);
		std::string s2(argv[3]);
		
		std::ifstream ifs(filename);

	}
	else
		std::cout << "Argument invalide" << std::endl;
}
	
