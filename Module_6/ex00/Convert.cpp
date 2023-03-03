#include "Convert.hpp"

Convert::Convert()
{
}

Convert::Convert(char *s)
{
	this->str = s;
}

Convert::Convert(const Convert &c)
{
	this->str = c.str;
}

Convert &Convert::operator=(const Convert &c)
{
	this->str = c.str;
	return (*this);
}

Convert::~Convert()
{
}

void Convert::convert()
{
    if (is_point())
    {
        if (is_float())
            to_float();
        else
            to_double();
    }
    else if (this->str.length() == 1 && (this->str.c_str()[0] < '0' || this->str.c_str()[0] > '9'))
        to_char();
    else
        to_int();
}

void Convert::to_int()
{
	int s;
	try
	{
		s = std::stoi(this->str.c_str());
		try
		{
			char e = charret(static_cast<char>(s));
			std::cout << "char: '" << e << "'" << std::endl;
		}
		catch(const char *r)
		{
			std::cout << "char: " << r << std::endl;
		}
		std::cout << "Int: " << static_cast<int>(s) << std::endl;
		std::cout << "Float: " << std::fixed << std::setprecision(1) << static_cast<float>(s) << "f" << std::endl;
		std::cout << "Double: " << std::fixed << std::setprecision(1) << static_cast<double>(s) << std::endl;
	}
	catch(...)
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "Int: impossible" << std::endl;
		std::cout << "Float: nanf" << std::endl;
		std::cout << "Double: nan" << std::endl;
	}
}

void Convert::to_float()
{
    float s;
	try
	{
		s = std::stof(this->str.c_str());
		try
		{
			char e = charret(static_cast<char>(s));
			std::cout << "char: '" << e << "'" << std::endl;
		}
		catch(const char *r)
		{
			std::cout << "char: " << r << std::endl;
		}
		std::cout << "Int: " << static_cast<int>(s) << std::endl;
		std::cout << "Float: " << std::fixed << std::setprecision(1) << static_cast<float>(s) << "f" << std::endl;
		std::cout << "Double: " << std::fixed << std::setprecision(1) << static_cast<double>(s) << std::endl;
	}
	catch(...)
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "Int: impossible" << std::endl;
		std::cout << "Float: nanf" << std::endl;
		std::cout << "Double: nan" << std::endl;
	}
}

void Convert::to_char()
{
    char s;

	s = this->str.c_str()[0];
	std::cout << "char: '" << s << "'" << std::endl;
	std::cout << "Int: " << static_cast<int>(s) << std::endl;
	std::cout << "Float: " << std::fixed << std::setprecision(1) << static_cast<float>(s) << "f" << std::endl;
	std::cout << "Double: " << std::fixed << std::setprecision(1) << static_cast<double>(s) << std::endl;
}

void Convert::to_double()
{
    float s;

    try
    {
        s = std::stod(this->str.c_str());
        try
        {
            char e = charret(static_cast<char>(s));
            std::cout << "char: " << e << std::endl;
        }
        catch(const char *r)
        {
            std::cout << "char: " << r << std::endl;
        }
        std::cout << "Int: " << static_cast<int>(s) << std::endl;
		std::cout << "Float: " << std::fixed << std::setprecision(1) << static_cast<float>(s) << "f" << std::endl;
		std::cout << "Double: " << std::fixed << std::setprecision(1) << static_cast<double>(s) << std::endl;
    }
    catch (...)
    {
        std::cout << "char: impossible" << std::endl;
		std::cout << "Int: impossible" << std::endl;
		std::cout << "Float: nanf" << std::endl;
		std::cout << "Double: nan" << std::endl;
    }
}

char Convert::charret(int s)
{
	char ret;

	if (s >= 32 && s <= 127)
		ret = static_cast<char>(s);
	else
		throw ("Not displayable");
	return (ret);
}

bool Convert::is_float()
{
    if (str.find("f") != std::string::npos)
        return true;
    return false;
}

bool Convert::is_point()
{
    if (str.find(".") != std::string::npos)
        return true;
    return false;
}