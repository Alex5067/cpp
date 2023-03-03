#ifndef EASYFIND_H
# define EASYFIND_H

template <typename T>
typename T::iterator easyfind(T c, int n)
{
	typename T::iterator it;

	it = find(c.begin(), c.end(), n);
	if (it != c.end())
		return (it);
	else
		throw "Couldn't find";
}

#endif