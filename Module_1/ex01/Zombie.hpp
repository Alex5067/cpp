#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <string>

class Zombie
{
    private:
        std::string name;
    public:
        Zombie(void);
        ~Zombie(void);

        Zombie(std::string name);
        void announce(void);
        std::string getName(void);
        void setName(std::string name);
};

Zombie* zombieHorde(int N, std::string name);

#endif