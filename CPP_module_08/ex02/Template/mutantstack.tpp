
#include <stack>
#include <deque>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
public:
	MutantStack() : std::stack<T,Container>(){};
	MutantStack(const MutantStack& other) : std::stack<T,Container>(other) {};
	MutantStack& operator=(const MutantStack& rhs)
	{
		if (this != &rhs)
			std::stack<T,Container>::operator=(rhs);
		return *this;
	}

	virtual ~MutantStack() {};

	typedef typename Container::iterator				iterator;

	iterator			begin() { return std::stack<T>::c.begin(); };
	iterator			end() { return std::stack<T>::c.end(); };
};