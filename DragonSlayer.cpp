#include "DragonSlayer.h"
#include "Dragon.h"
#include "Utility.h"

DragonSlayer::DragonSlayer(const std::string& name_, int hp_, int armor_) : Character(hp_, armor_, 4), name(name_)
{
    helpfulItems = makeHelpfulItems(1);
    defensiveItems = makeDefensiveItems(1);
    //attackItem = new (AttackItem);
}

void DragonSlayer::attack(Character& other)
{
    std::cout << name << " is attacking " << other.getName() << " !!" << std::endl;
    if( auto* dragon = dynamic_cast<Dragon*>(&other) )
    {
        //DragonSlayers get a 10x boost when attacking dragons, from their attack item.
        //so they should USE their attack item before attacking the dragon... 
        //note that items are single-use only, so you need to reset it after use.  
        //look in the Character class for how the other item types are reset after use.
        
        if (attackItem != nullptr)
        {
            attackItem->use(this);
            attackItem.reset();
        }
        
        while( dragon->getHP() > 0 )
        {
            dragon->takeDamage(attackDamage);
        }
    }
    
    Character::attack(other);
    
}

const std::string& DragonSlayer::getName()
{
    return name;
}

std::string DragonSlayer::getStats()
{
    return getCharacterStats(this);
}
