#ifndef WHATEVER_H
# define WHATEVER_H

template <typename A>
void swap(A &a, A &b)
{
    A tmp;

    tmp = a;
    a = b;
    b = tmp;
}

template <typename B>
B min(B &a, B &b)
{
    return (a < b ? a : b);
}

template <typename C>
C max(C &a, C &b)
{
    return (a > b ? a : b);
}

#endif