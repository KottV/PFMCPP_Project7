#include "Paladin.h"
#include "Utility.h"

Paladin::Paladin(const std::string& name_, int hp_, int armor_) : Character(hp_, armor_, 10), name(name_)
{
    helpfulItems = makeHelpfulItems(9);
    defensiveItems = makeDefensiveItems(13);
}

const std::string& Paladin::getName()
{
    return name;
}

std::string Paladin::getStats()
{
    return getCharacterStats(this);
}
