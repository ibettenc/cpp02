/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibettenc <ibettenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 13:34:24 by ibettenc          #+#    #+#             */
/*   Updated: 2026/04/01 13:34:24 by ibettenc         ###   ########.fr       */
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
        /* Constructor & desctructor */
        Fixed();
        Fixed(const int value);
        Fixed(const float value); 
        Fixed(const Fixed &src); // appelé quand je crée un nouvel objet à partir d'un existant // Fixed b(a);
        ~Fixed();

        /* Conversion */
        Fixed &operator=(const Fixed &src); // on remplace le contenu par celui d'un autre // b = a;
        
        /* Just return int and float value */
        float toFloat() const;
        int toInt() const;
        
        /* Getter and setter bits value */
        int getRawBits() const;
        void setRawBits(int const raw);
        
        //////////////////////////////////////////////////////////////////////////
        static Fixed &min(Fixed &a, Fixed &b);
        static const Fixed &min(const Fixed &a, const Fixed &b);
        static Fixed &max(Fixed &a, Fixed &b);
        static const Fixed &max(const Fixed &a, const Fixed &b);

};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif