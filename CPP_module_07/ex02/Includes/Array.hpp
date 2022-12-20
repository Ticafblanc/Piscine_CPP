#include <exception>

template <typename T>
class Array
{
public:
	Array() : _size(0), _array(new T[0]) {};
	Array(unsigned int n) : _size(n), _array(new T[n]) {};
	Array(const Array& other)
	{
		this->_size = other._size;
		this->_array = new T[other._size];
		for (unsigned int i = 0; i < other._size; i++)
			this->_array[i] = other._array[i];
	}

	~Array(){delete [] this->_array;}

	Array& operator=(const Array& rhs)
	{
		if (this != &rhs)
		{
			delete [] this->_array;
			this->_size = rhs._size;
			this->_array = new T[rhs._size];
			for (unsigned int i = 0; i < rhs._size; i++)
				this->_array[i] = rhs._array[i];
		}
		return *this;
	}


	T& operator[](unsigned int pos)
	{
		if (pos >= this->_size)
			throw SegFault();
		return this->_array[pos];
	}

	unsigned int size(){return this->_size;}

	class SegFault : public std::exception
	{
	public:
		const char* what() const throw()
		{
			return ("SegFault!!");
		}
	};
private:
	size_t _size;
	T* _array;
};