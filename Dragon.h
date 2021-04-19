#pragma once

#include "Character.h"

struct Dragon : public Character
{
    std::string name;
    
    Dragon(const string& name, int hp, int armor) : Character(hp, armor, 80)
    void attack(Character& other) override;
    
    const std::string& getName()
    {
        return name;
    }
    
private:
    const std::string name;
};

