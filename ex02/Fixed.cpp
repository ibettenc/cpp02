/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibettenc <ibettenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/27 11:51:53 by ibettenc          #+#    #+#             */
/*   Updated: 2026/03/27 11:51:53 by ibettenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* Constructor & desctructor */

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

Fixed::~Fixed()
{
    cout << "Destructor called" << endl;
}


/* Conversion */

float Fixed::toFloat() const
{
    return ((float)n / 256);        
}

int Fixed::toInt() const
{
    return (n / 256);
}

/* Opérateur de Surcharge d'affichage (<<) */

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return (out);
}

/* 'Opérateur d'Affectation (=) */

Fixed &Fixed::operator=(const Fixed &src)
{
    cout << "Copy assignment operator called" << endl;
    n = src.getRawBits();
    return (*this);
}


/* Getter and setter bits value */

int Fixed::getRawBits() const
{
    cout << "getRawBits member function called" << endl;
    return (n);
}

void Fixed::setRawBits(int const raw)
{
    n = raw;
}

/*  Nouvelles Fonctions  */

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    if (a < b)
        return (a);
    else
        return (b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a < b)
        return (a);
    else
        return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    if (a > b)
        return (a);
    else
        return (b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a > b)
        return (a);
    else
        return (b);
}

