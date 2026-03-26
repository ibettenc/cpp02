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
#include <cmath>
using namespace std;

class Fixed
{
    private: 
        int n;
        static const int bits = 8;

    public:
        Fixed();
        Fixed(const int value);
        Fixed(const float value); 
        Fixed(const Fixed &src); // appelé quand je crée un nouvel objet à partir d'un existant // Fixed b(a);
        Fixed &operator=(const Fixed &src); // on remplace le contenu par celui d'un autre // b = a;
        ~Fixed();
        float toFloat() const;
        int toInt() const;
        int getRawBits() const;
        void setRawBits(int const raw);
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif