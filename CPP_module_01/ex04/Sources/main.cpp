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


int main(int argc, char **argv)
{
	if (argc == 4)
	{
		std::string	infile(argv[1]);
		if (infile == ".replace")
		{
			std::cout << ".replace infile invalide" << std::endl;
			return 1;
		}
		std::ifstream ifs(infile);
		if (!ifs.good())
		{
			std::cout << infile;
			std::perror("infile :");
			std::cout << std::endl;
			return 1;
		}
		Replace	rep(argv[2], argv[3]);
		std::string	line;
		std::ofstream ofs(".replace");
		while (getline(ifs, line).good())
		{
			rep.find_rep(line);
			ofs << line << std::endl;
		}
		rep.find_rep(line);
		ofs << line;
		ifs.close();
		ofs.close();
	}
	else
	{
		std::cout << "Argument invalide" << std::endl;
		std::cout << "Usage : 'infile(no '.replace')' 'str to find' 'str to replace'" << std::endl;
	}
	return 0;
}
	