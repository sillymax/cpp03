/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sillymax <sillymax@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 18:53:41 by sillymax          #+#    #+#             */
/*   Updated: 2024/06/18 01:17:03 by sillymax         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap(void) : ClapTrap()
{
	_name = "NULL";
	_hitPoints = 0;
	_energyPoints = 0;
	_attackDamage = 0;
	std::cout << "DiamondTrap " << _name << " is created with default constructor." << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name + "_clap_name")
{
	_name = name;
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap " << _name << " is created." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other), ScavTrap(other), FragTrap(other)
{
	std::cout << "DiamondTrap " << _name << " is copied." << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap " << _name << " is destroyed." << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void)
{
	if (_hitPoints > 0)
	{
		std::cout << "DiamondTrap name: " << _name << "." << std::endl
				  <<  "ClapTrap name: " << ClapTrap::_name << "." << std::endl;
	}
	else
		std::cout << "Cannot run whoAmI, DiamondTrap " << _name << " is dead." << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
	FragTrap::operator=(other);
	std::cout << "DiamondTrap assignment operator called" << std::endl;
	return *this;
}
