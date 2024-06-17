/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sillymax <sillymax@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 11:02:59 by sillymax          #+#    #+#             */
/*   Updated: 2024/06/17 16:38:57 by sillymax         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(void) : _name("NULL"), _hitPoints(0), _energyPoints(0), _attackDamage(0)
{
	std::cout << "ClapTrap " << _name << " is created with " << _hitPoints << " health, " << _energyPoints << " energy and " << _attackDamage << " damage due to a malfuntion!" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << _name << " is created with " << _hitPoints << " health, " << _energyPoints << " energy and " << _attackDamage << " damage!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	_name = other._name;
	_hitPoints = other._hitPoints;
	_energyPoints = other._energyPoints;
	_attackDamage = other._attackDamage;
	std::cout << "ClapTrap " << _name << " is copied with " << _hitPoints << " health, " << _energyPoints << " energy and " << _attackDamage << " damage!" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << _name << " is destroyed." << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (_energyPoints > 0)
	{
		_energyPoints -= 1;
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
	}
	else
		std::cout << "Needs to recharge." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints < amount)
		_hitPoints = 0;
	else
		_hitPoints -= amount;
	std::cout << "ClapTrap " << _name << " took " << amount << " damage, it has " << _hitPoints << " health left." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints > 0)
	{
		_hitPoints += amount;
		_energyPoints -= 1;
		std::cout << "ClapTrap " << _name << " is repaired, it has " << _hitPoints << " health left." << std::endl;
	}
	else
		std::cout << "Needs to recharge." << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	std::cout << "ClapTrap " << _name << " has been changed to ClapTrap " << other._name << " with " << other._hitPoints << " health, " << other._energyPoints << " energy, " << other._attackDamage << " damage!" << std::endl;
	if (this != &other)	
	{
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	}
	return *this;
}
