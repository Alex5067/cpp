/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoralekseev <igoralekseev@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 18:47:19 by igoraleksee       #+#    #+#             */
/*   Updated: 2022/08/17 13:49:08 by igoraleksee      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
    if (argc < 4)
        std::cout << "Bad arguments" << std::endl;
    else
    {
        std::string filename(argv[1]);
        std::ifstream ifs(filename);

        if (ifs.fail())
        {
            std::cout << "Error: file cannot be opened" << std::endl;
            return 1;
        }

        std::ofstream ofs(filename + ".replace");
        std::string find = argv[2];
        std::string replace = argv[3];

        std::string line;
        size_t pos = 0;
        while (getline(ifs, line))
        {
            while ((pos = line.find(find)) != std::string::npos)
            {
                ofs << line.substr(0, pos);
                ofs << replace;
                line.erase(0, pos + find.length());
            }
            std::cout << line << std::endl;
            ofs << line << std::endl;
        }
        ifs.close();
        ofs.close();
        std::cout << "File " << filename << ".replace created" << std::endl;
    }
    return 0;
}