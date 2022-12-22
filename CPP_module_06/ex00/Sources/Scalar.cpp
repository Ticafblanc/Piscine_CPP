#include "Scalar.hpp"
#include <cmath>
#include <limits>
#include <cfloat>

Scalar::Scalar(){}

Scalar::Scalar(const std::string& str)
{
	if (str.size() < 1)
		throw std::invalid_argument("Invalid input");
	if (str.size() == 1 && !isdigit(str.front()))
	{
		this->_Char = str.front();
		this->_Type = Char;
		std::cout << "it's char " << this->_Char << std::endl;
		return;
	}
	char *End;
	long l = strtol(str.c_str(), &End, 10);
	if (!strlen(End)
		&& l < std::numeric_limits<int>::max()
		&& l > std::numeric_limits<int>::min())
	{
		this->_Int = static_cast<int>(l);
		this->_Type = Int;
		std::cout << "it's int " << this->_Int << std::endl;
		return;
	}
	End = NULL;
	long double ld = strtold(str.c_str(), &End);
	this->_Float = atof(str.c_str());
	if (*End == 'f' && strlen(End) == 1
		&& ((ld < std::numeric_limits<float>::max()
		&& ld  > std::numeric_limits<float>::min())
		|| isnan(this->_Float)
		|| isinf(this->_Float)))
	{
		this->_Type = Float;
		std::cout << "it's float " << this->_Float << std::endl;
		return;
	}
	if (!strlen(End)
		&& ((ld < std::numeric_limits<double>::max()
		&& ld  > std::numeric_limits<double>::min())
		|| isnan(ld)
		|| isinf(ld)))
	{
		this->_Double = static_cast<double>(ld);
		this->_Type = Double;
		std::cout << "it's double " << this->_Double << std::endl;
		return;
	}
	throw std::invalid_argument("Invalid input");
}

Scalar::Scalar(const Scalar& other)
{
	switch (other._Type)
	{
	case Char:
		this->_Char = other._Char;
	case Int:
		this->_Int = other._Int;
	case Float:
		this->_Float = other._Float;
	case Double:
		this->_Double = other._Double;
	default:
		break;
	}
	this->_Type = other._Type;
}

Scalar& Scalar::operator=(const Scalar& rhs)
{
	switch (rhs._Type)
	{
	case Char:
		this->_Char = rhs._Char;
		break;
	case Int:
		this->_Int = rhs._Int;
		break;
	case Float:
		this->_Float = rhs._Float;
		break;
	case Double:
		this->_Double = rhs._Double;
		break;
	default:
		break;
	}
	this->_Type = rhs._Type;
	return *this;
}

Scalar::~Scalar(){}

char Scalar::toChar() const
{
	switch (this->_Type)
	{
	case Char:
		return this->_Char;
	case Int:
		if (!isascii(this->_Int))
			throw std::overflow_error("Impossible");
		if (isprint(this->_Int))
			return static_cast<char>(this->_Int);
		else
			throw std::overflow_error("char not dispayable");	
	case Float:
		if (!(fabs(this->_Float - static_cast<int>(this->_Float) ) < 0.01f)
			|| !isascii(static_cast<int>(this->_Float)))
			throw std::overflow_error("Impossible");
		if (isnan(this->_Float) || isinf(this->_Float))
			throw std::overflow_error("Impossible");
		if (isprint(static_cast<int>(this->_Float)))
			return static_cast<char>(this->_Float);
		else
			throw std::overflow_error("char not dispayable");	
	case Double:
		if (!(fabs(this->_Float - static_cast<int>(this->_Float) ) < 0.01f)
			|| !isascii(static_cast<int>(this->_Double)))
			throw std::overflow_error("Impossible");
		if (isnan(this->_Double) || isinf(this->_Double))
			throw std::overflow_error("Impossible");
		if (isprint(static_cast<int>(this->_Double)))
			return static_cast<char>(this->_Double);
		else
			throw std::overflow_error("char not dispayable");	
	default:
		throw std::invalid_argument("Scalar is empty");
		break;
	}
}

int Scalar::toInt() const
{
	switch (this->_Type)
	{
	case Char:
		return static_cast<int>(this->_Char);
	case Int:
		return this->_Int;
	case Float:
		if (isnan(this->_Float) || isinf(this->_Float)
			|| this->_Float > std::numeric_limits<int>::max()
			|| this->_Float < std::numeric_limits<int>::min()
			|| !(fabs(this->_Float - static_cast<int>(this->_Float) ) == 0.0f))
			throw std::overflow_error("Impossible");
		else
			return static_cast<int>(this->_Float);
	case Double:
		if (isnan(this->_Double) || isinf(this->_Double)
			|| this->_Double > std::numeric_limits<int>::max()
			|| this->_Double < std::numeric_limits<int>::min()
			|| !(fabs(this->_Float - static_cast<int>(this->_Float) ) == 0.0))
			throw std::overflow_error("Impossible");
		else
			return static_cast<int>(this->_Double);	
	default:
		throw std::invalid_argument("Scalar is empty");
		break;
	}
}

float Scalar::toFloat() const
{
	switch (this->_Type)
	{
	case Char:
		return static_cast<float>(this->_Char);
	case Int:
		return static_cast<float>(this->_Int);
	case Float:
		return this->_Float;
	case Double:	
		if (isnan(this->_Double))
			throw std::overflow_error("nan");
		if (isinf(this->_Double))
			throw std::overflow_error("inf");
		if (this->_Double > std::numeric_limits<float>::max()
			|| this->_Double < std::numeric_limits<float>::min())
			throw std::overflow_error("Impossible");
		else
			return static_cast<float>(this->_Double);
	default:
		throw std::invalid_argument("Scalar is empty");
		break;
	}
}

double Scalar::toDouble() const
{
	switch (this->_Type)
	{
	case Char:
		return static_cast<double>(this->_Char);
	case Int:
		return static_cast<double>(this->_Int);
	case Float:
		return static_cast<double>(this->_Float);
	case Double:
		return this->_Double;
	default:
		throw std::invalid_argument("Scalar is empty");
		break;
	}
}

