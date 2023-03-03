#ifndef CONVERT_H
# define CONVERT_H

#include <iostream>
#include <string>
#include <iomanip>

class Convert
{
    private:
        std::string str;

    public:
        Convert();
        Convert(char *s);
        Convert(const Convert &c);
        Convert &operator=(const Convert &c);
        char charret(int s);
        void to_int();
	    void to_char();
	    void to_float();
	    void to_double();
	    bool is_float();
	    bool is_point();
        void convert();
        ~Convert();
};

#endif