#include <string>
#include <iostream>

enum Type {Invalid, Char, Int, Float, Double};

class Scalar
{
public:
	Scalar();
	Scalar(const std::string& str);
	Scalar(const Scalar& other);

	Scalar& operator=(const Scalar& rhs);

	~Scalar();

	char toChar() const;
	int toInt() const;
	float toFloat() const;
	double toDouble() const;

private:
	char				_Char;
	int					_Int;
	float				_Float;
	double				_Double;
	enum Type 			_Type;
};
