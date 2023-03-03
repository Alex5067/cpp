/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   book.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoralekseev <igoralekseev@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 17:07:35 by igoraleksee       #+#    #+#             */
/*   Updated: 2022/07/06 04:32:17 by igoraleksee      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BOOK_H
# define BOOK_H

# include <iostream>
# include "contact.hpp"
# include <iomanip>

class Book
{
    private:
        Contact contacts[8];
    public:
        void seacrh();
        void add(); 
};

#endif 