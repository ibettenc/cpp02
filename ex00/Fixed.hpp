/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibettenc <ibettenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 16:50:41 by ibettenc          #+#    #+#             */
/*   Updated: 2026/02/21 16:50:42 by ibettenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
using namespace std;

class Fixed
{
    private: 
        int value;
        static const int bits = 8;

    public:
        Fixed(); // constructeur par defaut // Fixed a;
        Fixed(const Fixed &src); // appelé quand je crée un nouvel objet à partir d'un existant // Fixed b(a);
        Fixed &operator=(const Fixed &src); // on remplace le contenu par celui d'un autre // b = a;
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};

#endif