/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoquocb <mdoquocb@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 12:20:06 by mdoquocb          #+#    #+#             */
/*   Updated: 2021/10/07 14:15:32 by mdoquocb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.class.hpp"

Replace::Replace(std::string s1, std::string s2) : _s1(s1), _s2(s2){}

Replace::~Replace(){}

void    Replace::find_rep(std::string &buf)const{

    size_t  found;

    while ((found = buf.find(this->_s1)) != std::string::npos)
    {
        buf.erase(found, this->_s1.length());
		buf.insert(found, this->_s2);
    }

}
