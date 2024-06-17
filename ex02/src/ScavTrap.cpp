/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sillymax <sillymax@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 15:52:09 by sillymax          #+#    #+#             */
/*   Updated: 2024/06/17 16:51:37 by sillymax         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(void) : ClapTrap()
{}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
	std::cout << "ScavTrap is created from ClapTrap " << name << "." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	std::cout << "ScavTrap from ClapTrap " << _name << " is copied." << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap from ClapTrap " << _name << " is destroyed." << std::endl;
}

void ScavTrap::guardGate(void)
{
	if (_hitPoints > 0)
		std::cout << "ScavTrap from ClapTrap " << _name << " is in guard keeper mode." << std::endl;
	else
		std::cout << "ScavTrap from ClapTrap " << _name << " is dead, it cannot be in guard keeper mode." << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	ClapTrap::operator=(other);
	std::cout << "ScavTrap from ClapTrap " << _name << " has been changed to ScavTrap " << other._name << " with " << other._hitPoints << " health, " << other._energyPoints << " energy and " << other._attackDamage << " dagame!" << std::endl;
	return *this;
}