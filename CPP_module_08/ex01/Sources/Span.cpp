#include "Span.hpp"
#include <numeric>
#include <iostream>
#include <cstdlib>

Span::Span(const unsigned int& N): _size(N){}

Span::Span(const Span& other) : _v(other._v), _size(other._size){}

Span::~Span(){}

Span& Span::operator=(const Span& rhs)
{
	this->_v = rhs._v;
	this->_size = rhs._size;
	return *this;
}

void Span::addNumber(int x)
{
	if (this->_v.size() < this->_size)
		this->_v.push_back(x);
	else
		throw Full();
}

std::vector<int>::iterator& Span::addNumber(std::vector<int>::iterator& it, const std::vector<int>::iterator& begin, const std::vector<int>::iterator& end)
{
	if (static_cast<unsigned long>(std::distance(begin, end)) < this->_size - this->_v.size())
		try
		{
			it = this->_v.insert(it, begin, end);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
	else
		throw Full();
	return it;
}

unsigned int Span::shortestSpan()
{
	if (this->_v.size() > 1)
	{
		sort(this->_v.begin(), this->_v.end());
		std::vector<int>::iterator	it = this->_v.begin();
		int i = *(it + 1) - *it;
		for(; it != this->_v.end() - 1; it++)
		{
			i = (i > *(it + 1) - *it) ? (*(it + 1) - *it) : i;
		}
		return i ; 
	}
	else
		throw noFound ();
}

unsigned int Span::longestSpan() 
{
	if (this->_v.size() > 1)
	{
		sort(this->_v.begin(), this->_v.end());
	
		return  (*(this->_v.end() - 1) - *this->_v.begin());
	}
	else
		throw noFound ();
}

std::vector<int> Span::get_v() const{ return this->_v; }
