#ifndef WHATEVER_H
# define WHATEVER_H

template <typename A>
void iter(A *a, int l, void(*f)(A const &))
{
    for (int i = 0; i < l; i++)
        f(a[i]);
}

#endif