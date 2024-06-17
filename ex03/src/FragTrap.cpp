/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sillymax <sillymax@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 15:52:09 by sillymax          #+#    #+#             */
/*   Updated: 2024/06/17 19:36:33 by sillymax         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout << "FragTrap is created with default constructor" << std::endl;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
	std::cout << "FragTrap is created from ClapTrap " << name << "." << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
	std::cout << "FragTrap from ClapTrap " << _name << " is copied." << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap from ClapTrap " << _name << " is destroyed." << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	if (_hitPoints > 0)
		std::cout << "FragTrap from ClapTrap " << _name << " says HIGH FIVE GUYS!" << std::endl;
	else
		std::cout << "FragTrap from ClapTrap " << _name << " is dead, it cannot ask for a high five." << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
	ClapTrap::operator=(other);
	std::cout << "FragTrap from ClapTrap " << _name << " has been changed to FragTrap " << other._name << " with " << other._hitPoints << " health, " << other._energyPoints << " energy and " << other._attackDamage << " dagame!" << std::endl;
	return *this;
}