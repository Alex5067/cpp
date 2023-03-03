#include "book.hpp"

int main (void)
{
    Book phonebook;
    Contact contact;
    std::string str;

    while (1)
    {
        std::cout << "Please, enter command > ";
        std::cin >> str;
        if (str == "ADD")
            phonebook.add();
        else if (str == "SEARCH")
            phonebook.seacrh();
        else if (str == "EXIT" || std::cin.eof())
           return 0;
        else
            std::cout << "Invalid command: " << str << std::endl << "USAGE: ADD, SEARCH, EXIT" << std::endl;
    }
    return 0;
}