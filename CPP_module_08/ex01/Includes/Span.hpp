#include <exception>
#include <vector>

class Span
{
public:
	Span(const unsigned int& N);
	Span(const Span& other);

	Span& operator=(const Span& rhs);

	~Span();

	void addNumber(int x);
	std::vector<int>::iterator& addNumber(std::vector<int>::iterator& it, const std::vector<int>::iterator& begin, const std::vector<int>::iterator& end);
	unsigned int shortestSpan();
	unsigned int longestSpan();
	std::vector<int> get_v() const;

	class Full : public std::exception
	{
	public:
		const char* what() const throw()
		{
			return ("Container full");
		}
	};

	class noFound : public std::exception
	{
	public:
		const char* what() const throw()
		{
			return ("Not found");
		}
	};

private:
	std::vector<int>	_v;
	unsigned int		_size;
};
