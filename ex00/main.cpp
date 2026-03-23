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

// on doit multiplier la valeur de l'int qu'on veut par 256 car un int = 2147483647

int main()
{
Fixed a;
Fixed b( a );
Fixed c;
c = b;
cout << a.getRawBits() << endl;
cout << b.getRawBits() << endl;
cout << c.getRawBits() << endl;
return 0;
}