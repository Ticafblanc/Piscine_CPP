#include <stack>
#include <deque>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
public:
	MutantStack() : std::stack<T,Container>::stack(){};
	MutantStack(const MutantStack& other) : std::stack<T,Container>::stack(other) {};
	MutantStack& operator=(const MutantStack& rhs)
	{
		if (this != &rhs)
			this->std::stack<T,Container>::operator=(rhs);
		return *this;
	}

	virtual ~MutantStack() {};

	typedef typename Container::iterator				iterator;
	typedef typename Container::reverse_iterator		reverse_iterator;

	iterator			begin() { return this->c.begin(); };
	iterator			end() { return this->c.end(); };
	reverse_iterator	rbegin() { return this->c.rbegin(); };
	reverse_iterator	rend() { return this->c.rend(); };
};