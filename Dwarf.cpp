#include "Dwarf.h"

Dwarf::Dwarf(const std::string& name_, int hp_, int armor_) : Character(hp_, armor_, 4), name(name_)
{
    helpfulItems = makeHelpfulItems(2);
    defensiveItems = makeDefensiveItems(1);
}

void Dwarf::attack(Character& other)
{
    std::cout << name << " is attacking " << other.getName() << "!!!" << std::endl;
    Character::attack(other);
}

const std::string& Dwarf::getName()
{
    return name;
}

std::string Dwarf::getStats()
{
    return getCharacterStats(this);
}
