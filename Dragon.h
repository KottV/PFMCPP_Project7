#pragma once

#include "Character.h"

struct Dragon : public Character
{
    
    Dragon(const std::string&, int, int);
    void attack(Character& other) override;
    const std::string& getName() override;
    std::string getStats() override;
   
private:
    const std::string name;
};

