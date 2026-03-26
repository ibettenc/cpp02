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

#include "Fixed.hpp"

Fixed::Fixed()
{
    cout << "Default constructor called" << endl;
    n = 0;
}

Fixed::Fixed(const int value)
{
    cout << "Int constructor called" << endl;
    n = value * 256;
}

Fixed::Fixed(const float value)
{
    cout << "Float constructor called" << endl;
    n = roundf(value * 256); // roundf arrondit la valeur a l'entier le plus proche
}

Fixed::Fixed(const Fixed &src)
{
    cout << "Copy constructor called" << endl;
    n = src.getRawBits();
}

float Fixed::toFloat() const
{
    return ((float)n / 256);        
}

int Fixed::toInt() const
{
    return (n / 256);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return (out);
}

Fixed &Fixed::operator=(const Fixed &src)
{
    cout << "Copy assignment operator called" << endl;
    n = src.getRawBits();
    return (*this);
}

Fixed::~Fixed()
{
    cout << "Destructor called" << endl;
}

int Fixed::getRawBits() const
{
    cout << "getRawBits member function called" << endl;
    return (n);
}

void Fixed::setRawBits(int const raw)
{
    n = raw;
}
