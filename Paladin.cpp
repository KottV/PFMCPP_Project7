#include "Paladin.h"

Paladin::Paladin(const std::string& name_, int hp_, int armor_) : Character(hp_, armor_, 10), name(name_) {}

void Paladin::attack(Character& other)
{
    std::cout << name << " is attacking " << other.getName() << "!!!" << std::endl;
    Character::attack(other);
}

const std::string& Paladin::getName()
{
    return name;
}

std::string Paladin::getStats() { return "stat"; }