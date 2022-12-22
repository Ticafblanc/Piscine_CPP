#include <exception>
#include <vector>

struct range_t {
    std::vector<int>::iterator begin_it;
	std::vector<int>::iterator end_it;
};

class Span
{
public:
	Span(const unsigned int& N);
	Span(const Span& other);

	Span& operator=(const Span& rhs);

	~Span();

	void addNumber(int x);
	void addNumber(range_t& r);
	unsigned int shortestSpan() const;
	unsigned int longestSpan() const;
	std::vector<int> get_v() const;

	class Full : public std::exception
	{
	public:
		const char* what() const throw()
		{
			return ("Container full");
		}
	};

	class Empty : public std::exception
	{
	public:
		const char* what() const throw()
		{
			return ("Container empty");
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
