#ifndef ARRAY_H
# define ARRAY_H

template <typename T>
class Array
{
    private:
        T *arr;
        unsigned int l;

    public:
    Array()
    {
        std::cout << "Array constructor called" << std::endl;
        this->l = 0;
        this->arr = new T[0]();
    }
    Array(unsigned int n)
    {
        std::cout << "Array constructor called with value: " << n << std::endl;
        this->arr = new T[n]();
        this->l = n;
    }
    Array(const Array &c)
    {
        std::cout << "Array copy constructor called" << std::endl;
        this->l = c.l;
        this->arr = new T[this->l]();
        for (unsigned int i = 0; i < this->l; i++)
            this->arr[i] = c.arr[i];
    }
    Array &operator=(const Array &c)
    {
        std::cout << "Array assignation operator called" << std::endl;
        this->l = c.l;
        this->arr = new T[this->l]();
        for (size_t i = 0; i < this->l; i++)
            this->arr[i] = c.arr[i];
        return (*this);
    }
    ~Array()
    {
        std::cout << "Array destructor called" << std::endl;
        delete this->arr;
    }
    class EXP: public std::exception
	{
		const char * what () const throw ()
		{
			return ("Index out of range");
		}
	};
	unsigned int size()
	{
		return (this->l);
	}
	T &operator[](unsigned int i)
	{
		if (i >= this->l)
			throw EXP();
		return (this->arr[i]);
	}
};

#endif