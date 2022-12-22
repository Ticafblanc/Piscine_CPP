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

void Span::addNumber(range_t& r)
{
	if (this->_v.size() < this->_size)
	{
		int distance = std::distance(r.begin_it, r.end_it);
		if (distance + this->_v.size() > this->_size)
			r.end_it -= distance + this->_v.size() - this->_size;
		this->_v.insert(this->_v.end(), r.begin_it, r.end_it);
	}
	else
		throw Full();
}

unsigned int Span::shortestSpan() const
{
	std::vector<int> tmp;

	if (this->_v.size() < this->_size)
	int (*iabs)(int) = &std::abs;
	if (this->_v.size() <= 1)
		throw ContainerEmptyException();
	std::adjacent_difference(this->_v.begin(), this->_v.end(), std::back_inserter(tmp));
	std::transform(tmp.begin(), tmp.end(), tmp.begin(), iabs);
	return *min_element(tmp.begin(), tmp.end());
}

unsigned int Span::longestSpan() const
{
	std::vector<int> tmp;

	int (*iabs)(int) = &std::abs;
	if (this->_v.size() <= 1)
		throw ContainerEmptyException();
	std::adjacent_difference(this->_v.begin(), this->_v.end(), std::back_inserter(tmp));
	std::transform(tmp.begin(), tmp.end(), tmp.begin(), iabs);
	return *max_element(tmp.begin(), tmp.end());
}